// Task 01 [The sum I]
// Сумма 
// 
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чисел от 1 до N.

int recursion(int number) {
	if (number == 0) {
		return 0;
	}
	return recursion(number - 1) + number;
}

int sum(int number) {
	if (number <= 0) {
		return -1;
	}
	return recursion(number);
}