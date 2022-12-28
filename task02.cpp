#include<iostream>
using namespace std;

void Eligible(int age);

main ()
{

  system("cls");
  system("color 07");

  int age;
  cout << "Enter your age : ";
  cin >> age;
  Eligible(age);
 
}

void Eligible(int age)
{

  if (age >= 18)
  {
    cout << "Eligible to Vote" << endl;
  }

  if (age < 18)
  {
    cout << "Note eligible to Vote" << endl;
  }

}