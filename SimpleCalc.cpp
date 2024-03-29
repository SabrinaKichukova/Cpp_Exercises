#include <iostream>
#include <limits.h>
#include <bits/stdc++.h>
#include <sstream>
#include <algorithm>

using namespace std;

    void simpleCalc(string str)
    {
        stringstream ss;

        /* Storing the whole string into string stream */
        ss << str;

        /* Running loop till the end of the stream */
        string temp;
        int found;
        char symbol;
        stack<int> stackNums;
        stack<int> orderNums;
        stack<char> stackChars;
        stack<char> orderChars;
        int result = 0;
        char add = '+';
        char remove = '-';


        while (!ss.eof())
        {

            /* extracting word by word from stream */
            ss >> temp;

            /* Checking the given word is integer or not */
            if (stringstream(temp) >> found)
            {
                stackNums.push(found);
            }
            else if (stringstream(temp) >> symbol)
            {
                stackChars.push(symbol);
            }
            /* To save from space at the end of string */
            temp = "";
        }
        while (!stackNums.empty())
        {
            orderNums.push(stackNums.top());
            stackNums.pop();
        }

        while (!stackChars.empty())
        {
            orderChars.push(stackChars.top());
            stackChars.pop();
        }

        result = orderNums.top();
        orderNums.pop();

        while (!orderNums.empty())
        {

            if (orderChars.top() == add)
            {
                result += orderNums.top();
                orderNums.pop();
                orderChars.pop();
            }
            else if (orderChars.top() == remove)
            {
                result -= orderNums.top();
                orderNums.pop();
                orderChars.pop();
            }
        }

    cout << result << endl;

    }

    int main()
    {
        string line;
        getline (cin, line);

        simpleCalc(line);

    return 0;
    }
