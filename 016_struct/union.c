#include <stdio.h>

union A 
{
	int i;
	char j;
};

int main()
{
	union A a;
	a.i = 0x12345;
	printf("%x",a.j);
return 0;
}
