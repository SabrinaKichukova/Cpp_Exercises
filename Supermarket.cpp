#include <iostream>
#include <limits.h>
#include <bits/stdc++.h>
#include <sstream>
#include <algorithm>

using namespace std;

    void addCustomer(string str)
    {
        // queue<string> nameQueue;
        // string paid = "Paid";
        // string temp = str;
        // int count;

        // if (!temp.compare(paid))
        // {
        //     nameQueue.push(temp);
        // }
        // else
        // {
        //     count++;
        // }

        // while (!nameQueue.empty())
        // {
        //     cout << nameQueue.front();

        //     nameQueue.pop();

        //     if (!nameQueue.empty())
        //     {
        //         cout << ", ";
        //     }
       // }
       // cout << temp << endl;
    }

    int main()
    {
        bool endFlag = true;
        string name;
        queue<string> nameQueue;
        string paid = "Paid";
        int count;

        while (endFlag == true)
        {
            cin >> name;

            if (!name.compare("End"))
            {
                endFlag = false;
            }

            nameQueue.push(name);

            if (!name.compare(paid))
            {
                count++;
            }
            else
            {
                count++;
            }
        }

    return 0;
    }



// while (!nameQueue.empty())
//                 {
//                     cout << nameQueue.front() << endl;

//                     nameQueue.pop();
//                 }