/* this is some code trying to solve problem, rather that writing a new program for each problem,*
* im writing one program with a problem chooser table. */

#include <stdio.h>

int chooser();    //prototype for table of contents function

int main()
{
	chooser();
	return 0;
}

int chooser()
{
	char choice;
	char Names();

	printf("Choose the file to run:\n");
        printf("1 = Hello World\n");
        printf("2 = Names\n");
        printf("3 = Sums\n");
        printf("4 = Multiplication Tables\n");
        printf("5 = Prime Numbers\n");
        printf("6 = Guessing Game\n");
        printf("7 = Leap Years\n");
	ToC:
        printf("Type choice and Press Enter:");
        scanf( "%c", &choice);
	
	switch(choice)
	{
		case '1':
				printf("Hello World\n");
				break;
                case '2':
                                Names();
                                break;
                case '3':
                                printf("program not yet implemented\n");
                                break;
                case '4':
                                printf("program not yet implemented\n");
                                break;
                case '5':
                                printf("program not yet implemented\n");
                                break;
                case '6':
                                printf("program not yet implemented\n");
                                break;
                case '7':
                                printf("program not yet implemented\n");
                                break;
		default:
				printf("try again\n");
				goto ToC;
	}
}
char Names()
{
	char inName[20];
	printf("Print your name and press enter:\n");
	scanf( "%c",&inName);
	if (inName == "Bob" || "Alice")
	{
		printf("Hello %c,\n", inName);
	}
	else
		printf("Unknown user\n");
}
