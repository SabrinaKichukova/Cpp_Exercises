#include <iostream>
#include <sstream>
#include <cctype>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

    int punctuation(string & input)
    {
        int punctcount = 0;
         for(int i = 0; i < input.length(); i++)
         {
            if (ispunct(input[i]) != 0)
            {
                punctcount++;
            }
         }
         return punctcount;
    }

    vector<int> split(string str, char del)
    {
        string temp = "";
        vector<int> puncVect;

        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] != del)
            {
                temp += str[i];
            }
            else
            {

                int puncNum = punctuation(temp);
                puncVect.push_back(puncNum);

                temp = "";
            }
        }
      return puncVect;
    }
    void printFrequency(vector<int> vec)
    {
        map<int, int> M;

        for (int i = 0; vec[i]; i++)
        {
            if (M.find(vec[i]) == M.end())
            {
                M[vec[i]] = 1;
            }
            else
            {
                M[vec[i]]++;
            }
        }
        for (auto& it : M)
        {
            cout << it.first << " symbol sentences: "
                << it.second << '\n';
        }
    }

    int main()
    {
        string arr;
        getline (cin, arr);
        vector<int> puncVect;

        puncVect = split(arr,'|');
        printFrequency(puncVect);
    }

// Test:

//Complited

// Input:
//     This is a test!|

// Output:
//     1 symbol sentences: 1

// Input;
//     Is this seriously the second exam?|This looks like a pice of cake!|Yum, yum, yum.|

// Output:
//     1 symbol sentences: 2
//     3 symbol sentences: 1

// Input;
//     Or is it???|What do you think?!?|

// Output:
//     3 symbol sentences: 2