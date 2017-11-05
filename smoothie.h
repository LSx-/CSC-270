#include <iostream>
#include <vector>
using namespace std;

/* forward reference; it mean that we will define a class
 * called produce later on. We need this, because smoothie
 * needs produce and produce needs smoothie.
 */
class produce;


class smoothie {
    public:
        smoothie();
        smoothie(produce* ingredient);
        float price() const;
        string ingredients() const;
        // add support for +-operator
    private:
        float myprice;
        vector<produce*> * stuff;
};

class produce {
    public:
        virtual string name();
        virtual float markup() const;

        produce(float price);
        float price() const;
        // add support for +-operator
    private:
        float myprice;
};

class fruit : public produce {
    public:
        float markup() const;
        virtual string name();
        fruit(float price);
};

class vegetable : public produce {
    public:
        float markup() const;
        virtual string name();
        vegetable(float price);
};

class banana : public fruit {
    public:
        virtual string name();
        banana(float price);
};

class strawberry : public fruit {
    public:
        string name();
        strawberry(float price);
};

class pineapple : public fruit {
    public:
        string name();
        pineapple(float price);
};

class kiwi : public fruit {
    public:
        string name();
        kiwi(float price);
};

class kale : public vegetable {
    public:
        string name();
        kale(float price);
};

class celery : public vegetable {
    public:
        string name();
        celery(float price);
};

class spinach : public vegetable {
    public:
        string name();
        spinach(float price);
};