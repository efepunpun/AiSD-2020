#pragma once
#include <iterator>

template <typename T>
class VectorIter : public std::iterator<std::input_iterator_tag, T> {
private:
    T* ptr;
public:
    VectorIter(const VectorIter& it) : ptr(it.ptr) {} // ����������� const
    VectorIter(T* ptr) : ptr(ptr) {} // �����������

// ���������� ����������

    // �������� �������� ���������
    bool operator==(VectorIter const& other) const {
        return ptr == other.ptr;
    }

    // �������� �������� �����������
    bool operator!=(VectorIter const& other) const {
        return ptr != other.ptr;
    }

    // ������� �������� �������������
    typename VectorIter::reference operator*() const {
        return *ptr;
    }

    // ������� �������� ���������
    VectorIter& operator++() {
        ++ptr;
        return *this;
    }
};