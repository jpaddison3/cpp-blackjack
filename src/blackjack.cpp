#include "blackjack.h"
// ^ Include only one file at the top.  blackjack.h takes care of 
// everything else

int main() {
    int rank;
    int suit;
    // cout is using-decalred in blackjack.h
    cout << "Hello world!" << endl;
    rank = 1;
    suit = 2;
    result = add(&rank, suit);
    cout << "I got a " << result << " and rank = " << rank << endl;
    return 0;
}