#include <iostream>
using namespace std;

void print_repetition(int repetitions, char card) {
	if (repetitions == 2) {
		cout << "Parella de " << card << "s" << endl;
	} else if (repetitions == 3) {
		cout << "Trio de " << card << "s" << endl;
	} else if (repetitions == 4) {
		cout << "Poker de " << card << "s" << endl;
	} else {
		cout << repetitions << " " << card << "s!" << endl;
	}
}

int main() {
	char card, last_card = ' ';
	int repetitions = 0;

	cin >> card;
	while (card != '.') {
		if (card == last_card) {
			repetitions++;
		} else {
			if (repetitions > 1) {
				print_repetition(repetitions, last_card);
			}
			repetitions = 1;
		}
		last_card = card;
		cin >> card;
	}
	if (repetitions > 1) {
		print_repetition(repetitions, last_card);
	}
}
