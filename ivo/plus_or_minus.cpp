#include <iostream>

int main(int argc, char const *argv[])
{
    int t, a, b, c;
    
    std::cin >> t;
    
    for(t; t > 0 ; t--){
        std::cin >> a >> b >> c;
        if(a+b == c){
            std::cout << "+" << "\n";
        }
        else{
            std::cout << "-" << "\n";
        }
    }
    
    return 0;
}

