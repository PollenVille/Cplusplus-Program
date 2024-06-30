#pragma once
#ifndef STOREINVENTORYDEF_H
#define STOREINVENTORYDEF_H
#include <iostream>
#include <map>
#include <string>
using namespace std;
#include "StoreInventory.h"

void StoreInventory::SetInventory(map<string, int>& inventory)
{
    /*Updates inventory
    Passes map created from ReadFromFile.h and stores
    it in to storeInventory*/
    cout << "Updating inventory..." << endl;
    storeInventory = inventory;
}

void StoreInventory::SearchItem(string item)
{
    /*Searches for item in inventory and prints quantity*/
    auto it = storeInventory.find(item);
    if (it != storeInventory.end())
    {
        cout << it->first << ": " << it->second << endl;
    }
    else
    {
        cout << "Item not found: " << item << endl;
    }
}

void StoreInventory::PrintInventory()
{
    /*Prints complete inventory as a list*/
    for (const auto& item : storeInventory)
    {
        cout << item.first << ": " << item.second << endl;
    }
}

void StoreInventory::PrintHistogram()
{
    /*Prints data as a histogram*/
    for (const auto& item : storeInventory)
    {
        cout << item.first << ": ";
        for (int i = 0; i < item.second; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

#endif