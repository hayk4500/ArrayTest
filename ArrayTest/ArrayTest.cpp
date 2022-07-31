#include <iostream>

using namespace std;

int main() {
	int const MAX = 5;
	int array [MAX];
	for (int i = 0; i < MAX; i++) {
		cout << "Enter index(" << i << "): ";
		cin >> array[i];
	}
	for (int k = 0; k < MAX; k++) {
		cout << endl;
		cout << "Enters numbers in index " << k << " is: " << array[k];
	}
	return 0;
}