#include <iostream>

// Пузырьковая сортировка
int bSort(int a[], int nSize) {
    while (nSize--) {
        bool swapped = false;
        for (int i = 0; i < nSize; i++) {
            if (a[i] > a[i + 1]) {
                std::swap(a[i], a[i + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
    return 0;
}

// Бинарный поиск
int binSearch(int a[], int left, int right, int key) {

    int n = 0;
    while (1) {
        n = (left + right) / 2;
        if (key < a[n]) {
            right = n - 1;
        }
        else if (key > a[n]) {
            left = n + 1;
        }
        else {
            return n;
        }

        if (left > right)
            return -1;
    }

    return -1;
}


int main(int argc, char** argv) {

    const int nSize = 11;
    int pList[nSize] = { 4,6,1,7,9,8,3,0,2,5,5 };

    int key = 7; // Это мы ищем
    int nIndex = 0;

    // Выводим весь список
    for (int i = 0; i < nSize; i++)
        std::cout  << pList[i] << " ";
    std::cout << std::endl;

    bSort(pList, nSize);

    // Отсортерованный список
    std::cout << "Sorted array..."<< std::endl;
    for (int i = 0; i < nSize; i++)
        std::cout  << pList[i] << " ";
    std::cout << std::endl;

    //Бинарный поиск
    nIndex = binSearch(pList, 0, nSize, key);
    if (nIndex >= 0)
        std::cout << "Found: " << pList[nIndex] << std::endl;
    else
        std::cout << "Not found " << std::endl;

    return 0;
}