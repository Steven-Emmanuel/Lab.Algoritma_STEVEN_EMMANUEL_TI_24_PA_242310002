#include <stdio.h>
#include <conio.h>

int main(){
	int z = 3, x = 3, c = 1, bil;
	
	printf("bil-a | bil-b | bil-c\n");
	printf("-----------------------\n");
	for(bil = 1; bil <= 10; ++bil){
		z += x;
		x += c;
		c += 2;
		printf("%d\t | %d\t | %d\n", z, x, c);
		if(c == 13){
			break;
		}
	}
	return 0;
}
