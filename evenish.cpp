#include <iostream>
#include <windows.h>
using namespace std;
int isEvenish(int number);
main()
{
int number;
int answer;

int result;
while(true)
{
cout<<"Enter the number :";
cin>>number;

answer = isEvenish(number);
 if (answer%2 == 0)
 {
 	cout<<"Evenish"<<endl;
 }
  if (answer%2 != 0)
 {
 	cout<<"Oddish"<<endl;
 }
 
}
}
int isEvenish(int number)
{
int digit;
int result;
digit = number%10;
result = digit;
number = number/10;

digit = number%10;
result = result+digit;
number = number/10;

digit = number%10;
result = result+digit;
number = number/10;

digit = number%10;
result = result+digit;
number = number/10;
result = result+number;
return result;
}




