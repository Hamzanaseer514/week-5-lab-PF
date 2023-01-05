#include <iostream>

using namespace std;

int multiply(int number);

int main()
{
	int number;
	int result;
	cout<<"Enter the number : ";
	cin>>number;
	result = multiply(number);
	cout<<"The answer is : "<<result;
	
	
	
	
}
int multiply(int number)
{
 int answer = number*5;
 return answer;
	
}
