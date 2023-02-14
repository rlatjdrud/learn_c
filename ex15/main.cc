#include <stdio.h>

int main()
{
	
	int arr[] = {1,2,3,4,5};
	int* p = arr;
	printf("%u | %u | %u ",&arr,&arr[0],p);
	return 0;

}
