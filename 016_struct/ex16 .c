#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
	char* name;
	int age;
	int height;
	int weight;
};

struct Person* Person_create(char* name, int age, int height, int weight)
{
	struct Person* who = (struct Person*)malloc(sizeof(struct Person));
	assert(who!=NULL); // 괄호안의 명제가 거짓이면 프로그램을 종료시킨다.
	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;
	
	return who;
}

void Person_destroy(struct Person* who)
{
	assert(who != NULL);
	printf("destroy %s\n",who->name);
	free(who);
}

void Person_print(struct Person* who)
{
	printf("Name : %s\n",who->name);
	printf("age : %d\n",who->age);
	printf("height : %d\n",who->height);
	printf("weight : %d\n",who->weight);
}

int main(int argc, char* argv[])
{
	struct Person* joe = Person_create("joe Alex",32,64,140);
	struct Person* frank = Person_create("frank blank",20,72,180);
	Person_print(joe);
	printf("location of joe struct : %u\n",joe);

	Person_print(frank);
	printf("location of frank struct : %u\n",frank);

	joe->age += 20;
	joe->height -=2;
	joe->weight +=10;
	Person_print(joe);

	frank->age += 20;
	frank->height -=2;
	frank->weight +=10;
	Person_print(frank);

	Person_destroy(joe);
	Person_destroy(frank);
	
	return 0; 
}


