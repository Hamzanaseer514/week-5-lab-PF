#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;


main()
{
int a = 5;
int b = 6;
int c = 1;
float result1;
float result2;
result1 = (b*b)-4*a*c;
result1 = -b+sqrt(result1);
result1 = result1/(2*a);
cout<<"result is : "<<result1<<endl;
result2 = (b*b)-4*a*c;
result2 = -b-sqrt(result2);
result2 = result2/(2*a);
cout<<"result is : "<<result2;




}