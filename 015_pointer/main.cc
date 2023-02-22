#include <stdio.h>

int main()
{
	
	char* arr[] = {"seoul","daegu","sinla","busan"};
	char** p = arr;
	printf("%u | %s |%u |%u| ",&arr,*p,arr,&arr[0]);
	return 0;

}
