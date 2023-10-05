#pragma once

namespace rage
{    
    constexpr char toLower(char c) 
    {
        return (c >= 'A' && c <= 'Z') ? (c - 'A' + 'a') : c;
    }

    constexpr unsigned int joaat(const char* str)
    {
        unsigned int hash = 0;
        while (*str)
        {
            hash += toLower(*str++);
            hash += (hash << 10);
            hash ^= (hash >> 6);
        }
        hash += (hash << 3);
        hash ^= (hash >> 11);
        hash += (hash << 15);
        return hash;
    }

    class HashTable
    {
    private:
        struct EntryBase
        {
            unsigned int nativeHash;
            unsigned int nativeCount;
        };

        template<typename T>
        struct Entry : public EntryBase
        {
            T (*nativeFunction)(...);
        };

        static const int SIZE = 100;
        EntryBase* table[SIZE];

    public:
        HashTable()
        {
            for (int i = 0; i < SIZE; ++i)
            {
                table[i] = nullptr;
            }
        }

        template<typename T>
        void addFunction(const char* functionName, T (*function)(...))
        {
            unsigned int hash = joaat(functionName);
            int index = hash % SIZE;

            while (table[index] != nullptr)
            {
                if (table[index]->nativeHash == hash)
                {
                    return;
                }
                index = (index + 1) % SIZE;
            }

            Entry<T>* entry = new Entry<T>();
            entry->nativeHash = hash;
            entry->nativeCount = 0;
            entry->nativeFunction = function;
            table[index] = entry;
        }

        template<typename T, typename... Args>
        T callFunction(const char* functionName, Args... args)
        {
            unsigned int hash = joaat(functionName);
            int index = hash % SIZE;
            while (table[index] != nullptr)
            {
                if (table[index]->nativeHash == hash)
                {
                    Entry<T>* entry = static_cast<Entry<T>*>(table[index]);
                    return entry->nativeFunction(args...);
                }
                index = (index + 1) % SIZE;
            }
            return T();
        }
    };
}