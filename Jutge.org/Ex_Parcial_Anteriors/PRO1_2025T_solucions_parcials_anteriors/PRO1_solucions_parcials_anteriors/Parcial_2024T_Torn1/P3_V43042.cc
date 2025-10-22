#include <iostream>
using namespace std;

int main() {
	int poker_length;
	cin >> poker_length;

	bool poker = false;
	int count = 1;
	char card, card_last;

	// La seqüència té almenys una carta
	cin >> card;
	if (count == poker_length) {
		poker = true;
	} else {
		card_last = card;
	}
	while (!poker && cin >> card) {
		if (card == card_last) {
			count++;
			if (count == poker_length) {
				poker = true;
			}
		} else {
			count = 1;
			card_last = card;
		}
	}

	if (poker) {
		cout << poker_length << "-Poker de " << card << "!" << endl;
	} else {
		cout << "No hi ha " << poker_length << "-Poker" << endl;
	}
}
