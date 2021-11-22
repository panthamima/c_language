#include <stdio.h>
#include <curses.h>
#include <stdlib.h>
#include <string.h>

char scan_save_word(char);
char auto_complete(char);

int main()
{
	FILE *lb;
	char RU_ALPHABET[] = "абвгдежзийклмнопрстуфхцчшщъьыэюя";
	char US_ALPHABET[] = "abcdefghijknmlopqrstuvwxyz";

	// char name[] = "LetterBase.txt";
	if (getchar())
		lb = fopen("LetterBase.txt", "a");
	else 
		printf("undeclarated char");

	fclose(lb);
	getchar();
	return 0;
}


char scanWord(char) 
{
	FILE *file;
    struct food {
        char name[20]; 
        unsigned qty; 
        float price; 
    };
    struct food shop[10];
    char i=0;
 
    file = fopen("fscanf.txt", "r");
 
    while (fscanf(file, "", 
	
	{
 
    }
}