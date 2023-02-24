#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void die(const char* message)
{
	if(errno)
	{
		perror(message);
	}
	else 
	{
		printf("ERROR:%s\n",message);
	}

	exit(1);
}

typedef int (*compare_cb)(int a, int b);

int *bubble_sort(int *numbers, int count, compare_cb cmp)
{
	int temp =0;
	int i=0;
	int j=0;
	
	int* target = (int*)malloc(count*sizeof(int));

	memcpy(target,numbers,count*sizeof(int));

	for(i=0; i<count; i++)
	{
		for(j=0; j<count-1; j++)
		{
			if(cmp(target[j],target[j+1])>0)
			{
				temp = target[j+1];
				target[j+1]=target[j];
				target[j]=temp;
			}
		}
	}
 return target;
}

int sorted_order(int a, int b)
{
	return a-b;
}

int sorted_reverse(int a, int b)
{
	return b-a;	
}

int sorted_strange(int a, int b)
{
	if (a==0 || b==0) return 0;
	else return a%b;
}

void test_sorting(int* numbers,int count, compare_cb cmp)
{
	int i =0;
	int *sorted = bubble_sort(numbers,count,cmp);

	for(i=0; i<count; i++)
	{
		printf("%d ",sorted[i]);
	}

	printf("\n");
	free(sorted);
}

int main(int argc, char *argv[])
{
	if(argc<2) die("USAGE : ./ex18 4 3 1 5 6");
       
	int count = argc-1;
	char** inputs= argv+1;
	
	int* numbers = (int*)malloc(count*sizeof(int));
	
	for(int i=0; i<count; i++)
	{
		numbers[i]=atoi(inputs[i]);
	}	

	test_sorting(numbers,count,sorted_order);
	test_sorting(numbers,count,sorted_reverse);
	test_sorting(numbers,count,sorted_strange);
	free(numbers);
	return 0;
}



