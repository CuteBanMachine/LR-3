#ifndef LR_3_ABOBA_H
#define LR_3_ABOBA_H
#include <iostream>

using namespace std;

struct abo {
public:
    string nick;
    int score;
    abo(string nick, int score);
    bool operator > (abo& ab) const;
    bool operator < (abo& ab) const;
    void showResults(abo p1, abo p2) {
        if (p1 > p2) cout << p1.nick << " is a winner!" << " His score is " << p1.score << endl;
        else if (p1 < p2) cout << p2.nick << " is a winner!" << " His score is " << p2.score << endl;
        else cout << p1.nick << " and " << p2.nick << " have the same amount of score = " << p1.score << endl;
    }
};
#endif