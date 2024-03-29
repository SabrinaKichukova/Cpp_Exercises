#include <iostream>
#include <sstream>
#include <cctype>

using namespace std;

    string specialItems(string & input)
    {
        for (size_t i = 0; i <= input.length(); i++)
        {
            if ((input[i] != 'a') && (input[i] != 'e') && (input[i] != 'i') && (input[i] != 'o') && (input[i] != 'u'))
            {
                if(input[i] == input[i+1])
                {
                    int pos = i+1;
                    if (pos <= input.length())
                    {
                        input.erase(pos, 1);
                        i--;
                    }
                }
            }

        }
        return input;
    }

    int main()
    {
        string arr;
        getline (cin, arr);

        string output;

        output = specialItems(arr);

        cout << output << endl;

    }

        // Test:

// Input:
//     C++  is the beeest!!

// Output:
//     C+ is the beeest!

// Input;
//     I  lllovve  Programming!
// Output:
//     I love Programing!

// Input;
//     ttttttt

// Output:
//     t

// Complited