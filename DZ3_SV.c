#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_CTYPE, "RUS");
	float C;
	puts("������� ������� �������\n");
	scanf("%f", &C);
	float F = (C * 9 / 5) + 32;
	float K = C + 273.15;
	printf("�������� �������� ������� � �����������:%.2f\n�������� �������� ������� � ���������:%.2f\n", F, K);
	system("pause");
}