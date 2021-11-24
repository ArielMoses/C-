#include <iostream>

using namespace std;


int main() {
	int num;
	int i;
	int a;
	int n;
	int k;
	bool flag1 = false;
	bool flag2 = false;
	cout << "Enter a Number:";
	cin >> num;
	for (int i = num - 1; i > 0; i--) {
		for (int j = i - 1; j > 1; j--) {
			if (i % j != 0) {
				flag1 = true;
			}
			else {
				flag1 = false;
				break;
			}
		}
		if (flag1 == true) {
			n = i;
			break;
		}
		
	}
	for (int a = num + 1; a < num*2; a++) {
		for (int b = a - 1; b > 1; b--) {
			if (a % b != 0) {
				flag2 = true;
			}
			else {
				flag2 = false;
				break;
			}
		}
		if (flag2 == true) {
			k = a;
			break;
		}

	}
	if ((k - num) > (num - n)) {
		cout << n;
	}
	if ((k - num) < (num - n)) {
		cout << k;
	}
	if ((k - num) == (num - n)) {
		cout << "There are two numbers that are equally close to the given number and they are: " << n << ", " << k;
	}
}
