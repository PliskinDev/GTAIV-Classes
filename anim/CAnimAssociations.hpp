#pragma once

class CAnimAssociations
{
public:
    void* m_vmt;
};


class CAnimAssociationsNY
{
public:
    virtual ~CAnimAssociationsNY() = default;
    void operator delete(void* ptr) {
        if(ptr) {
            ::operator delete(ptr);
        }
    }
};