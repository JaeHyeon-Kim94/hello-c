#include <iostream>

int main()
{
    int n;

    std::cout << "자연수 입력 : ";
    std::cin >> n;

    for(int i=1; i<2*n; i+=2){
        for(int j=1; j<=i; j++){
            std::cout << j << " ";
        }

        std::cout << std::endl;
    }
}