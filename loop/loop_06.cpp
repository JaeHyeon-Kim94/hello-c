#include <iostream>

int main()
{
    int n;

    std::cout << "자연수 입력 : ";
    std::cin >> n;

    for(int i=n; i>0; i--){
        for(int j=1; j<=i; j++){
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}