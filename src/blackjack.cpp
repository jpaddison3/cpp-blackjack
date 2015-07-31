#include "blackjack.h"
// ^ Include only one file at the top.  blackjack.h takes care of 
// everything else

int main() {
    cout << "Hello world!" << endl;
    Card card;
    card.rank = 1;
    card.suit = 's';
    cout << "I got a " << card.string_repr() << endl;
    return 0;
}