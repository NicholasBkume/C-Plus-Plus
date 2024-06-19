#include <iostream>
#include <vector>
#include "Utilities.h"

using namespace std;

int refer() {
		vector<string> name{ "G", "B", "N" };
		vector<string> *vector_ptr{ nullptr };

		vector_ptr = &name;

		cout << "First score: " << (*vector_ptr).at(0) << endl;

		cout << "Names: ";
		for (const auto &n : *vector_ptr)
				cout << n << " ";
		cout << endl;

		return 0;
}

int refer2() {
		int *int_ptr{ nullptr };
		int_ptr = new int;
		delete int_ptr;

		size_t size{ 0 };
		double *temp_ptr{ nullptr };
		cout << "Enter the size for double array: ";
		cin >> size;

		temp_ptr = new double[size];
		delete[] temp_ptr;

		return 0;
}

int refer3() {
		int scores[]{ 100, 95, 89, -1 };
		int *score_ptr{ scores };

		while (*score_ptr != -1) {
				cout << *score_ptr << endl;
				score_ptr++;
		}

		score_ptr = scores;

		while (*score_ptr != -1) {
				cout << *score_ptr++ << endl;
		}

		return 0;
}

int refer4() {
		string s1{ "Frank" };
		string s2{ "Frank" };

		string *p1{ &s1 };
		string *p2{ &s2 };
		string *p3{ &s1 };

		cout << (*p1 == *p2) << endl; // compares values
		cout << (*p1 == *p3) << endl; // compares values

		return 0;
}

int refer6() {
		int x{ 100 }, y{ 200 };

		swap(&x, &y);
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;

		return 0;
}

int refer7() {
		int scores[]{ 100, 95, 89 };
		int *score_ptr{ scores };

		cout << score_ptr << endl;
		cout << scores[0] << endl;
		cout << scores[1] << endl;
		cout << scores[2] << endl;

		cout << score_ptr[0] << endl;
		cout << score_ptr[1] << endl;
		cout << score_ptr[2] << endl;

		cout << *score_ptr << endl;
		cout << *(score_ptr + 1) << endl;
		cout << *(score_ptr + 2) << endl;

		cout << scores << endl;
		cout << *(scores + 1) << endl;
		cout << *(scores + 2) << endl;

		return 0;
}

int reference() {
		int score{ 100 };
		int *score_ptr{ &score };

		cout << *score_ptr << endl;

		*score_ptr = 200;

		cout << *score_ptr << endl;
		cout << score << endl;
		cout << *score_ptr << endl;

		return 0;
}

double reference2() {
		double high_temp{ 100.7 };
		double low_temp{ 37.4 };
		double *temp_ptr{ &high_temp };

		cout << *temp_ptr << endl;

		temp_ptr = &low_temp;

		cout << *temp_ptr << endl;

		return 0;
}

void swap(int *a, int *b) {
		int temp = *a;
		*a = *b;
		*b = temp;
}

void display(const int *const array, size_t size) {
		for (size_t i{ 0 }; i < size; ++i)
				cout << array[i] << " ";
		cout << endl;
}

int *create_array(size_t size, int value) {
		int *new_storage{ nullptr };
		new_storage = new int[size];
		for (size_t i{ 0 }; i < size; ++i)
				*(new_storage + i) = value;
		return new_storage;
}
