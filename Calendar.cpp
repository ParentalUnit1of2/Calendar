#include <iostream>
using namespace std;

int main()
{
	// (year % 4 == 0 && year % 100 != 0 || year %400 ==0)
	int year, month;
	cout << "How many days are in a month? Let's find out! " << endl;
	cout << "Please enter a year and month: " << endl;
	cin >> year >> month;
	
	switch (month)
	{
	case 2:(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
		cout << "There are 29 days in this month.  It is a Leap Year." : cout << 
		"There are 28 days in this month."; break;
	case 4:
	case 6:
	case 9:
	case 11: cout << "There are 30 days in this month."; break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: cout << "There are 31 days in this month."; break;
	default:cout << "This is not a valid entry!";

	}
	system("pause>0");
}