#include <iostream>
using namespace std;


int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Получаем указатель на первый элемент массива
    int *ptr = arr;

    // Доступ к 4-му элементу и вывод его значения
    int fourthElement = *(ptr + 3 ); // Умножаем индекс на размер элемента
    std::cout << fourthElement << std::endl;

}
