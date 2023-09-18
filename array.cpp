#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
string check_result( int x);
int main()
{
	int num[4], total = 0 , max = INT_MIN , min = INT_MAX ;// (INT_MAX, INT_MIN) ใช้กำหนดค่าสูงสุดและต่ำสุดของ INT

	string name[4];
	for (int i = 0 ; i <= 3 ; i++)
	{	cout << "Name  ["<<i<<"] : ";
		cin >> name[i];
		cout << "Score ["<<i<<"] : ";
		cin >> num[i];
		
	}
	cout << "-------------------------------------------------\n";
	cout << "Name		Score		Result\n";
	cout << "-------------------------------------------------\n";
	for (int i = 0 ; i < 4 ; i++){
	cout << name[i] << "\t\t"<< num[i]<<"\t\t"<<check_result(num[i])<<endl;
	
	
	total =  total+ num[i];
	if (num[i] < min)
		min = num[i];
	if (num [i] > max)
		max = num[i];
	}
	cout << "Max Score = "<< max << endl;
	cout << "Min Score = "<< min <<endl;
	cout << "Total Score = " << total<<endl;
	cout << "Average Score = " << (float)total/4 <<endl;
	system("pause");
	return 0;
}

string check_result( int x)
{
	if (x >= 50)
		return("Pass");
	else 
		return("Failed");
}