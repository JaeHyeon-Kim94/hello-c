#include <stdio.h>

int main()
{
    int i = 0;
    goto START;
    START:
        printf("%d\n", i++);
        if(i >= 10){
            i=0;
            goto BREAK;
        } else {
            goto START;
        }
        

    BREAK:
        printf("break\n");

    
}