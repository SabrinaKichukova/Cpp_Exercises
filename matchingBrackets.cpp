#include <iostream>
#include <limits.h>
#include <bits/stdc++.h>
#include <sstream>
#include <algorithm>

using namespace std;

    void matchingBrackets(string str)
    {
        stack<int> firstIndex;
        stack<int> secIndex;

        int positions = 0;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(' && secIndex.empty())
            {
                firstIndex.push(i);
            }
            else if (str[i] == ')')
            {
                secIndex.push(i);
            }

            if (!secIndex.empty())
            {
                positions = secIndex.top() - firstIndex.top() + 1;

                cout << str.substr(firstIndex.top(), positions) << endl;

                firstIndex.pop();
                secIndex.pop();
            }

        }
    }

    int main()
    {
        string line;
        getline (cin, line);

        matchingBrackets(line);

    return 0;
    }
