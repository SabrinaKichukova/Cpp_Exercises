#include <iostream>
#include <limits.h>
#include <cstdlib>

using namespace std;

    int main()
    {
        int inputSize;

        cin >> inputSize;
        int arr[inputSize];

        int closest = INT_MAX;

        for (int i = 0; i < inputSize; i++)
        {
            cin >> arr[i];
        }


        if (inputSize == 1)
        {
            closest = 0;
            cout << closest << " ";
        }
        else
        {
            for (int j = 0; j < inputSize; j++)
            {

                for (size_t i = 0; i < inputSize; i++)
                {
                    for (size_t j = i+1; j < inputSize; j++)
                    {
                        int current = abs(arr[i] - arr[j]);

                        if (current < closest)
                        {
                            closest = current;
                        }
                    }
                }
            }
            cout << closest << " ";
        }
    return 0;
    }
