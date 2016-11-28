//
// Created by 강성길 on 2016. 11. 28..
//

#ifndef COMAPPLICLASS_FRAME_H
#define COMAPPLICLASS_FRAME_H

#endif //COMAPPLICLASS_FRAME_H
using namespace std;

class Frame {
public:
    int a, b;

    Frame() {

    }

    void *operator new(size_t size) {
        cout << "Allocation with new operation.." << endl;
        void *temp = malloc(size);

        if (!temp) {
            throw string("bad allocation");
        }

        return temp;
    }

    void *operator new[](size_t size) {
        cout << "Allocation with new[] operation.." << endl;

        void *temp = malloc(size);

        if (!temp) {
            throw string("bad allocation");
        }

        return temp;
    }

    void operator delete(void *addr) {
        cout << "Free With delete operator.." << endl;
        free(addr);
    }

    void operator delete[](void *addr) {
        cout << "Free With delete[] operator.." << endl;
        free(addr);
    }

};