#include <stdio.h>

int main()
{
    int point;
    char result;
    printf("점수 입력 : ");
    scanf("%d", &point);

    point /= 10;

    switch(point)
    {
        case 10:
        case 9:
            result = 'A';
            break;
        
        case 8:
            result = 'B';
            break;

        case 7:
            result = 'C';
            break;
        
        case 6:
            result = 'D';
            break;

        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            result = 'F';
            break;

        default:
            break;
    }

    if(result != '\0'){
        printf("학점 : %c\n", result);
    } else {
        printf("잘못된 점수 : %d\n", point);
    }


    return 0;
}