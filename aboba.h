#ifndef LR_3_ABOBA_H
#define LR_3_ABOBA_H
#include <iostream>

using namespace std;

struct abo {
public:
    string nick;
    int score;
    inline abo(string nick, int score);
    inline bool operator > (abo& ab) const;
    inline bool operator < (abo& ab) const;
};
#endif