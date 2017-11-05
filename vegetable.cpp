#include "smoothie.h"
using namespace std;

kale::kale(float price) : vegetable::vegetable(price) {}

string kale::name() {
    return "kale";
}

celery::celery(float price) : vegetable::vegetable(price) {}

string celery::name() {
    return "celery";
}

spinach::spinach(float price) : vegetable::vegetable(price) {}

string spinach::name() {
    return "spinach";
}