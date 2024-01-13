#include <iostream>

using namespace std;

int main()
{
	string courses[] = { "Maths", "German", "Web Dev" };

	int a, b, c;
	int x, y, z;

	cout << "Enter Grade Points for MATHS : " << endl;
	cin >> a;
	
	cout << "Enter Grade Points for GERMAN : " << endl;
	cin >> b;

	cout << "Enter Grade Points for WEB DEV : " << endl;
	cin >> c;

	cout << "Enter CREDIT HOURS for MATHS : " << endl;
	cin >> x;

	cout << "Enter CREDIT HOURS for GERMAN : " << endl;
	cin >> y;

	cout << "Enter CREDIT HOURS for WEB DEV : " << endl;
	cin >> z;

	courses[0] = a;
	courses[1] = b;
	courses[2] = c;

	double totalCreditPoints = (a * x) + (b * y) + (c * z);
	cout << "The Total Credit Points are : " << totalCreditPoints << endl;

	double creditHours = x + y + z;
	cout << "The Total Credit Hours are : " << creditHours << endl;

	double cgpa = totalCreditPoints / creditHours;
	cout << "The Cumulative Grade Point Average (CGPA) is : " << cgpa << endl;

	

	return 0;
}