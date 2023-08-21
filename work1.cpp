#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{	
	int s , r , max = 0 , sum = 0 ;
	float avg = 0.0;
	srand(time(NULL));
	r = 1+rand()%10;
	cout << "Random number of student(1-10) : " << r <<endl;
	
	for (float i = 1; i <= r ; i++)
	{	cout<<"Input score " << i << " : ";
		cin >> s;
		if (s >= max)
		{max = s;}
		sum += s;
		avg = sum/i; 
		
		
		
	}

	cout << "-----------------------------\n";

	cout <<"Max Score  = " << max << endl;
	cout <<"Sum Score  = " << sum << endl;
	cout <<"Avg. Score = " << fixed << setprecision(2) <<avg   << endl;
	cout << "-----------------------------\n";



	system("pause");
	return(0);
}