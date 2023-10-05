#pragma once

namespace rage
{    
    class CDeltaBuffer 
    {
    private:
        int* buffer;
        int size;
        int position;
    public:        
        CDeltaBuffer(int bufferSize) {
            size = bufferSize;
            buffer = new int[size];
            position = 0;
        }

        ~CDeltaBuffer() {
            delete[] buffer;
        }

        void addValue(int value) {
            buffer[position] = value;
            position = (position + 1) % size;
        }

        int calculateDelta() {
            if (position >= 2) {
                int previousIndex = (position - 1) % size;
                int prevValue = buffer[previousIndex];
                int currentValue = buffer[position];
                return currentValue - prevValue;
            }
            else {
                return 0;
            }
        }
    };
}