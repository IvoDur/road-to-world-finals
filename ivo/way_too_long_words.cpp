#include <iostream>

int main(int argc, char const *argv[])
{
    int n;
    std::string w;
    
    std::cin >> n;
    
    for(n; n > 0 ; n--){
        std::cin >> w;
        if(w.length() > 10){
            
            std::string a;
            
            a = w.substr(1,w.length()-2);

            std::cout << w[0] << a.length() << w[w.length()-1] << "\n";
        }
        else{
            std::cout << w << "\n";
        }
    }
    
    return 0;
}

