#include <iostream>
#include "singleton.h"
#include "utility.h"

using namespace helper;

class Foo
{
    DECLARE_SINGLETON(Foo)
public:
    Foo() {
    }
    ~Foo() {
    }

    void print(const char *str) {
        std::cout << str << std::endl;
    }
};
INSTANCE_SINGLETON(Foo)


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

    // Отсортированный список
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


    SINGLETON_CREATE_INIT(Foo)
    Foo::GetInstance()->print("Hello Instance");


    return 0;
}