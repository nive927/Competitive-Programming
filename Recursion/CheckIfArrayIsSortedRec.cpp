#include <iostream>
using namespace std;

bool is_sorted2(int a[], int size) {
	if (size == 0 || size ==1) {
		return true;
	}

	bool isSmallerOutput = is_sorted2(a + 1, size -1);
	if (!isSmallerOutput) {
		return false;
	}
	if (a[0] > a[1]) {
		return false;
	} else {
		return true;
	}

}

bool is_sorted(int a[], int size) {
	if (size == 0 || size ==1) {
		return true;
	}

	if (a[0] > a[1]) {
		return false;
	}
	bool isSmallerSorted = is_sorted(a + 1, size - 1);
	return isSmallerSorted;
	/*if (isSmallerSorted) {
		return true;
	} else {
		return false;
	}*/
}

int main() {
	int a = [12, 13, 14, 15, 20];
	int size = 5;

	for(int i=0; i<size; i++)
		cout << a[i] << " ";
	cout << endl;

	cout << is_sorted(a, size);
}