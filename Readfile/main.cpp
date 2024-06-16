#include <iostream>

#include <fstream>

using namespace std;

int main()

{

  ifstream inFile;

  int number;

  inFile.open("N_numbers.txt");

  cout << "Reading from the File \n";

  while (inFile >> number) {

    cout << "\n This is the data read : " << number << endl;

  }

  inFile.close();

  return 0;

}
