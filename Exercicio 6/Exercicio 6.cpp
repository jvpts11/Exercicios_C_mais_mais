#include <iostream>
#include <fstream>

#include "FileHandler.h"

int main()
{
    using namespace fileHandling;
    using std::cout;
    using std::cin;
    using std::string;
    /*
    string name;

    std::cout << "Introduce a File Name: ";
    std::cin >> name;
    
    */
    
    string text;

    string shit = getString("file.txt",text);
    
    cout << shit;
}