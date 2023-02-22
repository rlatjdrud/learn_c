#include <stdio.h>

int main(int argc, char* argv[])
{	char full_name[] = {
	'Z', 'e', 'd',
	' ', 'A', '.', ' ',
	'S', 'h', 'a', 'w', '\0'
	};

	int areas[] = {10,11,12,13,14};
	char name[] = "ZED";
	
	printf("the sizeof an int : %ld\n",sizeof(int));
	printf("the size of areas(int[]) : %ld\n",sizeof(areas));
	printf("the number of ints in areas : %ld\n",sizeof(areas)/sizeof(int));
	printf("the first area is %d, the 2nd %d.\n",areas[0],areas[1]);
	printf("the size of a char : %ld\n",sizeof(char));
	printf("the size of name(char[]) : %ld\n",sizeof(name));
	printf("the number of chars: %ld\n",sizeof(name)/sizeof(char));
	printf("the size of full_name(char[]) : %ld\n",sizeof(full_name));
	printf("the number of chars:%ld\n",sizeof(full_name)/sizeof(char));
	printf("name=\"%s\" and full_name = \"%s\"\n",name,full_name);
	return 0;
}
