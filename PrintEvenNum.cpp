#include <iostream>
#include <limits.h>
#include <bits/stdc++.h>
#include <sstream>
#include <algorithm>

using namespace std;

    void printEven(string str)
    {
         stringstream ss;

        /* Storing the whole string into string stream */
        ss << str;
        queue<int> evenQueue;
        string temp;
        int found;

        while (!ss.eof())
        {

            /* extracting word by word from stream */
            ss >> temp;

            /* Checking the given word is integer or not */
            if (stringstream(temp) >> found)
            {
                if (found % 2 == 0)
                {
                    evenQueue.push(found);
                }
            }
        }

        while (!evenQueue.empty())
        {
            cout << evenQueue.front();

            evenQueue.pop();

            if (!evenQueue.empty())
            {
                cout << ", ";
            }
        }
        cout << " " << endl;
    }

    int main()
    {
        string line;
        getline (cin, line);

        printEven(line);

    return 0;
    }

    // Completed
