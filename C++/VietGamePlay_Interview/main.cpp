#include <iostream>
#include <vector>
#include <string>

using namespace std;
vector<string> output;

string ruleOftheGame(const int &n)
{
    if ((n % 3 == 0) && (n % 5 == 0))
    {
        return "FizzBuzz";
    }
    else if (n % 3 == 0)
    {
        return "Fizz";
    }
    else if (n % 5 == 0)
    {
        return "Buzz";
    }
    else
        return to_string(n);
}

int main()
{
    unsigned int n;
    unsigned int count = 0; // this count use for print output easier to see
    cout << "Input: ";
    cin >> n;

    // Search each number of 1 -> n. What number is fit with rule of the game then push that number to vector of string
    for (int i = 1; i <= n; i++)
    {
        output.push_back(ruleOftheGame(i));
        // cout<<" "<<ruleOftheGame(i); //Print straight away, no need store in vector
    }

    /* Print output with some symbol for easier to see */
    cout << ("\[");
    for (string item : output)
    {
        cout << "\"" << item << "\"";
        count++;
        if (count == output.size())
        {
            break;
        }
        else
            cout << "\,";
    }
    cout << ("\]\n");

    return 0;
}