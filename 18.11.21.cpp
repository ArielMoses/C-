#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int sum() {
	int num, i;
	cout << "Enter a number: ";
	cin >> num;
	for (i = 10; i < 100; i++) {
		if (((i / 10) + (i % 10)) == num) {
			cout << i << ", ";
		}
	}
	cout << endl;
	return 0;
}
int fr_sum() {
	float num1, num2, sum1, sum2;
	int i = 1;
	cout << "Enter your number: ";
	cin >> num1;
	sum2 = 0.0;
	num2 = num1;
	while (i <= num2) {
		sum1 = 1 / (num1 * num1);
		sum2 = sum2 + sum1;
		num1 = num1 - 1;
		i++;
	}
	cout << sum2 << endl;
	return 0;
}
int prime() {
	int num;
	bool is2 = false, is3 = false, is5 = false, is7 = false;
	int count = 0;
	cout << "enter your number: ";
	cin >> num;
	cout << "Prime digits are: ";
	int len = to_string(num).length();
	for (int i = 1; i <= len; i++) {
		if (num % 10 == 2 && is2 == false) {
			cout << num % 10 << ", ";
			is2 = true;
		}
		if (num % 10 == 3 && is3 == false) {
			cout << num % 10 << ", ";
			is3 = true;
		}
		if (num % 10 == 5 && is5 == false) {
			cout << num % 10 << ", ";
			is5 = true;
		}
		if (num % 10 == 7 && is7 == false) {
			cout << num % 10 << ", ";
			is7 = true;
		}
		if (num % 10 == 2 || num % 10 == 3 || num % 10 == 5 || num % 10 == 7) {
			count++;
		}
		num = num / 10;
	}
	cout << " Number of prime digits is: " << count << endl;
	return 0;
}
int pyramid() {
    int num, count = 0;
    cout << "Enter your number: ";
	cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int space = 1; space <= num - i; space++)
        {
            cout << "  ";
            count++;
        }
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
			cout << " ";
		}
        cout << endl;
    }
    return 0;
}
int main() {
	int choice = 1;
	while (choice != 0) {
		cout << "Menu:\n";
		cout << "Press:\n";
		cout << "0. for exit\n";
		cout << "1. for sum of fractions\n";
		cout << "2. for print numbers with sum digits equal to number\n";
		cout << "3. for prime digits\n";
		cout << "4. for print pyramid\n";
		cout << "Enter your choice: ";
		cin >> choice;
		if (choice == 1) {
			fr_sum();
		}
		if (choice == 2) {
			sum();
		}
		if (choice == 3) {
			prime();
		}
		if (choice == 4) {
			pyramid();
		}
	}
}