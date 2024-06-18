#include"stdafx.h"
#include<iostream>
#include<fstream>
#include<string.h>
#include<ostream>

using namespace std;

void createData();//prototypes
void printData();
void searchData();
void updateData();
struct player//declaring structure with required fields
{
   string playername;
   int position,touchdowns,catches,passingyards,receivingyards,rushingyards;
          
};
struct player p[10];//creating 10 players
ofstream f1,f2;
int main()
{
   int ch;
   while(1)
   {
  
       cout<<"\nEnter your choice"<<endl;
       cout<<"1.Create data\n2.Print Data\n 3.Search Data\n4.Update Data\n5.Exit\n";
       cin>>ch;
   switch(ch)
   {
       case 1:
               createData();//calling function
               break;
       case 2:
               printData();
               break;
       case 3:
               searchData();
               break;
       case 4:
               updateData();
               break;
       case 5:
               exit(0);
   }
}
   return 0;  
}
void createData()
{
  
   f1.open("input.txt");
  
   int i;
   cout<<"Enter player information(name,position,touchdowns,catches,passingyards,receivingyards,rushingyards\n";
   for(i=1;i<10;i++)
   {
       cout<<"Enter Player "<<i<<"Details"<<endl;
       cin >> p[i].playername>>p[i].position>>p[i].touchdowns >>p[i].catches>>p[i].passingyards>>p[i].receivingyards>>p[i].rushingyards;
       f1 << p[i].playername<<" "<<p[i].position<<" "<<p[i].touchdowns <<" "<<p[i].catches<<" "<<p[i].passingyards<<" "<<p[i].receivingyards<<" "<<p[i].rushingyards<<"\n";
       //cout<<"Succesfully inserted into file";
   }
  
//fclose(f1);
}
void printData()//function to display player information
{
   for(int i=1;i<10;i++)//repeats until condition false ...
   {
       cout << "\nPlayer " << i << "Details" << endl;
       cout << p[i].playername << p[i].position << p[i].touchdowns << p[i].catches << p[i].passingyards << p[i].receivingyards << p[i].rushingyards; << endl; //Display total player information
   }
}
void searchData()
{
   string name;//name for searching
   fflush(stdin);//clear the previous console
   cout<<"Enter player name to search \n";
   cin>>name;//read the search player
   for(int i=1;i<10;i++)
   {
       if((p[i].playername).compare(name)==0)//comparing required name with players
       {
           cout<<"Player is available \ndetails are\n";
           cout<<p[i].playername<<p[i].position<<p[i].touchdowns<<p[i].catches<<p[i].passingyards<<p[i].receivingyards<<p[i].rushingyards;//Display total player information
       }
   }
}
void updateData()
{
   f2.open("input.txt");
   string name;
   cout << "Enter the player details to be updated\n";
   cin >> name;
  
  
   for(int i=1;i<10;i++)
   {
       if((p[i].playername).compare(name)==0)//comparing required name with players
       {
           cout << "\nEnter Player information\n";
           cin >> p[i].playername>>p[i].position>>p[i].touchdowns>>p[i].catches>>p[i].passingyards>>p[i].receivingyards>>p[i].rushingyards;
		   //reading total player update information
           f2 << p[i].playername<<" "<<p[i].position<<" "<<p[i].touchdowns<<" "<<p[i].catches<<" "<<p[i].passingyards<<" "<<p[i].receivingyards<<" "<<p[i].rushingyards<<"\n";
      
       }
       else
       {
       f2 << p[i].playername<<" "<<p[i].position<<" "<<p[i].touchdowns<<" "<<p[i].catches<<" "<<p[i].passingyards<<" "<<p[i].receivingyards<<" "<<p[i].rushingyards<<"\n";
          
       }
}
}