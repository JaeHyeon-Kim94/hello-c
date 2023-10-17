#include <iostream>

int main()
{
    char s[100] = "hello";

    //1. strlen
    std::cout << "strlen(s) : " << strlen(s) << std::endl;

    //2. strcpy
    char s2[100];
    strcpy(s2, s);
    std::cout << "strcpy(s2, s)... [s2] : " << s2 << std::endl;

    //3. strcat
    char s3[100] = "hello, ";
    char s4[100] = "world";

    strcat(s3, s4);
    strcat(s3, "!");

    std::cout << "strcat(s3, s4), strcat(s3, \"!\") : " << s3 << std::endl;


    //4. strncpy
    char s5[100] = "hello, world";
    char s6[100];
    //maximum copy size is sizeof(s6)
    strncpy(s6, s5, sizeof(s6)); 

    std::cout << "strncpy(s6, s5) : " << s6 << std::endl;

    //5. strncat
    char s7[100] = "hello, ";
    char s8[100] = "world";
    //maximum concat size is sizeof(s7)
    strncat(s7, s8, sizeof(s7) - strlen(s7)-1);

    std::cout << "strncat(s7, s8, sizeof(s7) - strlen(s7)-1) : " << s7 << std::endl;

    //6. strcmp
    char s9[100] = "sample";
    char s10[100] = "simple";

    char result[100];
    (strcmp(s9, s10) < 0) ? strcpy(result, "빠릅니다.") : strcpy(result, "일치하거나 늦습니다.");
    std::cout << "strcmp(s9, s10) : " << "s9는 s10보다 사전 순으로 " << result << std::endl;
}