#pragma once

#include <cstdint>

namespace rage
{
    class CReplayWidget
    {
    public:
        virtual ~CReplayWidget() {}
        void* operator new(size_t size) {
            return ::operator new(size);
        } 

        void operator delete(void* ptr){
            ::operator delete(ptr);
        }
    };

    class CReplayToolOverlay : public CReplayWidget
    {
    public:
        virtual void Render() const = 0;
        virtual void Update() = 0;
        virtual ~CReplayToolOverlay() {}
    };
}