#include <iostream>
#include <vector>
int main()
{
    std::vector<int> database;
    int n, d, number;
    std::cin >> n >> d;
    while (std::cin >> number)
    {
        database.push_back(number);
    }
}
