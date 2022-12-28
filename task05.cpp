#include<iostream>
using namespace std;

void Bill(int amount, string day);

main ()
{

  system("cls");
  system("color 07");

  int amount;
  string day;
  while(true)
  {
    cout << "Enter the amount : ";
    cin >> amount;
    cout << "Enter the day : ";
    cin >> day;
    Bill(amount , day);
  }
}

void Bill(int amount, string day)
{
  int totalbill;
  if (day == "sunday")
  {
    totalbill = amount - (amount/10);
    cout << "Bill = " << totalbill << endl;
  }

  if (day != "sunday")
  {
    totalbill = amount-(amount/20);
    cout << "Bill = " << totalbill << endl;
  }
}