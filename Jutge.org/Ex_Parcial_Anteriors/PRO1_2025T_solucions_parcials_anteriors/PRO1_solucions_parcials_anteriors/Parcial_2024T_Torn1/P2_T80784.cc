
#include <cassert>

/**
 * @pre n >= 0
 * @post Returns true if number is of form: a^n b^m, where a != b, n, m > 0
 */
bool is_bicolor(int n) {
	// Primera part: digit1 repetit
	int d1 = n % 10;
	n /= 10;
	while (n > 0 && n % 10 == d1) {
		n /= 10;
	}

	// Si totes les xifres eren iguals, no és bicolor
	if (n == 0) {
		return false;
	}

	// Segona part: digit2 repetit
	int d2 = n % 10;
	n /= 10;
	while (n > 0 && n % 10 == d2) {
		n /= 10;
	}

	// És bicolor si ja no queden xifres
	return n == 0;
}
