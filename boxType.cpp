#include "boxType.h"

boxType::boxType() : height(0) {}

boxType::boxType(double l, double w, double h) : rectangleType(l, w), height(h) {}

boxType::~boxType() {}

double boxType::getHeight() const {
		return height;
}

void boxType::setDimension(double l, double w, double h) {
		height = h;
		rectangleType::setDimension(l, w);
}

double boxType::volume() const {
		return rectangleType::area() * height;
}

boxType boxType::operator+(const boxType& obj) {
		boxType temp(getLength() + obj.getLength(), getWidth() + obj.getWidth(), height + obj.height);
		return temp;
}

boxType boxType::operator-(const boxType& obj) {
		boxType temp(getLength() - obj.getLength(), getWidth() - obj.getWidth(), height - obj.height);
		return temp;
}

boxType boxType::operator*(const boxType& obj) {
		boxType temp(getLength() * obj.getLength(), getWidth() * obj.getWidth(), height * obj.height);
		return temp;
}

boxType& boxType::operator++() {
		rectangleType::operator++();
		++height;
		return *this;
}

boxType boxType::operator++(int) {
		boxType temp(*this);
		rectangleType::operator++(0);
		height++;
		return temp;
}

boxType& boxType::operator--() {
		rectangleType::operator--();
		--height;
		return *this;
}

boxType boxType::operator--(int) {
		boxType temp(*this);
		rectangleType::operator--(0);
		height--;
		return temp;
}

bool boxType::operator==(const boxType& a) {
		return volume() == a.volume();
}

bool boxType::operator!=(const boxType& a) {
		return volume() != a.volume();
}

bool boxType::operator<=(const boxType& a) {
		return volume() <= a.volume();
}

bool boxType::operator<(const boxType& a) {
		return volume() < a.volume();
}

bool boxType::operator>=(const boxType& a) {
		return volume() >= a.volume();
}

bool boxType::operator>(const boxType& a) {
		return volume() > a.volume();
}

ostream& operator<<(ostream& out, const boxType& obj) {
		out << "Length: " << obj.getLength() << " Width: " << obj.getWidth() << " Height: " << obj.getHeight();
		return out;
}

istream& operator>>(istream& in, boxType& obj) {
		double l, w, h;
		cout << "Enter length, width, and height: ";
		in >> l >> w >> h;
		obj.setDimension(l, w, h);
		return in;
}
