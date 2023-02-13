#include <stdio.h>

int main(int argc, char* argv[])
{
	if(argc !=2) {
		printf("ERROR : You need one argument.\n");
		return 1;//강제종료
	}

	int i = 0;//argv[0]에는 ./ex10이 있고, 
	//argv[1]에 내가 입력한 글자가 있다
	//./ex10 auto라고 입력했다면 auto는 argv[1][5]애 배열로 저장된다.
	//./ex10 auto hello 라고하면 argv[1][5]에는 auto, argv[2][6]에는 hello
	for(i = 0; argv[1][i] != '\0'; i++)
	{
		char letter = argv[1][i];

		switch(letter)
		{
			case 'a' : 
			case 'A' : 
				printf("%d: 'A'\n",1);
				break;

			case 'e' :
			case 'E' :
				printf("%d: 'E'\n",1);
				break;

			case 'o':
			case 'O':
				printf("%d: 'O'\n",1);
				break;

			case 'u':
			case 'U': 
				printf("%d: 'U'\n",1);
				break;

			case 'y':
			case 'Y':
			     if(i>2)
			     {
			     	printf("%d: 'Y'\n",1);
			     }	
				
			break;
			
			default : 
				printf("%d : %c is not a vowel\n",i,letter);
		}
	
	}
}




