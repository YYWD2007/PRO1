#include <cmath>
using namespace std;

/* Llegeix 2 naturals (enters positius) de l'entrada estàndard
 * i digues quina és la seva diferència.
 * La diferència entre dos nombres es defineix com la suma del valor
 * de la diferència (en valor absolut) dígit a dígit.
 * Per exemple, la diferència entre el 24 i el 2317 és 9:
 *
 *      0024
 *      2317
 *      ----
 *      2313 = 2 + 3 + 1 + 3 = 9
 *
 * Solució RECURSIVA únicament.
 */
int diferencia(int x, int y) {
	if (x == 0 and y == 0) {
		return 0; /* cas base */
	}
	int d = abs(x % 10 - y % 10);
	return d + diferencia(x / 10, y / 10);
}
