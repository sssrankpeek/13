#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	char Snews[40] = "Hello, ", Name[20];
	int i = 0;
	printf("What is your name?\n"); 
	scanf("%s", Name);
	strcat(Snews, Name);
	printf("%s!\n", Snews);
	for (i;i<=strlen(Snews); i++)
	{
		putchar(toupper(Snews[i]));
	}
	for (int i = 0; i < 40 - strlen(Snews); i++)
	{
		char q='!';
		printf("%c", q);
	}
	for (int i = 7; i <= strlen(Snews); i++)
	{
		if (i == 7)
			Snews[i] = tolower(Snews[i]);
		else
			Snews[i] = toupper(Snews[i]);
	}
	printf("\n%s!", Snews);
}