#include <sstream>
#include <vector>
#include "smoothie.h"
using namespace std;

smoothie::smoothie() {
	myprice = 0.0;
	stuff = new vector<produce*>;
}

smoothie::smoothie(produce* ingredient) {
	myprice = ingredient->price() * ingredient->markup();
	stuff = new vector<produce*>;
	stuff->push_back(ingredient);
}

// Edit here

string smoothie::ingredients() const {
	stringstream out;
	for (vector<produce*>::iterator it=stuff->begin();
		it != stuff->end(); it++) {
		out << (*it)->name() << " ";
	}
	return out.str();
}

float smoothie::price() const {
	return myprice;
}