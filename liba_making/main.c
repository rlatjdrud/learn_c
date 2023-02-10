#include <stdio.h>
#include "lib/calc.h"

int main()
{
	int a,b;
	printf("숫자두개 입력: ");
	scanf("%d %d",&a,&b);

	printf("%d + %d = %d\n",a,b,add(a,b));
	printf("%d - %d = %d\n",a,b,sub(a,b));
	printf("%d * %d = %d\n",a,b,mult(a,b));
	printf("%d / %d = %f\n",a,b,div(a,b));
	
	return 0;
}
