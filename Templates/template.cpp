// Mark Hummel
// CIS 1202
// 12/3/22

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

template <typename T>
double half(T number) {
	return number / 2.0;
}

int main() 
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << setprecision(2) << showpoint;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << ceil(half(c)) << endl << endl;

	system("pause");


	return 0;
}