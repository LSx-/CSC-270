#include "smoothie.h"

produce::produce(float price) {
    myprice = price;
}

float produce::markup() const {
    return 1.0;
}

string produce::name() {
    return "produce";
}

// edit here

float produce::price() const {
    return myprice;
}


fruit::fruit(float price) : produce::produce(price) {}

float fruit::markup() const {
    return  1.25;
}

string fruit::name() {
    return "fruit";
}


vegetable::vegetable(float price) : produce::produce(price) {}

float vegetable::markup() const {
    return 1.15;
}

string vegetable::name() {
    return "vegetable";
}