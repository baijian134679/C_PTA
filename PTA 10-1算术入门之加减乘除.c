#include <stdio.h>

int main()
{
	int a,b;
	if (scanf("%d %d", &a, &b)>-2E31&&
		scanf("%d %d", &a, &b)<2E31)
	printf("%d + %d = %d\n", a, b, a+b);
	printf("%d - %d = %d\n", a, b, a-b);
	printf("%d * %d = %d\n", a, b, a*b);
	if(a%b == 0){
		printf("%d / %d = %d\n",a , b, a / b);
	}else{
		printf("%d / %d = %.2f\n",a , b, a*1.00 / b*1.00);
	}
	
	return 0;
	
}
