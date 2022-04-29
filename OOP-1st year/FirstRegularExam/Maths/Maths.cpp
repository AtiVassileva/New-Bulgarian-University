#include <iostream>

using namespace std;

class GeometricObject
{
protected:
	const char* name;
	const char* color;

public:
	GeometricObject();

	GeometricObject(const char* name, const char* color)
	: name(name), color(color)
	{
	}

	friend ostream& operator<<(ostream& os, const GeometricObject& obj);

	const char* getName() const { return name; }
	void setName(char* value) { name = value; }

	const char* getColor() const { return color; }
	void setColor(char* value) { color = value; }

};

ostream& operator<<(ostream& os, const GeometricObject& obj)
{
	os << obj.getName() << " - " << obj.getColor() << endl;
	return os;
}

class Rectangle : GeometricObject
{
private:
	int length;
	int width;

public:
	Rectangle(const char* name, const char* color, int length, int width) : GeometricObject(name, color)
	{
		Rectangle::name = name;
		Rectangle::color = color;
		Rectangle::length = length;
		Rectangle::width = width;
	}

	int operator()(int length, int width) const; 

	friend ostream& operator<<(ostream& os, 
		const Rectangle& obj);

	int getLength() const { return length; }
	void setLength(int value) { length = value; }

	int getWidth() const { return  width; }
	void setWidth(int value) { width = value; }

	int getPerimeter() const 
	{
		return 2 * (length +  width);
	}
};

ostream& operator<<(ostream& os, const Rectangle& obj)
{
	os << obj.getName() << " - " << obj.getColor() << " (width: "
		<< obj.getWidth() << ", length:" << obj.getLength() << ")" << endl;

	os << "Perimeter: " << obj.getPerimeter() << endl;
	os << "Lice: "<< obj(obj.getLength(), obj.getWidth()) << endl;
	
	return os;
}

int Rectangle::operator()(int length, int width) const
{
	return length * width;
}

class Circle : GeometricObject
{
private:
	int radius;

public:
	Circle(const char* name, const char* color, int radius)
		: GeometricObject(name, color)
	{
		Circle::name = name;
		Circle::color = color;
		Circle::radius = radius;
	}

	int operator()(int radius) const;
	friend Circle& operator> (Circle& first, Circle& second);

	friend ostream& operator<<(ostream& os,
		const Circle& obj);

	int getRadius() const { return  radius; }
	void setRadius(int value) { radius = value; }

	double calculateLice() const
	{
		return 3.14 * pow(radius, 2);
	}

	double calculatePerimeter() const
	{
		return 2 * 3.14 * radius;
	}
};

Circle& operator>(Circle& first, Circle& second)
{
	int firstDiam = first(first.getRadius());
	int secondDiam = second(second.getRadius());

	return firstDiam >= secondDiam
		? first : second;
}

ostream& operator<<(ostream& os, const Circle& obj)
{
	os << obj.getName() << " - " << obj.getColor() << " (radius: "
		<< obj.getRadius() << ")" << endl;

	os << "Perimeter: " << obj.calculatePerimeter() << endl;
	os << "Lice: " << obj.calculateLice() << endl;

	return os;
}

int Circle::operator()(int radius) const
{
	return 2 * radius;
}


int main()
{
	const Rectangle rect("test", "green", 5, 8);

	const Circle cir1 ("hi", "blue",3);
	const Circle cir2 ("hi", "red",9);
	const Circle cir3 ("hi", "green",7);
	const Circle cir4 ("hi", "pink",6);
	const Circle cir5 ("hi", "purple",4);

	auto circlesArray = new Circle[]
	{
		cir1, cir2, cir3, cir4, cir5
	};

	int maxDiameter = 0;
	Circle maxCircle ("name", "color", 0);

	for (int i = 0; i < sizeof(circlesArray); i++)
	{
		int currDiam = circlesArray[i](circlesArray[i].getRadius());

		if (currDiam > maxDiameter)
		{
			maxDiameter = currDiam;
			maxCircle = circlesArray[i];
		}
	}

	cout << maxCircle;

	delete[] circlesArray;
}