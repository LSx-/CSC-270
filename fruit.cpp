#include "smoothie.h"
using namespace std;

banana::banana(float price) : fruit::fruit(price) {}

string banana::name() {
    return "banana";
}


strawberry::strawberry(float price) : fruit::fruit(price) {}

string strawberry::name() {
    return "strawberry";
}


pineapple::pineapple(float price) : fruit::fruit(price) {}

string pineapple::name() {
    return "pineapple";
}

kiwi::kiwi(float price) : fruit::fruit(price) {}

string kiwi::name() {
    return "kiwi";
}