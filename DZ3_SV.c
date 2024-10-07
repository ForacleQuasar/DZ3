#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_CTYPE, "RUS");
	float C;
	puts("Введите градусы цельсия\n");
	scanf("%f", &C);
	float F = (C * 9 / 5) + 32;
	float K = C + 273.15;
	printf("Заданное значание Цельсия в Фаренгейтах:%.2f\nЗаданное значение цельсия в Кельвинах:%.2f\n", F, K);
	system("pause");
}