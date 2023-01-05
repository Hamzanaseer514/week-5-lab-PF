#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
float division(int number1,int number2);
int sum(int number1,int number2);


main()
{
 int number1;
 int number2;
 float result;
 
 cout<<"Enter the number 1 : ";
 cin>>number1;
 cout<<"Enter the number 2 : ";
 cin>>number2;
 
 system("cls");
 result = pow(number1,number2);
 cout<<"Power is "<< result<<endl;
 result = cbrt(number1);
 cout<<  " cube root is  :  "<< result;




}


