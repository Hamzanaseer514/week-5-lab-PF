#include <iostream>

using namespace std;

void notFilled(int total, float volume1, float volume2);

main()
{
	int poolSize;
	int p1;
	int p2;
	float volume1;
	float volume2;
	float total;
	float time;
	cout<<"Enter the volume of the pool in liters : ";
	cin>>poolSize;
	cout<<"Enter the flow rate of first pipe per hour : ";
	cin>>p1;
    cout<<"Enter the flow rate of second pipe per hour : ";
	cin>>p2;
	cout<<"Enter the hours that the worker is absent : ";
	cin>>time;
	volume1 = p1*time;
	volume2 = p2*time;
	total = volume1+volume2;



	if(total < poolSize);
	{
		notFilled(total, volume1, volume2);
    }
    
    if(total > poolSize)
    {
    	int answer;
    	answer = total-poolSize;
    	cout<<"For "<< time<<" hours the pool overflows with "<<answer<< " liters"<<endl;
	}

}

void notFilled(int total, float volume1, float volume2)
{
	int contribution1;
	int contribution2;
	contribution1 = (volume1*100)/total;
	contribution2 = (volume2*100)/total;
	cout<<"The pool is not filled "<<endl;
	cout<<"the conribution of Pipe one : "<<contribution1<<endl;
	cout<<"the conribution of Pipe one : "<<contribution2<<endl;
}



