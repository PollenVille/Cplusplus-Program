#pragma once
#ifndef STOREINVENTORY_H
#define STOREINVENTORY_H
#include <iostream>
#include <map>
#include <string>
using namespace std;

class StoreInventory
{
    /*Class that creates a store inventory*/
public:
    void SetInventory(map<string, int>& inventory); // map to store inventory
    void SearchItem(string item);                   // search for item in inventory
    void PrintInventory();                          // print inventory
    void PrintHistogram();                          // print inventory as histogram

private:
    map<string, int> storeInventory; // map to store inventory
};

#endif