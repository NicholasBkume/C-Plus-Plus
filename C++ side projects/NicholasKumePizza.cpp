/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>  
#include <cmath>    
using namespace std;

int main()
{
    const float SLICE_AREA_SIZE = 14.125,
                PI              = 3.14159;

    const int TWO  = 2,
              FOUR = 4;

    float d,
          r,
          Area,
          num_of_slices,
          slices_needed,
          num_of_pizzas;

    int num_of_people;

    cout << "\nWhat is the number of people who will be at the party? ";
    cin >> num_of_people;

    cout << "What is the diameter of the pizza in inches? ";
    cin >> d;

   
    slices_needed = num_of_people * FOUR;

        
    r = d / TWO;            

    Area = PI * pow(r, TWO); 

    num_of_slices = Area / SLICE_AREA_SIZE;

    num_of_pizzas = slices_needed / num_of_slices; 
   
    cout << setprecision(1) << fixed;
    cout << "Number of people = ";
    cout << num_of_people << endl;

    cout << "Number of slices needed = ";
    cout << slices_needed << endl;

    cout << "Number of slices per Pizza = ";
    cout << num_of_slices << endl;

    cout << "Number of pizzas to order = ";
    cout << num_of_pizzas << endl;

    cout << endl;
    
    
    return 0;
}