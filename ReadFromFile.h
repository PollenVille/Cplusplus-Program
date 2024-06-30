#pragma once
#ifndef READFROMFILE_H
#define READFROMFILE_H
#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;
#include "./WriteToFile.h"

map<string, int> ReadFromFile();

map<string, int> ReadFromFile()
{
    /*Reads from file and returns a map of items*/
    ifstream inFile;
    string item;

    inFile.open("CS210_Project_Three_Input_File.txt");

    if (!inFile.is_open())
    {
        cout << "Unable to open file";
    }

    string baseItem;
    map<string, int> items;

    while (inFile >> item)
    {
        items[item]++;
    }

    if (!inFile.eof())
    {
        cout << "Error reading file";
    }

    inFile.close();
    return items;
};

#endif
