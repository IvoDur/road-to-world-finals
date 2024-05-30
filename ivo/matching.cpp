#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    int t, question, result;
    bool first_question, first_zero;
    std::string s;

    std::cin >> t;

    for (t; t > 0; t--)
    {

        std::cin >> s;

        question = 0;
        first_question = false;
        first_zero = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (i == 0)
            {
                if (s[i] == '?')
                {
                    question++;
                    first_question = true;
                }
                else if (s[i] == '0')
                {
                    first_zero = true;
                    break;
                }
            }
            else if (s[i] == '?')
            {
                question++;
            }
        }

        if (first_zero)
        {
            result = 0;
        }
        else if (first_question)
        {
            result = 9 * pow(10, question - 1);
        }
        else
        {
            result = pow(10, question);
        }

        std::cout << result << "\n";
    }
    return 0;
}
