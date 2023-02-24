#include <stdio.h>

struct student
{
	int math;
	int english;
	int science;
};





int main()
{	

	FILE* pfile;
	struct student* ksk = (struct student*)malloc(sizeof(struct student));

	pfile=fopen("example.txt","r");
	fread(ksk,sizeof(struct student),1,pfile);
	printf("%d|%d|%d\n",ksk->math,ksk->english,ksk->science);
	fclose(pfile);
	free(ksk);
		
	return 0;
}
