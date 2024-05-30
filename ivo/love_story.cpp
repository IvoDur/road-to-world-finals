#include <iostream>

int main(int argc, char const *argv[])
{
    int t;
    std::string s;
    
    std::cin >> t;
    

    for(t; t > 0 ; t--){
        
        int cont = 0;
        std::cin >> s;
        
        if(s[0]!='c'){
            cont++;
        }
        if(s[1]!='o'){
            cont++;
        }
        if(s[2]!='d'){
            cont++;
        }
        if(s[3]!='e'){
            cont++;
        }
        if(s[4]!='f'){
            cont++;
        }
        if(s[5]!='o'){
            cont++;
        }
        if(s[6]!='r'){
            cont++;
        }
        if(s[7]!='c'){
            cont++;
        }
        if(s[8]!='e'){
            cont++;
        }
        if(s[9]!='s'){
            cont++;
        }
        
        std::cout << cont << "\n";
    }
    

    return 0;
}

