#include <stdio.h>

int main()
{
	
	char* arr[] = {"seoul","daegu","sinla","busan"};
	char** p = arr;
	printf("%u | %u | ",&arr[0],&p);
	return 0;

}
