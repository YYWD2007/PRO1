#include <iostream>
using namespace std;

int main() {
	int x;
	int max_odd = 0, odd = 0;
	int max_even = 0, even = 0;

	while (cin >> x) {
		if (x % 2 == 0) {
			odd = 0;
			even++;
			max_even = max(max_even, even);
		} else {
			even = 0;
			odd++;
			max_odd = max(max_odd, odd);
		}
	}

	cout << "PARELL: " << max_even << endl;
	cout << "SENAR: " << max_odd << endl;

	return 0;
}
