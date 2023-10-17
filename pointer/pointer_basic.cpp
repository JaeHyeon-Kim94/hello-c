#include <iostream>

int main()
{
    std::cout << "=================================" << std::endl;
    std::cout << "a역참조를 통해 값 바꾸기     " << std::endl;
    std::cout << "=================================" << std::endl;

    int a = 10;
    int *ptr;
    ptr = &a;

    std::cout << "a : " << a << std::endl;
    std::cout << "&a : " << &a << std::endl;
    std::cout << "prt : " << ptr << std::endl;
    std::cout << "*ptr : " << *ptr << std::endl; 

    std::cout << "=================================" << std::endl;
    std::cout << "a역참조를 통해 값 바꾸기     " << std::endl;
    std::cout << "=================================" << std::endl;

    *ptr = 20;
    std::cout << "a : " << a << std::endl;
    std::cout << "*prt : " << *ptr << std::endl;

    
    std::cout << "=================================" << std::endl;
    std::cout << "포인터 변수의 주솟값 바꾸기     " << std::endl;
    std::cout << "=================================" << std::endl;

    int b = 100;
    ptr = &b;

    std::cout << "b : " << b << std::endl;
    std::cout << "&b : " << &b << std::endl;
    std::cout << "ptr : " << ptr << std::endl;
    std::cout << "*ptr : " << *ptr << std::endl;

}