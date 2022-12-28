#include<iostream>
using namespace std;

void add(int number1, int number2);
void mul(int num1, int num2);
void sub(int num1, int num2);
void division(int num1, int num2);

main ()
{

  system("cls");
  system("color 07");
  
  
  int number1;
  int number2;
  char ch;
  cout << "Enter first number : ";
  cin >> number1;
  cout << "Enter second number : ";
  cin >> number2;
  cout << "Enter the operation (+,-,*,/) > ";
  cin >> ch;
  if (ch == '+')
  {
  add(number1, number2);
  }
  if (ch == '*')
  {
  mul(number1 , number2);
  }
  if (ch == '-')
  {
  sub(number1, number2);
  }
  if (ch == '/')
  {
  division(number1, number2);												
  }

}


void add(int number1, int number2)
{
  int sum;
  sum = number1 + number2;
  cout << "Sum = " << sum << endl;
}

void mul(int num1, int num2)
{
  int pro;
  pro = num1 * num2;
  cout << "Product = " << pro << endl;
}

void sub(int num1, int num2)
{
  int subt;
  subt = num1 - num2;
  cout << "Subtraction = " << subt << endl;
}

void division(int num1, int num2)
{
  int divi;
  divi = num1 / num2;
  cout << "Divsion = " << divi << endl;
}

