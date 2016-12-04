//
// Created by 강성길 on 2016. 12. 4..
//

#ifndef COMAPPLICLASS_WORD_H
#define COMAPPLICLASS_WORD_H

using namespace std;
class Word {

private:
    string word;

public:

    Word(string word) {
        this->word = word;
    }

    string getWord() {
        return this->word;
    }

};

#endif //COMAPPLICLASS_WORD_H

