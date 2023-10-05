#pragma once

namespace rage
{
    void* rage_new(size_t size) {
        if (size == 0) {
            return nullptr;
        }
        void* ptr = ::operator new(size);
        return ptr;
    }

    void rage_delete(void* ptr) noexcept {
        if (ptr != nullptr) {
            ::operator delete(ptr);
        }
    }      

    template<typename T>
    T* rage_allocate(size_t size) {
        T* ptr = rage_new T[size];
        return ptr;
    }

    template<typename T>
    void rage_deallocate(T* ptr) {
        delete[] ptr; 
    }

    template <typename T>
    void rage_memcpy(T* destination, const T* source, size_t num_elements) {
        if (destination == nullptr || source == nullptr || num_elements == 0) {
            return;
        }
        for (size_t i = 0; i < num_elements; ++i) {
            destination[i] = source[i];
        }
    }

    template <typename T>
    void rage_memset(T* ptr, T value, size_t num_elements) {
        if (ptr == nullptr || num_elements == 0) {
            return;
        }
        for (size_t i = 0; i < num_elements; ++i) {
            ptr[i] = value;
        }
    }

    template <typename T>
    T* rage_reallocation(T* ptr, size_t size) {
        if (ptr == nullptr || size == 0) {
            return nullptr;
        }

        T* new_ptr = new T[size];
        rage_memcpy(new_ptr, ptr, size);
        delete[] ptr;
        return new_ptr;
    }

    template <typename T>
    T* rage_contiguous_allocation(size_t num_elements, size_t element_size) {
        if (num_elements == 0 || element_size == 0) {
            return nullptr;
        }
        size_t total_size = num_elements * element_size;
        T* ptr = new T[num_elements];
        rage_memset(ptr, T(0), num_elements);
        return ptr;
    }
}





