#pragma once
#ifndef WRITETOFILE_H
#define WRITETOFILE_H
#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

// Takes in the map and saves it to a file

void WriteToFile(map<string, int>& data, const string& filename)
{
    ofstream file;
    file.open(filename);
    if (file.is_open())
    {
        cout << "Writing to file..." << endl;
        for (const auto& pair : data)
        {
            file << pair.first << ": " << pair.second << endl;
        }
        cout << "Closing file..." << endl;
        file.close();
    }
    else
    {
        cout << "Unable to open file: " << filename << endl;
    }
};
#endif