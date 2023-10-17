#include <iostream>

int main()
{
    std::cout << "=================================" << std::endl;
    std::cout << "배열 포인터(배열을 가리키는 포인터)"<< std::endl;
    std::cout << "=================================" << std::endl;

    int arr[3] = {1, 2, 3};
    
    int (*p_arr)[3];
    p_arr = &arr;

    for(int i=0; i<3; i++){
        std::cout << (*p_arr)[i] << std::endl;
    }

    std::cout << "=================================" << std::endl;
    std::cout << " > 포인터는 같은 자료형의 데이터만 가리킬 수 있듯이, 배열 포인터도 일치하는 자료형의 배열만을 가리킬 수 있다."<< std::endl;
    std::cout << "=================================" << std::endl;

    int a = 5;
    // int *p1 = &arr;      /** 에러. ==> int (*p1)[3] = &arr; */
    // int (*p2)[3] = &a    /** 에러. ==> int *p2 = &a; */
    // int (*p3)[4] = &arr  /** 에러. 3칸짜리 배열을 4칸짜리 배열 포인터에 담을 수 없다. */
}