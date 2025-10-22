int card_value(char c) {
	if (c == 'A') {
		return 14;
	} else if (c == 'K') {
		return 13;
	} else if (c == 'Q') {
		return 12;
	} else if (c == 'J') {
		return 11;
	} else if (c == '0') {
		return 10;
	} else {
		return c - '0';
	}
}

/**
 * @pre c1, c2 in the set {A, 2, 3, ..., 8, 9, 0, J, Q, K}
 * @post Returns true if c1 has a higher value than c2
 */
bool better_card(char c1, char c2) {
	return card_value(c1) > card_value(c2);
}
