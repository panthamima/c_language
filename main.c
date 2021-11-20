#include <stdio.h>
#include <curses.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp;
	char RU_ALPHABET[] = "абвгдежзийклмнопрстуфхцчшщъьыэюя";
	char US_ALPHABET[] = "abcdefghijknmlopqrstuvwxyz";

	char name[] = "LetterBase.txt";
	if (getchar() = RU_ALPHABET)
		fp = fopen(name, "a");
	else 
		printf("undeclarated char");

	fclose(fp);
	getchar();
	return 0;




}