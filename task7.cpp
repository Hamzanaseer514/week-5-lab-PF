#include <iostream>
#include <windows.h>

using namespace std;

int numb(int digit1);

main()
{
	int number;
	int digit1;
    int digit2;
	string name;
	cout<<"Enter the number : " ;
	cin>>number;
	digit1 = number%10;
	digit2 = number/10;

	if (digit1 == 1)
	{
		numb(digit2);
		cout<<"one";
		
	}
	if (digit1 == 2)
	{
		numb(digit2);
		cout<< "two";
	    
	}
	if (digit1 == 3)
	{
		numb(digit2);
	    cout<< "three";
	  	
	}
	if (digit1 == 4)
	{
		numb(digit2);
	    cout<<"four";
	   	
	}
	if (digit1 == 5)
	{
	    numb(digit2);
	    cout<<"five";
	  
	}if (digit1 == 6)
	{
		numb(digit2);
     	cout<<"six";
     	
	}
	if (digit1 == 7)
	{
		numb(digit2);
		cout<<"seven";
		
	}
	if (digit1 == 8)
	{
		numb(digit2);
		cout<< "eight";
		
	}
	if (digit1 == 9)
	{
		numb(digit2);
		cout<< "nine";
		
	}
	 
}
int numb(int digit2)
{

	if (digit2 == 2)
	{
		cout<< "twenty";
	}
	if (digit2 == 3)
	{
	    cout<< "thirty";
	}
	if (digit2 == 4)
	{
	    cout<<"forty";
	}
	if (digit2 == 5)
	{
	    cout<<"fifty";
	}if (digit2 == 6)
	{
     	cout<<"sixty";
	}
	if (digit2 == 7)
	{
		cout<<"seventy";
	}
	if (digit2 == 8)
	{
		cout<< "eighty";
	}
	if (digit2 == 9)
	{
		cout<< "ninety";
	}
}

