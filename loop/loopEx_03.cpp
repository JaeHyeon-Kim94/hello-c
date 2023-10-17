#include <iostream>
int main()
{
    int n;

    std::cout << "자연수 입력 : ";
    std::cin >> n;

    for(int i=1; i<=n; i++){
        int mod = i%10;
        if(mod == 3 || mod == 6 || mod == 9){
            std::cout << "* ";
        } else {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

}