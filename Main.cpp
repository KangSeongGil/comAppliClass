//
// Created by 강성길 on 2016. 11. 28..
//
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include "Word.h"

using namespace std;

void stlVector() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.insert(v.begin(), 40);
    v.insert(v.end(), 50);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    cout << "access index at 1:" << v.at(1) << endl;

    v.erase(v.begin());
    v.erase(v.end() - 1);

    vector<int>::iterator iter = v.begin();

    cout << "access index at 1 with iterator:" << iter[1] << endl;

    while (iter != v.end()) {
        cout << *iter << endl;
        iter++;
    }
}

void dump(list<string> &l) {
    list<string>::iterator iter = l.begin();

    while (iter != l.end()) {
        cout << *iter << endl;
        iter++;
    }
}

void stlList() {
    list<string> names;
    names.insert(names.begin(), "konkuk");
    names.insert(names.end(), "University");
    names.insert(names.end(), "SCLAB");
    names.insert(names.end(), "CSY");
    dump(names);
    cout << "===" << endl;
    names.reverse();
    dump(names);
}

void stlMap() {
    map<string, int> m;
    m["seoul"] = 100;
    m["daegu"] = 120;

    cout << "Train to Seoul = " << m["seoul"] << " $ " << endl;
    cout << "Train to Daegu = " << m["Deagu"] << " $ " << endl;
    cout << "Train to Busan = " << m["Busan"] << " $ " << endl;
}


void wordTest() {
    map<char, list<Word>> m;
    list<Word> aList;
    list<Word> bList;

    aList.push_back(Word("apple"));
    aList.push_back(Word("avoid"));
    aList.push_back(Word("appear"));

    bList.push_back(Word("bread"));
    bList.push_back(Word("bring"));
    bList.push_back(Word("bow"));

    m['a'] = aList;
    m['b'] = bList;

    map<char, list<Word>>::iterator iter = m.begin();

    while (iter != m.end()) {
        cout << iter->first<<":"<<endl;

        list<Word>::iterator iter_list = iter->second.begin();

        for(;iter_list != iter->second.end();iter_list++≠) {
            cout<<iter_list->getWord()<<endl;
        }

        cout << "\n====="<<endl;
        iter++;
    }
}

int main() {

    wordTest();
    /*stlList();
    cout << "\n\n\n\n";
    stlVector();
    cout << "\n\n\n\n";
    stlMap();*/
}

