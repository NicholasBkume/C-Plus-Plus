/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    float occupancy_rate = 0,
          areas_occupied = 0,
          total_areas = 0;

    int num_of_areas,
        num_of_floors,
        total_areas_used = 0,
        total_areas_occupied = 0,
        total_areas_unoccupied = 0;

    cout << "How many floors does your Arcade have? ";

    while (!(cin >> num_of_floors) || (num_of_floors < 1))
    {
        cout << "ERROR: number of floors must be\n"
             << "greater that 1 \n";        
        cin.clear();        
        cin.ignore(1230, '\n');
    }

    for(int i = 0; i < num_of_floors; i++)
    {
        if ((i + 1) == 13) 
        {
            cout << "\nSkip 13th floor." 
                 << endl 
                 << endl;
        }
        else
        {
            cout << "How many gameplay areas does floor number ";
            cout << (i + 1) << " have? ";

            while (!(cin >> num_of_areas) || 
                    (num_of_areas < 10))
            {
                cout << "ERROR: enter a number\n"
                     << "greater than 10: ";                
                cin.clear();
                cin.ignore(123, '\n');
            }

            total_areas += num_of_areas;

            cout << "How many areas are occupied\n"
                 << "on that floor? ";

            while (!(cin >> areas_occupied) || 
                    (areas_occupied < 1))
            {
                cout << "ERROR: enter a number\n"
                     << "greater than 10: ";                
                cin.clear();
                cin.ignore(123, '\n');
            }

             total_areas_used += areas_occupied;
        }
        
        
    }

    total_areas_unoccupied = total_areas - total_areas_used;
    cout << "Total rooms unoccupied = " 
         << total_areas_unoccupied 
         << endl;

    cout << "Total rooms used = " 
         << total_areas_used 
         << endl;
         
    cout << "Total number of rooms = " 
         << total_areas 
         << endl;

    occupancy_rate = (total_areas_used / total_areas) * 100;
    cout << "Occupancy rate = " 
         << occupancy_rate 
         << "%." 
         << endl;
    

    return 0;
}
