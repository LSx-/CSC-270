#include <iostream>
#include "smoothie.h"
using namespace std;

int main() {
    celery a(1.29);
    banana b(.79);
    kiwi k(2.19);
    smoothie *s;

    s = new smoothie(&a);
    cout << "A " << a.name() << " smoothie costs " << s->price() << endl;

    *s = *s + b;
    cout << "A " << s->ingredients() << "smoothie costs "
        << s->price() << endl;

    return 0;
}