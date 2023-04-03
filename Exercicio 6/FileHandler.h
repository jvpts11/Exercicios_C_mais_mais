#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <array>

#define ARRAYSIZE 30

namespace fileHandling {

    using std::string;
    using std::fstream;
    using std::array;

    fstream file;
    string thingToWrite;

    void createFile(string fileName) {
        file.open(fileName, std::ios::out);
        file.close();
    }

    string getString(string fileName, string receptor_string) {
        try {
            string thing;
            file.open(fileName, std::ios::in);
            if (file.is_open()) {
                std::cout << "file is Opened with Success" << std::endl;
                while (getline(file,thing)) {
                    //std::cout << receptor_string << std::endl;
                    receptor_string.append(thing);
                }
                file.close();
            }
        }
        catch(...) {
            std::cout << "N�o foi poss�vel abrir o arquivo";
        }
        return receptor_string;
    }
}