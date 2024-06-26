﻿#include "stdafx.h"
#include <iostream>
#include <string>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"

using namespace std;

int main() {
    const int SIZE = 5;

    TwoDayPackage p[SIZE];
    OvernightPackage o[SIZE];

    // Initialize TwoDayPackage objects
    p[0].setSenderName("Brian");
    p[0].setRecipientName("Sarah");
    p[0].setweightInOunce(5.5);
    p[0].setcostPerOunce(5.5);
    p[0].setSenderZip("56783");
    p[0].setRecipientZip("54223");

    p[1].setSenderName("Gabriel");
    p[1].setRecipientName("John");
    p[1].setweightInOunce(4.14);
    p[1].setcostPerOunce(3.5);
    p[1].setSenderZip("57883");
    p[1].setRecipientZip("87535");

    p[2].setSenderName("Sam");
    p[2].setRecipientName("Gabe");
    p[2].setweightInOunce(2.0);
    p[2].setcostPerOunce(50.5);
    p[2].setSenderZip("09787");
    p[2].setRecipientZip("78907");

    // Initialize OvernightPackage objects
    o[0].setSenderName("James");
    o[0].setRecipientName("Duval");
    o[0].setweightInOunce(9.7);
    o[0].setcostPerOunce(50.5);
    o[0].setSenderZip("46747");
    o[0].setRecipientZip("98566");

    o[1].setSenderName("Judy");
    o[1].setRecipientName("Lisa");
    o[1].setweightInOunce(1.7);
    o[1].setcostPerOunce(5.5);
    o[1].setSenderZip("54325");
    o[1].setRecipientZip("45454");

    Package *twoday;
    Package *overnight;

    // Output TwoDayPackage details
    for (int i = 0; i < SIZE; i++) {
        twoday = &p[i];
        cout << "Two Day Package from " << p[i].getSenderName() << " at " << p[i].getSenderZip() << ", to " << p[i].getRecipientName() << " at " << p[i].getRecipientZip() << "." << endl;
        cout << "Cost of sending is $" << twoday->calcCost() << "." << endl << endl;
    }

    // Output OvernightPackage details
    for (int i = 0; i < SIZE; i++) {
        overnight = &o[i];
        cout << "Overnight Package from " << o[i].getSenderName() << " at " << o[i].getSenderZip() << ", to " << o[i].getRecipientName() << " at " << o[i].getRecipientZip() << "." << endl;
        cout << "Cost of sending is $" << overnight->calcCost() << "." << endl << endl;
    }

    cin.ignore(); // Clear the input buffer
    cin.get();

    return 0;
}
