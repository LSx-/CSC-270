class Shape
{

public:
	vurtyal float area () const = 0;
	virtual float perimeter() const = 0;
}

class Rectangle : public Shape {

public:
	Rectangle(float length, float width);
	float getlength() const;
	float getwidth() const;

private:
	float length;
	float width;
}
