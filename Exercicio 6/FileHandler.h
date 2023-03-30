#pragma once

#include <iostream>
#include <fstream>
#include <string>

#define ARRAYSIZE 500

namespace fileHandling {

    using std::string;
    using std::fstream;

    fstream file;
    string thingToWrite;

    void createFile(string fileName) {
        file.open(fileName, std::ios::out);
        file.close();
    }

    void getString(string fileName, char arrayToSend[ARRAYSIZE]) {
        char stream[ARRAYSIZE];
        file.open(fileName, std::ios::in);
        
    }
}