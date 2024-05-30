#include <iostream>

int main(int argc, char const *argv[])
{
    std::string s1, s2;

    std::cin >> s1;
    std::cin >> s2;

    int r = 0;

    for (int i = 0; i < s1.length(); i++)
    {
        char ch1 = std::tolower(s1[i]);
        char ch2 = std::tolower(s2[i]);

        if (ch1 > ch2)
        {
            r = 1;
            break;
        }
        if (ch1 < ch2)
        {
            r = -1;
            break;
        }
    }

    std::cout << r << "\n";

    return 0;
}
