#include "aboba.h"
#include <string>

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
