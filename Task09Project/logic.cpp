// Task 09 [The sum VI]
// Сумма
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму цифр заданного числа, кратных 5

int recursion(int number) {
	if (number == 0) {
		return 0;
	}

	int digit = number % 5 == 0 ? number % 10 : 0;

	return recursion(number / 10) + digit;
}

int sum(int number) {
	number = number < 0 ? -number : number;
	return recursion(number);
}