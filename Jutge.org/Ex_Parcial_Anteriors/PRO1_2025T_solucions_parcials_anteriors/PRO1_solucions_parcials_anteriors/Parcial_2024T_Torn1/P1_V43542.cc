#include <string>
using namespace std;

/**
 * @pre c1, c2, c3 ∈ {A, 2, 3, 4, 5, 6, 7, 8, 9, J, Q, K}
 * @post prints "Trio d'Asos!", "Trio", "Parella", o "Totes les cartes diferents" depending on the
 * cards
 */
string poker_hand(char c1, char c2, char c3) {
	if (c1 == 'A' and c2 == 'A' and c3 == 'A') {
		return "Trio d'Asos!";
	} else if (c1 == c2 and c2 == c3) {
		return "Trio";
	} else if (c1 == c2 or c2 == c3 or c1 == c3) {
		return "Parella";
	} else {
		return "Totes les cartes diferents";
	}
}
