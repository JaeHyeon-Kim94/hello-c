#include <iostream>

int main()
{
    int n;

    std::cout << "자연수 입력 : ";
    std::cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<2*i; j+=2){
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}