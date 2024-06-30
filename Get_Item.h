#pragma once
#ifndef GET_ITEM_H
#define GET_ITEM_H
#include <iostream>
#include <string>
using namespace std;

string get_item()
{
    // Function to get a string from the user
    string x;
    string temp;
    cin >> temp;
    for (int i = 0; i < temp.length(); i++)
    {
        if (isalpha(temp[i]))
        {
            if (isupper(temp[i]) && i != 0)
            {
                temp.at(i) = tolower(temp[i]);
            }
            if (i == 0 && islower(temp[i]))
            {
                temp.at(i) = toupper(temp[i]);
            }
        }
        else
        {
            cout << "Invalid input. Please enter a valid item: ";
            cin >> temp;
            i = -1;
        }
    }
    x = temp;
    return x;
}

#endif
