#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
float calculateHeight(float distance,float Angle,float angleConvert);


main()
{
 float distance;
 float angle;
 float angleConvert;
 float result;
 cout<<"Enter the distance : ";
 cin>>distance;
 cout<<"Enter the angle in degree : ";
 cin>>angle;
 angleConvert = 30/57.2958;
 result = calculateHeight(distance,angle,angleConvert);
 system("cls");
 cout<<"height of tree is "<< result<<endl;
}
float calculateHeight(float distance,float Angle,float angleConvert)
{
 float answer;
 answer = tan(angleConvert)*distance; 
 return answer;


}