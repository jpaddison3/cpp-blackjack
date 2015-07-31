#include "card.h"

int add(int *x, int y) {
    // We're gonna use a pointer to x to use side effects in this example
    int ret = *x + y;
    cout << "Where is x? " << hex << x << dec << endl;
    *x = 5;
    return ret;

}