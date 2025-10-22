
#include <iostream>

using namespace std;

int main() {
	char c;
	int p = 1, t = 0;

	while (cin >> c) {
		if (c == '*') {
			cout << char(t);
			p = 1;
			t = 0;
		} else {
			t = t + p * int(c - '0');
			p = 2 * p;
		}
	}
	cout << endl;
}
