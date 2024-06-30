#include <iostream>
#include <map>
#include <stdexcept>
#include <string>
using namespace std;
#include "ReadFromFile.h"
#include "menu.h"
#include "WriteToFile.h"
#include "StoreInventoryDef.h"
#include "Get_Item.h"

int main()
{
    /*Main feature. Creates new store, reads in data ffom file and stores it into a map*/
    StoreInventory store;
    map<string, int> inventory;
    inventory = ReadFromFile();
    store.SetInventory(inventory);
    WriteToFile(inventory, "frequency.dat");
    int choice;

    while (true)
    {
        PrintMenu();
        try
        {
            cin >> choice;
            if (cin.fail())
            {
                throw runtime_error("Invalid input");
            }
            switch (choice)
            {
            case 1:
                cout << "Enter item to search for: ";
                store.SearchItem(get_item());
                break;
            case 2:
                cout << "Printing inventory..." << endl; // prints enitre inventory
                store.PrintInventory();
                break;
            case 3:
                cout << "Printing histogram..." << endl;// prints histogram
                store.PrintHistogram();
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid Choice" << endl;
                break;
            }
        }
        catch (runtime_error& e)
        {
            cout << e.what() << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
    return 0;
}