#include <string>
#include "aboba.h"

using namespace std;

abo::abo(string nick, int score) {
    this->nick = nick;
    this->score = score;
};

bool abo::operator > (abo& ab) const {
    return this->score > ab.score;
}

bool abo::operator < (abo& ab) const {
    return this->score < ab.score;
}

inline void showResults(abo p1, abo p2) {
    if (p1 > p2) cout << p1.nick << " is a winner!" << " His score is " << p1.score << endl;
    else if (p1 < p2) cout << p2.nick << " is a winner!" << " His score is " << p2.score << endl;
    else cout << p1.nick << " and " << p2.nick << " have the same amount of score = " << p1.score << endl;
}