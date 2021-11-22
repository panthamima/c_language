

/*
#include <stdio.h>

int main(void)
{
	int c, i, nwhite, nother;
	int ndigit [10];
	nwhite = nother = 0;
	
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;
	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9' )
			++ndigit [c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else 
			++nother;
	printf("numbers =");
	for (i=0; i <10; ++i)
		printf("%d", ndigit[i]);
	printf(", cymbols-razdelitely = %d, bookvi = %d\n", nwhite, nother);
	
}
*/
/*
#include <stdio.h>

int main(void)
{
	int c;
	
	while ((c = getchar()) != (EOF && '\n'))
		printf("-\n", c);
		
	return 0;
}
*/

	/*
#include <stdio.h>

int power (int m, int n);

int main ()
{
	int i;
	for(i = 0; i < 20; i++)
		printf("id: %d\t %d\t %d\t\n", i, power(2,i), power(3, i));
	
	return 0;
}

int power (int base, int n)
{
	int i, p;
	p = 1;
	for (i = 1; i <= n; ++i)
		p = p * base;
	return p;
}

*/
/*
#include <stdio.h>

int parse (int cels, int fahr);


int main(void)
{
	int i;
	for (0; 300; 20)
		celsius = 5 * (fahr - 32 / 9);
		printf("%d\t %d\n", fahr , cels );
		fahr = fahr + step;
}

int parse (int cels, int fahr)
{
	int fahr, cels;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	
	return 
}

*/
/*
#include <stdio.h>

int main(void)
{
	float fahr, cels;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	
	printf("\n\n");
	printf("\t\t\tTemperature\n");
	printf("\t\t       Fahr  Celsius\n\n");
	while (fahr <= upper) {
	cels = (5.0 / 9.0) * (fahr - 32.0);
	printf ("\t\t\t%3.0f %6.1f\n", fahr, cels);
	fahr = fahr + step;
	}
}

*/
/*
#include <stdio.h>

int main(void)
{
	float fahr, cels;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = upper;
	
	printf("\n\n");
	printf("\t\t\tTemperature\n");
	printf("\t\t       Fahr  Celsius\n\n");
	while (fahr >= lower) {
	cels = (5.0 / 9.0) * (fahr - 32.0);
	printf ("\t\t\t%3.0f %6.1f\n", fahr, cels);
	fahr = fahr - step;
	}
}

*/
/*
#include <stdio.h>

int main(void) 
{
	int c;
	int tab, space, enter;
	tab = 	space = enter = 0;
	
	while ((c = getchar()) != EOF)
		if (c == ' ')
			++space;
		else if (c == '\t')
			++tab;
		else if (c == '\n')
			++enter;
	printf("%d %d %d", space, tab, enter);
}
*/

/*
#include <stdio.h>

int main(void)
{
	int nw, c;
	nw = 0;
	
	while ((c = getchar() != EOF))
		if (c == ' ')
			++nw;
		printf("%d", nw);
}
*/
/*
#include <stdio.h>

#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getline(void);
void copy(void);

int main(void)
{
	int len;
	extern int max;
	extern char longest[];
	max = 0;
	
	while ((len = getline()) > 0)
		if (len > max) {
			max = len;
			copy();
		}
	if (max > 0) {
	printf("%s", longest);
	return 0;
}
}

int getline(void)
{
	int c, i;
	extern char line[];
	
	for (i = 0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void copy (void)
{
	int i;
	extern char line[], longest[];
	
	i =0;
	while ((longest[i] = line[i]) != '\0')
		++i;
}
*/
