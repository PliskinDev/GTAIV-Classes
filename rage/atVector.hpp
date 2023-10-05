#pragma once

#include <cstdint>

namespace rage
{
    template <typename T>
    class atVector 
    {
    private:
        T* m_data;
        size_t m_capacity;
        size_t size;

    public:
        atVector() : m_data(nullptr), m_capacity(0), size(0) {}

        ~atVector() {
            delete[] m_data;
        }

        void push_back(const T& element) {
            if (size >= m_capacity) {
                size_t newCapacity = (m_capacity == 0) ? 1 : m_capacity * 2;
                reserve(newCapacity);
            }

            m_data[size] = element;
            size++;
        }

        void reserve(size_t newCapacity) {
            if (newCapacity <= m_capacity)
                return;

            T* newData = new T[newCapacity];

            for (size_t i = 0; i < size; i++) {
                newData[i] = m_data[i];
            }

            delete[] m_data;

            m_data = newData;
            m_capacity = newCapacity;
        }

        size_t getSize() const {
            return size;
        }

        T& operator[](size_t index) {
            if (index >= size) {
            }

            return m_data[index];
        }
    };
}