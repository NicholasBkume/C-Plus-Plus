#include "rectangleType.h"

rectangleType::rectangleType() :length(0), width(0)
{
}
rectangleType::rectangleType(double l, double w) : length(l), width(w)
{
}

rectangleType::~rectangleType()
{
}
double rectangleType::getLength() const
{
	return length;
}
double rectangleType::getWidth() const
{
	return width;
}
void rectangleType::setDimension(double l, double w)
{
	length = l;
	width = w;
}


rectangleType rectangleType::operator+(const rectangleType & obj)
{
	rectangleType temp(length + obj.length, width + obj.width);
	return temp;
}


rectangleType rectangleType::operator-(const rectangleType & obj)
{
	rectangleType temp(length - obj.length, width - obj.width);
	return temp;
}


rectangleType rectangleType::operator*(const rectangleType & obj)
{
	rectangleType temp(length * obj.length, width * obj.width);
	return temp;
}


rectangleType rectangleType::operator++()
{
	++length;
	++width;
	return rectangleType(length, width);
}


rectangleType rectangleType::operator++(int)
{
	rectangleType temp(length++, width++);
	return temp;
}


rectangleType rectangleType::operator--()
{
	--length;
	--width;
	return rectangleType(length, width);
}
rectangleType rectangleType::operator--(int)
{
	rectangleType temp(length--, width--);
	return temp;
}
bool rectangleType::operator==(const rectangleType & a)
{
	return area() == a.area();
}
bool rectangleType::operator!=(const rectangleType & a)
{
	return area() != a.area();
}
bool rectangleType::operator<=(const rectangleType & a)
{
	return area() <= a.area();
}
bool rectangleType::operator<(const rectangleType & a)
{
	return area() < a.area();
}
bool rectangleType::operator>=(const rectangleType & a)
{
	return area() >= a.area();
}
bool rectangleType::operator>(const rectangleType & a)
{
	return area() > a.area();
}
double rectangleType::area() const
{
	return length * width;
}
ostream & operator << (ostream &out, const rectangleType &obj)
{
	return out;
}
istream & operator >> (istream &in, rectangleType &obj)
{
	return in;
}
