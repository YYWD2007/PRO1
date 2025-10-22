#include <iostream>
using namespace std;

/*
 * Llegeix una seqüència de nombres enters positius (almenys té tres elements)
 * i digues si és creixent respecte a la diferència entre nombres adjacents.
 *
 * Una sequencia és creixent respecte a la diferencia entre adjacents si per a
 * cada 3 numeros adjacents de la sequencia:
 *
 *     ... x1     x2     x3  ...
 *
 * es compleix que
 *
 *            d1 <= d2
 *
 * on d1 es la diferencia entre x1 i x2 i d2 es la diferencia entre d2 i d3.
 *
 */

int diferencia(int x, int y) {
	if (x == 0 and y == 0) {
		return 0; /* cas base */
	}
	int d = abs(x % 10 - y % 10);
	return d + diferencia(x / 10, y / 10);
}

int main() {
	int x1 = 0, x2 = 0, x3 = 0;
	int d1 = 0, d2 = 0;
	bool trobat = false;

	cin >> x1 >> x2;
	d1 = diferencia(x1, x2);

	while (cin >> x3 and not trobat) {
		d2 = diferencia(x2, x3);
		if (d2 < d1) {
			trobat = true;
		} else {
			x1 = x2;
			x2 = x3;
			d1 = d2;
		}
	}
	cout << (trobat ? "NO" : "SI") << endl;
}
