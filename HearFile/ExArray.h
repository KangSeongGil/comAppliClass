//
// Created by 강성길 on 2016. 11. 28..
//

#ifndef COMAPPLICLASS_EXARRAY_H
#define COMAPPLICLASS_EXARRAY_H

#endif //COMAPPLICLASS_EXARRAY_H

using namespace std;

template<class T>

class ExArray {
private:
    T *a;
    int size;

public:
    ExArray(int s) {
        a = new T[size = s];
    }

    void addData(T data) {
        for (int i = 0; i < size; i++) {
            a[i] = data;
        }
    }

    void pritData() {
        for (int i = 0; i < size; i++) {
            cout << a[i] << ".";
        }
        cout << endl;
    }
};