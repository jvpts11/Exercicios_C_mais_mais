#include <iostream>
#include <array>
#include <string>

#define ARRAYSIZE 5

using std::string; 
using std::cout;
using std::array;

void printShit(array<string, ARRAYSIZE> whing);
void orderAlphabetically(array<string, ARRAYSIZE> &shit);
array<string, ARRAYSIZE> phrases;

int main()
{
    cout << "Insira 5 frases: ";
    for (int i = 0; i < ARRAYSIZE; i++) {
        std::getline(std::cin, phrases[i]);
    }
    orderAlphabetically(phrases);

    printShit(phrases);
}

void orderAlphabetically(array<string,ARRAYSIZE> &shit){
    int temp = ARRAYSIZE;

    for (auto i = 0; i < int(shit.size()) - 1; i++) {
        for (auto j = i + 1; j < int(shit.size()); j++) {
            if (shit[i] > shit[j]) {
                shit[i].swap(shit[j]);
            }
        }
    }
}

void printShit(array<string, ARRAYSIZE> whing) {
    for (int j = 0; j < ARRAYSIZE; j++) {
        cout << whing[j] << "\n";
    }
}