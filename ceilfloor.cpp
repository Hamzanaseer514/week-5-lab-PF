#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;


main()
{
 float number1;
 float result;
 
 cout<<"Enter the number 1 : ";
 cin>>number1;

 
 system("cls");
 result = ceil(number1);
 cout<<" ceiling is  "<< result<<endl;
 result = floor(number1);
 cout<<  " Floor is  :  "<< result;




}


