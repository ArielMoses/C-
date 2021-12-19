#include <iostream>

using namespace std;

double large_of_average(double a[], int size) {
	int avr = 0;
	int big_counter = 0;
	double dou_size = size;
	for (int j = 0; j < size; j++) {
		avr = avr + a[j];
	}
	for (int k = 0; k < size; k++) {
		if (a[k] - (avr/size) >= 1) {
			big_counter++;
		}
	}
	cout << (100 / dou_size) * big_counter << "%";
	return 0;
}


bool is_diff(int a[], int size) {
	int check = 0;
	for (int j = 0; j < size; j++) {
		for (int k = 0; k < size; k++) {
			if (a[j] == a[k]) {
				check++;
			}
		}
		if (check > size) {
			cout << "False";
			break;
		}
		
	}
	if (check == size) {
		cout << "true";
	}
	return false;
}

int main() {
	int choise;
	cout << "Enter choise: ";
	cin >> choise;
	if (choise == 1) {
		double a[100];
		int usr_arr_size;
		cout << "Enter the array size: ";
		cin >> usr_arr_size;
		cout << "Please fill the array slots: " << endl;
		for (int i = 0; i < usr_arr_size; i++) {
			cin >> a[i];
		}
		large_of_average(a, usr_arr_size);
	}
	if (choise == 2) {
		int a[100];
		int usr_arr_size;
		cout << "Enter the array size: ";
		cin >> usr_arr_size;
		cout << "Please fill the array slots: " << endl;
		for (int i = 0; i < usr_arr_size; i++) {
			cin >> a[i];
		}
		is_diff(a, usr_arr_size);
	}
}