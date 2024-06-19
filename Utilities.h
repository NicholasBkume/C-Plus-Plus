#ifndef UTILITIES_H
#define UTILITIES_H

#include <vector>
#include <cstddef>

int refer();
int refer2();
int refer3();
int refer4();
int refer6();
int refer7();
int reference();
double reference2();
void swap(int *a, int *b);
int *create_array(std::size_t size, int value = 0);
void display(const int *const array, std::size_t size);

#endif // UTILITIES_H

