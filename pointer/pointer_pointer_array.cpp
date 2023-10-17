#include <iostream>
//포인터 배열
int main()
{
    int *ptr[3]; //포인터 배열은 배열 포인터에서 소괄호만 빠진 형태이다.
                //int를 가리키는 세 개의 포인터가 담긴 배열이다.

    int a = 5;
    ptr[0] = &a;

    std::cout << "*ptr[0] : " << *ptr[0] << std::endl;

    // (*ptr)[0]과 *ptr[0]의 차이를 잘 인지하도록 한다.
    // (*ptr)[0]은 배열 포인터로서, ptr이 가리키는 배열의 0번째 칸을 의미하고,
    // *ptr[0]은 포인터 배열로서, ptr[0]이 가리키는 대상을 의미한다.

    char str[4][10] = { "hello", "world", "doodle", "google"};

    //배열 포인터로 출력하기.
    for(char (*pi)[10] = str; pi < str + 4; *pi++){
        for( char (*pj)=*pi; pj < *pi+10; pj++){
            printf("%c", *pj);
        }
        printf("\n");
    }

    //포인터 배열로 출력하기
    char *ptr_str[4];

    for(int i=0; i<4; i++){
        ptr_str[i] = str[i];
    }

    for(int i=0; i<4; i++){
        printf("%s\n", ptr_str[i]);
    }
}