#include <iostream>

int main()
{
    std::cout << "=================================" << std::endl;
    std::cout << "더블 포인터"<< std::endl;
    std::cout << "=================================" << std::endl;
    
    int a = 10;
    int *ptr_a = &a;
    int **ptr_ptr_a = &ptr_a;   //더플 포인터 선언

    std::cout << "1. a : "  << a << std::endl;
    std::cout << "2. &a : "  << &a << std::endl;
    std::cout << "3. ptr_a : "  << ptr_a << std::endl;
    std::cout << "4. &ptr_a : "  << &ptr_a << std::endl;
    std::cout << "5. ptr_ptr_a : "  << ptr_ptr_a << std::endl;
    std::cout << "6. *ptr_ptr_a : "  << *ptr_ptr_a << std::endl;
    std::cout << "7. **ptr_ptr_a : " << **ptr_ptr_a << std::endl;

}