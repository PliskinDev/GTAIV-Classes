#pragma once
#include "../base/datBase.hpp"

namespace rage
{
    template<typename T, typename Base = datBase>
    class atDNode : public Base {
    public:
        T data;
        atDNode* prev;
        atDNode* next;

        atDNode(const T& value) : data(value), prev(0), next(0) {}

        void setPrev(atDNode* node) {
            prev = node;
        }

        void setNext(atDNode* node) {
            next = node;
        }

        atDNode* getPrev() const {
            return prev;
        }

        atDNode* getNext() const {
            return next;
        }

        void setData(const T& value) {
            data = value;
        }

        T getData() const {
            return data;
        }
    };
}