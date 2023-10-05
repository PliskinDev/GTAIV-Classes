#pragma once

#include <cstdint>
#include <cstring>

namespace rage
{
    class scrNativeRegistration {
    public:
        scrNativeRegistration(uint32_t tableSize) {
            m_tableSize = tableSize;
            m_nativeCount = 0;
            m_pNatives = new int[8 * tableSize];
            memset(m_pNatives, 0, 8 * tableSize * sizeof(int));
        }

        ~scrNativeRegistration() {
            delete[] m_pNatives;
        }

        uint32_t m_register_native(uint32_t nativeId, int nativeValue) {
            uint32_t index, currentId, currentValue;
            index = nativeId % m_tableSize;
            currentId = nativeId;
            currentValue = m_pNatives[8 * (nativeId % m_tableSize)];

            if (currentValue > 1) {
                while (currentValue != nativeId) {
                    currentId = (currentId >> 1) + 1;
                    index = (currentId + index) % m_tableSize;
                    currentValue = m_pNatives[8 * index];

                    if (currentValue <= 1)
                        return 0;
                }
                return 0;
            }

            m_pNatives[8 * index] = nativeId;
            m_pNatives[8 * index + 4] = nativeValue;
            ++m_nativeCount;
            return 1;
        }

        uint32_t get_hash(uint32_t index) {
            if (index < m_tableSize) {
                uint32_t nativeId = m_pNatives[8 * index];
                if (nativeId > 1) {
                    return m_pNatives[8 * index + 4];
                }
            }
            return 0;
        }

    private:
        uint32_t m_tableSize;
        uint32_t m_nativeCount;
        int* m_pNatives;
    };
}