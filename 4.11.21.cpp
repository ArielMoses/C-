#include<iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int exc1() {
	float x1; //first x value 
	float x2; //second x value
	float y1; //first y value
	float y2; //second y value
	float dis; //the distnce
	cout << "Please enter the x value of the first point:";
	cin >> x1;
	cout << "Please enter the y value of the first point:";
	cin >> y1;
	cout << "Please enter the x value of the second point:";
	cin >> x2;
	cout << "Please enter the y value of the second point:";
	cin >> y2;
	dis = sqrt((x1 + x2) * (x1 + x2) + (y1 + y2) * (y1 + y2));

	cout << "the dictance between  (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ")is " << dis << endl;
	return 0;
}
int exc2() {

	{
		int a;
		int b;
		int c;
		int d;
		int e;
		int f;
		int g;
		int h;
		int i;
		int j;
		int k;
		int l;
		int m;
		int n;
		cout << "Enter the amount of money (Bigger then 100):";
		cin >> a;
		b = a / 100;
		c = a % 100;
		d = c / 50;
		e = c % 50;
		f = e / 20;
		g = e % 20;
		h = g / 10;
		i = g % 10;
		j = i / 5;
		k = i % 5;
		l = k / 2;
		m = k % 2;
		n = m / 1;
		cout << b << "*100 + " << d << "*50 + " << f << "*20 + " << h << "*10 + " << j << "*5 + " << l << "*2 + " << n << "*1 NIS.";
		return 0;
	}

}
int exc3() {
	float num_of_items, discount, discount2, smallest_item;
	int item1, item2, item3, item4;
	cout << "Hi, how many items did you purchase?";
	cin >> num_of_items;
	if (num_of_items <= 4)
	{
		if (num_of_items == 1)
		{
			cout << "Please enter the price of item number 1: ";
			cin >> item1;
			if (item1 > 300) {
				cout << "Your discout is: " << (item1 / 300) * 30 << ", and thus your total payment is: " << item1 - ((item1 / 300) * 30);
			}
			else {
				cout << "Your total payment is: " << item1;
			}
		}
		if (num_of_items == 2) {
			cout << "Please enter the price of item 1: ";
			cin >> item1;
			cout << "Please enter the price of item 2: ";
			cin >> item2;
			if (item1 + item2 > 300) {
				cout << "Your discout is: " << ((item1 + item2) / 300) * 30 << ", and thus your total payment is: " << item1 - (((item1 + item2) / 300) * 30);
			}
			else {
				cout << "Your total payment is: " << item1 + item2;
			}
		}
		if (num_of_items == 3) {
			cout << "Please enter the price of item 1: ";
			cin >> item1;
			cout << "Please enter the price of item 2: ";
			cin >> item2;
			cout << "Please enter the price of item 2: ";
			cin >> item3;
			for (int i = 0; i <= item1 && i <= item2 && i <= item3; i++) {
				if (i == item1) {
					smallest_item = item1;
				}
				if (i == item2) {
					smallest_item = item2;
				}
				if (i == item3) {
					smallest_item = item3;
				}
			}
			discount2 = ((item1 + item2 + item3) - (smallest_item / 2));

			if ((item1 + item2 + item3) > 300) {
				discount = (item1 + item2 + item3) - (((item1 + item2 + item3) / 300) * 30);
			}

			if (discount2 > discount) {
				cout << "Your discout is: " << ((item1 + item2 + item3) / 300) * 30 << " ILS, and thus your total payment is:" << discount;
			}
			if (discount > discount2) {
				cout << "Your discout is: " << (smallest_item / 2) << "ILS, and thus your total payment is:" << discount2;
			}
		}
		if (num_of_items == 4) {
			cout << "Please enter the price of item 1: ";
			cin >> item1;
			cout << "Please enter the price of item 2: ";
			cin >> item2;
			cout << "Please enter the price of item 3: ";
			cin >> item3;
			cout << "Please enter the price of item 4: ";
			cin >> item4;
			for (int i = 0; i <= item1 && i <= item2 && i <= item3 && i <= item4; i++) {
				if (i == item1) {
					smallest_item = item1;
				}
				if (i == item2) {
					smallest_item = item2;
				}
				if (i == item3) {
					smallest_item = item3;
				}
				if (i == item4) {
					smallest_item = item4;
				}
			}
			discount2 = ((item1 + item2 + item3 + item4) - (smallest_item / 2));

			if ((item1 + item2 + item3 + item4) > 300) {
				discount = (item1 + item2 + item3 + item4) - (((item1 + item2 + item3 + item4) / 300) * 30);
				if (discount2 > discount) {
					cout << "Your discout is: " << ((item1 + item2 + item3 + item4) / 300) * 30 << " ILS, and thus your total payment is:" << discount;
				}
				if (discount > discount2) {
					cout << "Your discout is: " << (smallest_item / 2) << "ILS, and thus your total payment is:" << discount2;
				}
			}
			if ((item1 + item2 + item3 + item4) < 300) {
				cout << "Your discout is: " << (smallest_item / 2) << "ILS, and thus your total payment is:" << discount2;
				}
			if ((item1 + item2 + item3 + item4) == 300) {
				discount = (item1 + item2 + item3 + item4) - (((item1 + item2 + item3 + item4) / 300) * 30);
				discount2 = ((item1 + item2 + item3 + item4) - (smallest_item / 2));
				if (discount2 > discount) {
					cout << "Your discout is: " << ((item1 + item2 + item3 + item4) / 300) * 30 << " ILS, and thus your total payment is:" << discount;
				}
				if (discount > discount2) {
					cout << "Your discout is: " << (smallest_item / 2) << "ILS, and thus your total payment is:" << discount2;
				}
				}
			}
		}


	return 0;
	}
int main() {
	cout << "Menu:\n0. Exit\n1. Euclidean distance\n2. change money\n3. what is your total payment\n";
	int x;
	cin >> x;
	if (x == 1) {
		exc1();
	}
	if (x == 2) {
		exc2();
	}
	if (x == 3) {
		exc3();
	}
	return 0;
}