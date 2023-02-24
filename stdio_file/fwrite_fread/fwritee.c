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
	ksk->math = 90;
	ksk->english = 80;
	ksk->science = 70;
	
	pfile=fopen("example.txt","w");
	fwrite(ksk,sizeof(struct student),1,pfile);
	fclose(pfile);
	free(ksk);
		
	return 0;
}
