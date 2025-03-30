#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int proverka() {

	int cifra, chislo, indicator;
	char symbol;
	chislo = 0;
	indicator = 1;

	while (true) {
		symbol = getchar();
		if (chislo > 65355) {
			indicator = 0;
		}
		if (symbol == 10) {
			break;
		}
		if ((48 <= symbol) and (symbol <= 57)) {
			symbol = (int)(symbol);
			cifra = symbol - '0';
			chislo = (chislo * 10) + cifra;
		}
		else {
			indicator = 0;
		}
	}
	if (indicator == 0) {
		chislo = -2;
	}
	return(chislo);
}

int main() {
	int a, b;
	a = 0;
	b = 0;
	b = proverka();
	a = proverka();
	printf("%d\n%d", b, a);

}