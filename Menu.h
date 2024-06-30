#pragma once
#ifndef MENU_H
#define MENU_H
#include <iostream>
// #include <string>
using namespace std;

void PrintMenu();

void PrintMenu()
{
    cout << "1. Search Item" << endl;
    cout << "2. View All" << endl;
    cout << "3. Print Histogram" << endl;
    cout << "4. Exit" << endl;
}

#endif
