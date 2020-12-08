#pragma once
#include <iostream>
#include "Vector.h"


// ����� ���� �������� 
template<typename T>
T sum(Vector<T>& vector) {
    T counter = 0;
    for (auto& element : vector) { // ���������� �� �������
        counter = counter + element; // ��������� � counter'�� ��� �������� ����������
    }
    return counter;
}

// ������� ��������
template<typename T>
T average(Vector<T>& vector) {
    return vector.quantity() ? sum(vector) / vector.quantity() : 0;
}
