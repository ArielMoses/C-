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
				
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
	#include <iostream>

using namespace std;


int sub(int num1, int num2) {
	int i = 0;
	if (num1 > num2) {
		i = num2;
	}
	if (num1 < num2) {
		i = num1;
	}
	else {
		i = num1;
	}
	for (i; i > 1; i--) {
		if (num1 % i == 0 && num2 % i == 0) {
			cout << i;
			break;
		}
	}
	return 0;
}


int main() {
	int num1;
	int num2;
	cout << "Enter the first Number:";
	cin >> num1;
	cout << "Enter the second Number:";
	cin >> num2;
	sub(num1, num2);

}

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
