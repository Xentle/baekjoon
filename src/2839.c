#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	if( N==4 || N==7)
		printf("-1\n");
	else if(N%5==0)
		printf("%d\n", N/5);
	else if(N%5==1)
		printf("%d\n", N/5+1);
	else if(N%5==2)
		printf("%d\n", N/5+2);
	else if(N%5==3)
		printf("%d\n", N/5+1);
	else
		printf("%d\n", N/5+2);
	return 0;
}