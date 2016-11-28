//
// Created by 강성길 on 2016. 11. 28..
//
#include <iostream>
#include "Frame.h"

int main() {
    try {
        Frame *f1 = new Frame;
        Frame *f2 = new Frame[10];

        delete f1;
        delete[] f2;
    }
    catch (string msg) {
        cout << "Error msg:" << msg << endl;
    }
}