#include "utility.h"
#include <iostream>

namespace helper {

    // пузырькова¤ сортировка
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
}