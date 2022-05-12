#pragma once
#include <iostream>
#include <conio.h>

using std::string;
using std::cout;

void Edit(string& str) {
    char sym = '\0';
    cout << "\nInput : ";
    cout << str;
    while (sym != 13) {
        if (_kbhit()) {
            sym = _getwch();

            if (sym != 13) {

                if (sym != '\b') {
                    str += sym;
                    cout << sym;
                }
                else if (str.size() != 0) {
                    str.erase(str.end() - 1);
                    cout << "\b \b";
                }

            }

        }
    }

    for (int i = 0;i < str.size() + 11;i++) cout << "\b \b";

}