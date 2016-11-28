//
// Created by 강성길 on 2016. 11. 28..
//
#include <iostream>
#include "HearFile/Frame.h"
#include "HearFile/ExArray.h"

int main() {
    ExArray<int> arr1(3);
    ExArray<char> arr2(4);
    ExArray<double> arr3(5);

    arr1.addData(2);
    arr2.addData('A');
    arr3.addData(32.12);

    arr1.pritData();
    arr2.pritData();
    arr3.pritData();
}