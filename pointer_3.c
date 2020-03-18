#include <stdio.h>
void swapTwoNumbers(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int x=10; y=5;
	swapTwoNumbers(&x,&y);
	printf("%d\n", "%\n",x,y);
	return (0);
}
