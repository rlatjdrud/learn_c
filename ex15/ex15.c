#include <stdio.h>

int main(int argc, char* argv[])
{
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {"Alan", "Frank","Mary","John","Lisa"};

	int count = sizeof(ages)/sizeof(int);
	int i = 0;

	for(i = 0; i<count; i++)
	{
		printf("%s has %d years alive.\n",names[i],ages[i]);
	}

	printf("---\n");

	int *cur_age = ages;
	char **cure_name = names;

	for(i=0; i<count; i++)
	{
		printf("%s is %d years alive.\n",*(cure_name+i),*(cur_age+i));
	}

	printf("---\n");

	for(i=0; i<count; i++)
	{
		printf("%s is %d years old again.\n",cure_name[i],cur_age[i]);
	}
	printf("---\n");
	
	for(cure_name = names,cur_age = ages; (cur_age-ages)<count; cure_name++,cur_age++)
	{

		printf("%s is %d years old again.\n",cure_name[i],cur_age[i]);
		
	}
	return 0;
}


