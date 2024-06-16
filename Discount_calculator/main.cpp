#include <iostream>

using namespace std;

int main()

{

  double Salesprice, totaldiscount, discount_rate;

  cout << "Enter the sales price of an item : ";

  cin >> Salesprice;

  if (Salesprice >= 20) {

    discount_rate = 0.10;

    totaldiscount = Salesprice - (discount_rate * Salesprice);

    cout << "Your total discount is : " << totaldiscount << endl;

    cout << "Your total plus tax is : " << Salesprice + 8.25 << endl;

  }

  else {

    cout << "invalid" << endl;

  }

  cout << "good day!" << endl;

}