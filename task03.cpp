#include<iostream>
using namespace std;

void Even(int num);

main ()
{

  system("cls");
  system("color 07");

  int num;
  while(true)
  {
    cout << "Enter the number : ";
    cin >> num;
    Even(num);
  }
}

void Even(int num)
{

  if (num%2 == 0)
  {
    cout << "Its an even number" << endl;
  }

  if (num%2 != 0)
  {
    cout << "Its an odd number" << endl;
  }

}