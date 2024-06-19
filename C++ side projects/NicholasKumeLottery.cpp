#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(int argc, char *argv[])
{
       int lottery[5];
       int user[5];
       bool match = true;
       bool notmatch = true;
       int matchcount = 0;     
  srand (time(NULL));
  lottery[0] = rand() % 10,
  lottery[1] = rand() % 10,
  lottery[2] = rand() % 10,
  lottery[3] = rand() % 10,
  lottery[4] = rand() % 10;
 
  for(int i = 0; i < 5; i++)
  {
         cout <<"Enter a number in the range between 0 and 9: ";
cin>>user[i];
              while (user[i]<0 || user[i]>9)
              {
                     cout << "Error!";
                     cin >> user[i];
              }
  }
cout<<endl<<"Lottery array: ";
  for(int i = 0; i < 5; i++)
  {
         cout<<"|";
         cout<<lottery[i];
         cout<<"|";
  }
cout<<endl<<endl<<"   User array: ";
  for(int i = 0; i < 5; i++)
  {
         cout<<"|";
         cout<<user[i];
         cout<<"|";
  }
 
  for(int i = 0; i < 5; i++)
  {
         if(user[i] == lottery[i])
         {
               matchcount++;
               notmatch = false;
         }
     
         if(user[i] != lottery[i])
         {
               match = false;
         }
  }
      if(notmatch == true)
         {
              cout<<endl<<endl<<"Sorry! No Match."<<endl;
         }
 
         if(match == true)
         {
              cout<<endl<<endl<<"Congrats! you are the grand prize winner."<<endl;
         }
    if(matchcount != 0)
       cout<<endl<<endl<<matchcount<<" Matches"<<endl;
       return 0;
}
