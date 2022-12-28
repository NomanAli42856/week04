#include<iostream>
using namespace std;

void ifPass(int marks);

main ()
{

  system("cls");
  system("color 07");

  int marks;
  while(true)
  {
    cout << "Enter your marks : ";
    cin >> marks;
    ifPass(marks);
  }

}

void ifPass(int marks)
{

  
  if (marks > 50)
  {
    cout << "Pass" << endl;
  }
  if (marks < 50)
  {
    cout << "Try again" << endl;
  }
  if (marks == 50)
  {
    cout << "Work Hard" << endl;
  }

}