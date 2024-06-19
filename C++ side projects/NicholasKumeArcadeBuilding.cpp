/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
                using namespace std;

                int main()
                {
                    float occupancy_rate = 0.0f;
                    float total_areas = 0.0f;
                    float total_areas_used = 0.0f;
                    float total_areas_unoccupied = 0.0f;
                    int num_of_areas = 0;
                    int num_of_floors = 0;

                    cout << "How many floors does your Arcade have? ";
                    while (!(cin >> num_of_floors) || num_of_floors < 1)
                    {
                        cout << "ERROR: Number of floors must be greater than 0. Please enter again: ";
                        cin.clear();
                        cin.ignore(123, '\n');
                    }

                    for (int i = 0; i < num_of_floors; i++)
                    {
                        if ((i + 1) == 13)
                        {
                            cout << "\nSkip 13th floor.\n\n";
                        }
                        else
                        {
                            cout << "How many gameplay areas does floor number " << (i + 1) << " have? ";
                            while (!(cin >> num_of_areas) || num_of_areas < 10)
                            {
                                cout << "ERROR: Enter a number greater than 10: ";
                                cin.clear();
                                cin.ignore(123, '\n');
                            }

                            total_areas += num_of_areas;

                            cout << "How many areas are occupied on that floor? ";
                            while (!(cin >> num_of_areas) || num_of_areas < 0 || num_of_areas > total_areas)
                            {
                                cout << "ERROR: Enter a number between 0 and " << total_areas << ": ";
                                cin.clear();
                                cin.ignore(123, '\n');
                            }
                            total_areas_used += num_of_areas;
                        }
                    }

                    total_areas_unoccupied = total_areas - total_areas_used;

                    cout << "\nSummary of Arcade Occupancy:\n";
                    cout << "Total rooms used: " << total_areas_used << endl;
                    cout << "Total rooms unoccupied: " << total_areas_unoccupied << endl;
                    cout << "Total number of rooms: " << total_areas << endl;

                    if (total_areas > 0)
                    {
                        occupancy_rate = (total_areas_used / total_areas) * 100;
                        cout << "Occupancy rate: " << occupancy_rate << "%\n";
                    }
                    else
                    {
                        cout << "No rooms available to calculate occupancy rate.\n";
                    }

                    cout << "Thank you for using the Nicholas Kume Arcade Building Calculator.\n";

                    return 0;
                }
