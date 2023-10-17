#include <iostream>

int main()
{

    std::cout << "=================================" << std::endl;
    std::cout << "포인터에 정수 더하기"<< std::endl;
    std::cout << "=================================" << std::endl;

    int a = 10;
    
    std::cout << "&a : " << &a << std::endl;
    std::cout << "(&a) + 1 : " << *(&a) + 1 << std::endl;
    std::cout << "(&a) + 2 : " << (&a) + 2 << std::endl;

    /**
     * 포인터 변수에 대해 자료형을 지정해야 하는 이유. 
     * 크기를 알아야 포인터 변수를 통해 일정 바이트 크기의 데이터를 읽어들일 수 있으며,
     * 포인터 변수에 정수값을 더할 때도 해당 데이터 타입의 크기만큼 곱해서 주소값을 더한다.
    */

    std::cout << "=================================" << std::endl;
    std::cout << "배열의 n번째 칸의 주솟값 구하기"<< std::endl;
    std::cout << "=================================" << std::endl;

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        std::cout << "arr[" << i << "]의 주소 : " << &arr[i] << std::endl;
    }

    std::cout << "=================================" << std::endl;
    std::cout << "배열(arr)의 경우 arr과 &arr[0]은 같은 의미이다."<< std::endl;
    std::cout << "=================================" << std::endl;


    printf("%d\n", arr);
    printf("%d\n", &arr[0]);

    std::cout << "=================================" << std::endl;
    std::cout << "배열(arr)의 경우 *arr과 arr[0]은 같은 의미이다."<< std::endl;
    std::cout << "=================================" << std::endl;


    printf("%d\n", *arr);
    printf("%d\n", arr[0]);


    std::cout << "=================================" << std::endl;
    std::cout << "배열(arr)의 경우 arr + i 와 &arr[i]은 같은 의미이다."<< std::endl;
    std::cout << "=================================" << std::endl;

    printf("%d\n", arr + 2);
    printf("%d\n", &arr[2]);

    std::cout << "=================================" << std::endl;
    std::cout << "배열(arr)의 경우 *(arr + i)과 & arr[i]은 같은 의미이다."<< std::endl;
    std::cout << "=================================" << std::endl;

    printf("%d\n", *(arr + 3));
    printf("%d\n", arr[3]);

    std::cout << "=================================" << std::endl;
    std::cout << "arr = &arr[0] 이므로, int *ptr = arr일 때 ptr = &arr[0]이다."<< std::endl;
    std::cout << "=================================" << std::endl;

    int *ptr = arr;
    // int *ptr = &arr[0]과 같은 의미이다.

    printf("arr의 값 : %d\n", arr);
    printf("ptr의 값 : %d\n", ptr);

    printf("arr+3의 값 : %d\n", arr+3);
    printf("ptr+3의 값 : %d\n", ptr+3);
    printf("&arr[3]의 값 : %d\n", &arr[3]);
    printf("&ptr[3]의 값 : %d\n", &ptr[3]);

    printf("arr[3]의 값 : %d\n", arr[3]);
    printf("ptr[3]의 값 : %d\n", ptr[3]);
    printf("*(arr+3)의 값 : %d\n", *(arr+3));
    printf("*(ptr+3)의 값 : %d\n", *(ptr+3));


    for(int *ptr_2 = arr; ptr_2 < arr+10; ptr_2++){
        printf("%d\n", *ptr_2);
    }



}