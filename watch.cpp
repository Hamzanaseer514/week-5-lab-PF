#include <iostream>
#include <windows.h>

using namespace std;


main()
{
	
 int hours;
 int minutes;
 cout<<"Enter the hours(0-23) : ";
 cin>>hours;
 cout<<"Enter the minutes(0-59) : ";
 cin>>minutes;
 minutes = minutes+15;
 if (minutes <= 59)
{
	cout<<hours<< ":"<<minutes<<endl;
}
if (minutes >= 60)
{
	hours = hours+1;
	minutes = minutes-60;
	cout<<hours<<":"<<minutes<<endl;
}

}
