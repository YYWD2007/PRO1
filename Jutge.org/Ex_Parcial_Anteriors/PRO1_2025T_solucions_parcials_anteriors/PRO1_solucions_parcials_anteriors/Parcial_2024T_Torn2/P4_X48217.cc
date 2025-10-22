#include <cassert>
#include <iostream>
using namespace std;

/**
 * @pre  d ≠ e ⋀ 3 ⩽ length ⩽ 9
 * @post Returns a sandwich number like: dee···ed (e repeated length-2 times)
 */
int make_sandwich(int d, int e, int length) {
	assert(d != e);
	assert(length >= 3 && length <= 9);
	int n = d;
	for (int i = 0; i < length - 2; i++) {
		n = n * 10 + e;
	}
	n = n * 10 + d;
	return n;
}

int main() {
	int num_digits;
	cin >> num_digits;
	assert(num_digits >= 3 && num_digits <= 9);
	for (int d = 1; d <= 9; d++) {
		for (int e = 0; e <= 9; e++) {
			if (d != e) {
				cout << make_sandwich(d, e, num_digits) << endl;
			}
		}
	}
}
