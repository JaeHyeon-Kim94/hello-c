#include <iostream>

int main()
{
    //이차원 배열
    int arr[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    //int arr에 1을 더하면?
    printf("arr     : %d\n", arr);
    printf("arr+1   : %d\n", arr+1);
    //16이 더해진다. &arr[0]과 &arr[1] 사이에는 4개의 int(4 byte)가 존재하며, 4(개)*4(byte) = 16이기 때문.

    //네 칸짜리 int 배열을 가리키는 포인터 변수에 각 네 칸의 int 배열을 담는 행 중 두 번째 행의 주소를 담는다.
    int (*p_row)[4] = &arr[1];

    for(int i=0; i<4; i++){
        printf("%d \n", (*p_row)[i]);
    }

    //즉, 이차원 배열의 한 행을 가리키는데 배열 포인터를 사용할 수 있다.

    int *ptr = arr[1];  //포인터 변수 ptr은 arr[1]의 첫 번째 요소를 가리키는 주솟값이 담긴다.
    int (*ptr_arr)[4] = &arr[1]; //포인터 변수 ptr_arr은 이차원 배열 arr의 두 번째 요소인 네 칸짜리 int 배열의 주소값이 담긴다.

    //다음 예제를 이해해보도록 한다.
    for(int (*pi)[4] = &arr[0]; pi < arr+3; pi++){
        for(int (*pj)=*pi; pj < *pi+4; pj++){
            printf("%4d", *pj);
        }
        printf("\n");
    }

}