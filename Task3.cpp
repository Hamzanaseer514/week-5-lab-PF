#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
bool isSymmetrical(int number);
main()
{
int number;

while(true)
{
cout << " Enter the number : ";
cin>>number;
isSymmetrical(number);



}
}
bool isSymmetrical(int number)
{
int digit;
int result;
digit  = number % 10;
result = digit;
number = number/10;

digit  = number%10;
number = number/10;
if (result == number)
{
cout<< " Symmetrical"<<endl;
}
if (result != number)
{
cout<< " Unsymmetrical"<<endl;
}

}



