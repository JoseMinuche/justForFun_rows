#include <stdio.h>

int main(){

	int s;

	printf("Enter number of rows to appear: ");
	scanf("%d", &s);

	for(int p = 1; p <= s; p++){

		for(int m = 1; m <= p; m++){

			if(m == 1 || p == m || p == s){

				printf("*");
			}
			else{
				printf(" ");
			}
		}
	printf("\n");
	}

	return 0;
}
