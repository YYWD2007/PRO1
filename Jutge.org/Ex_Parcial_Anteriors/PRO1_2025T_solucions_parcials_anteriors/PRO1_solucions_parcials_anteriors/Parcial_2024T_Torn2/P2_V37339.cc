/**
 * @pre n >= 0
 * @post Returns true if n is of the form dee···ed, with d ≠ e
 */
bool is_sandwich(int n) {
	// Keep first digit for later, check that n is not single digit
	int first = n % 10;
	n /= 10;
	if (n == 0) {
		return false;
	}

	// First and middle must be different, and there should be a last digit
	int middle = n % 10;
	n /= 10;
	if (middle == first || n == 0) {
		return false;
	}

	// Skip repetitions of the middle digit
	while (n >= 10 && n % 10 == middle) {
		n /= 10;
	}

	// Only one digit must remain and it must be equal to the first
	return n == first;
}
