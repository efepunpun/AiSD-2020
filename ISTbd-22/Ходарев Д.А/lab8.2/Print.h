#pragma once
#include <iostream>
#include "Vector.h"
// �����
template<typename T>
void print(Vector<T>& vector) {
    for (auto& element : vector) {  // ���������� �� �������
        std::cout << element << " "; // �������
    }
}