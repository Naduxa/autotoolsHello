#include <stdio.h>

int getSum(int a, int b){
	return a + b;
}
int main(){
	int a, b;
	scanf(" %d %d", &a, &b);
	printf("%d", getSum(a, b));
	return 0;
}
