#include <iostream>
#include <stdio.h>
#include <conio.h>

int main(){
	int c, v, b;
	
	pertama:
	std::cout <<"tulis nilai bilangan= ";
	std::cin >>c;
	v = c%2;
	printf("Nilai %d %% 2 adalah = %d/n", c, v);
	printf("\n");
	printf("\nMencoba Hitung Ulang Lagi [y/t]");
	b = getch();
	if(b == 'y' || b == 'y'){
		goto pertama;
	}
	return 0;
}
