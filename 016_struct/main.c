#include <stdio.h>
struct Person
{
	char* name;
	int age;
	int height;
	int weight;
}who;


int main()
{	

	

	char *name="seoul";
	printf("%d\n",sizeof(name));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof( who.name));
	printf("%d\n",sizeof( who.age));
	printf("%d\n",sizeof( who.height));
	printf("%d\n",sizeof( who.weight));
	printf("%d\n",sizeof(who));

	return 0;
}
