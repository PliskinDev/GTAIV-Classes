#pragma once

#include <cstdint>

namespace rage 
{
    class datBitBuffer 
    {
    private:
        uint8_t* buffer;
        uint32_t bufferLength;
        uint32_t bitPosition;

    public:
        datBitBuffer(uint32_t length) {
            bufferLength = length;
            buffer = new uint8_t[length];
            bitPosition = 0;
        }

        ~datBitBuffer() {
            delete[] buffer;
        }

        void writeBit(bool bit) {
            if (bitPosition >= bufferLength * 8) {
                return;
            }

            uint32_t bytePosition = bitPosition / 8;
            uint32_t bitOffset = bitPosition % 8;

            uint8_t mask = 1 << bitOffset;

            if (bit) {
                buffer[bytePosition] |= mask;
            } else {
                buffer[bytePosition] &= ~mask;
            }

            bitPosition++;
        }

        bool readBit() {
            if (bitPosition >= bufferLength * 8) {
                return false;
            }

            uint32_t bytePosition = bitPosition / 8;
            uint32_t bitOffset = bitPosition % 8;
            uint8_t mask = 1 << bitOffset;
            uint8_t byteValue = buffer[bytePosition];
            bool bit = (byteValue & mask) != 0;

            bitPosition++;

            return bit;
        }
    };
}