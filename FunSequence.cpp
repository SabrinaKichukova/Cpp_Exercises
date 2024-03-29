#include <iostream>
#include <limits.h>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

    int main()
    {
        int inputSize;
        cin >> inputSize;
        int input;

        vector<int> arr;
        vector<int> arr1;

        for (int i = 0; i < inputSize; i++)
        {
            cin >> input;
            arr.push_back(input);
        }

        double average;

        for (int i = 0; i < inputSize; i++)
        {
            average += arr[i];
        }

        average /= inputSize;

        sort(arr.begin(), arr.end(), greater<int>());

        for (int i = 0; i < arr.size(); i++)
        {
            if ((arr[i] % 2 == 0) && (arr[i] <= average ))
            {
                arr1.push_back(input);
                cout << arr[i] << ' ';
            }
        }
        if (arr1.size() == 0)
        {
            cout << "No" << endl;
        }

    return 0;
    }

    // Test:

// Input:
//     8
//     -7 6 4 4 8 3 12 -6

// Output:
//     -6

// Input;
//     10
//     15 50 -61 3 -22 222 -4 1 11 -5

// Output:
//     -4 -22

// Input;
//     1 5

// Output:
// No