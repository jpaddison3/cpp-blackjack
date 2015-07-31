#include "card.h"

string Card::string_repr() {
    return to_string(rank) + suit;
}