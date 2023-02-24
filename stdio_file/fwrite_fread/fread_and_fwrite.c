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
	pfile=fopen("example2.txt","w+");
	fwrite(ksk,sizeof(struct student),1,pfile);
	fseek(pfile,0,SEEK_SET);
	ksk->math = 0;
	ksk->english = 0;
	ksk->science = 0;

	fread(ksk,sizeof(struct student),1,pfile);
	printf("%d|%d|%d\n",ksk->math,ksk->english,ksk->science);
	fclose(pfile);
	free(ksk);
		
	return 0;
}
