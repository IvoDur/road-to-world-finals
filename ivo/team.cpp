#include <iostream>

int main(int argc, char const *argv[])
{
    int n, a, b, c;
    
    std::cin >> n;
    
    int cont = 0;

    for(n; n > 0 ; n--){
        std::cin >> a >> b >> c;
        if(a+b+c >= 2){
            cont++;
        }
    }
    
    std::cout << cont << "\n";

    return 0;
}

