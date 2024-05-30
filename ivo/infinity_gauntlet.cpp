#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    int m = 6-n;
    std::vector<std::string> colors;
    
    std::string input;
    for(n; n > 0; n--){
        std::cin >> input;
        colors.push_back(input);
    }

    std::vector<std::string> gems = {"Time", "Mind", "Soul", "Power", "Reality", "Space"};

    for(std::string color: colors){
        if(color == "green"){
            gems.erase(std::remove(gems.begin(), gems.end(), "Time"), gems.end());
        }
        if(color == "yellow"){
            gems.erase(std::remove(gems.begin(), gems.end(), "Mind"), gems.end());
        }
        if(color == "orange"){
            gems.erase(std::remove(gems.begin(), gems.end(), "Soul"), gems.end());
        }
        if(color == "purple"){
            gems.erase(std::remove(gems.begin(), gems.end(), "Power"), gems.end());
        }
        if(color == "red"){
            gems.erase(std::remove(gems.begin(), gems.end(), "Reality"), gems.end());
        }
        if(color == "blue"){
            gems.erase(std::remove(gems.begin(), gems.end(), "Space"), gems.end());
        }
    }

    std::cout << m << "\n";
    for(std::string gem: gems){
        std::cout << gem << "\n";
    }

    return 0;
}

