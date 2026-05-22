// Task 07 [The number of odd digits]
// Количество нечётных цифр
//
// Необходимо спроектировать и реализовать программу, 
// которая считает количество нечётных цифр
// в заданном целом числе.

int recursion(int number) {
	if (number == 0) {
		return 0;
	}

	int index = number % 2 == 0 ? 0 : 1;

	return recursion(number / 10) + index;
}

int count_of_odd_digits(int number) {
	number = number < 0 ? -number : number;
	return recursion(number);
}