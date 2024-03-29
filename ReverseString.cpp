#include <iostream>
#include <limits.h>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

    int main()
    {
        string arr;
        getline (cin, arr);

         stack<char> stack;

        for (int i = 0;i < arr.length(); i++)
        {
        stack.push(arr[i]);
        }

        while (!stack.empty())
        {
        cout << stack.top() <<"";
        stack.pop();
        }

    return 0;
    }
