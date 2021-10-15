#include <iostream>
using namespace std;

int main()
{
	float a;
	float b;
	float c;
	cout << "Enter the Price of the Fuel: ";
	cin >> a;
	cout << "Enter the Distance: ";
	cin >> b;
	cout << "Enter the Car's efficiency: ";
	cin >> c;
	float d = b / c * a;
	cout << d;
}