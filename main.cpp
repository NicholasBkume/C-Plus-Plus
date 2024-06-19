#include <iostream>
#include "boxType.h"

using namespace std;

int main() {
    boxType box1(12, 9, 6);
    boxType box2(8, 7, 5);
    boxType box3, box4, box5;

    cout << "box1: " << box1 << endl;
    cout << "box2: " << box2 << endl;

    box3 = box1 + box2;
    cout << "box3: " << box3 << endl;

    box4 = box1 - box2;
    cout << "box4: " << box4 << endl;

    box5 = box1 * box2;
    cout << "box5: " << box5 << endl;

    if (box1 > box2)
        cout << "Volume of box1 is greater than the volume of box2." << endl;
    else
        cout << "Volume of box1 is less than or equal to the volume of box2." << endl;

    ++box1;
    cout << "After incrementing the dimensions of box1 by one unit:\nbox1: " << box1 << endl;

    box3 = ++box2;
    cout << "New dimensions of box2: " << box2 << endl;
    cout << "New dimensions of box3: " << box3 << endl;

    cin.ignore(); // Clear the input buffer
    cin.get();

    return 0;
}
