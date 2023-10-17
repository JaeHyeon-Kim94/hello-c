#include <iostream>

int main()
{
    int n;

    std::cout << "자연수 입력 : ";
    std::cin >> n;

    for(int i=0; i<n; i++){
        for(int j=n-i; j>0; j--){
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}