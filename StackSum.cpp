#include <iostream>
#include <limits.h>
#include <bits/stdc++.h>
#include <sstream>
#include <algorithm>

using namespace std;

    int main()
    {
        stack<int> stack;
        bool endFlag = true;
        string line;
        string command;
        string AddCmd = "add";
        const int AddNums = 2;
        int numToAdd;
        string RemoveCmd = "remove";
        int removeNum;
        string EndCmd = "end";
        int stackSum = 0;
        int stackCnt = 0;
        getline(cin, line);


        istringstream sstream(line);
        int temp;

        while (sstream >> temp)
        {
            stack.push(temp);
            stackCnt++;

        }

        while (endFlag)
        {
            cin >> command;

            transform(command.begin(), command.end(), command.begin(),
            [](unsigned char c){ return tolower(c); });

            if (command.compare(AddCmd) == 0)
            {
                for (int i = 0; i < AddNums; i++)
                {
                cin >> numToAdd;
                    {
                        stack.push(numToAdd);
                        stackCnt++;
                    }
                }
            }

            if (command.compare(RemoveCmd) == 0)
            {
                cin >> removeNum;

                if (stackCnt >= removeNum)
                {
                    for (int i = 0; i < removeNum; i++)
                    {
                        stack.pop();
                        stackCnt--;
                    }
                }
            }

            if (command.compare(EndCmd) == 0)
            {
                while (!stack.empty())
                    {
                        stackSum += stack.top();
                        stack.pop();
                    }
                cout << "Sum: " << stackSum << endl;
                endFlag = false;
            }
        }

    return 0;
    }
