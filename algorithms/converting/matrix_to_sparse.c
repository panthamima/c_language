#include <stdio.h>
#include <stdlib.h>

#define MAX_TERMS 101

typedef struct {
    int col;
    int row;
    int value;
} term;

void create_sparse(int a[10][10], int row, int column, term c[]);

void main()
{
    int a,b,c,d,i,j,ar1[10][10],ar2[10][10];
    term x[MAX_TERMS], y[MAX_TERMS];

    printf("\nEnter the row and column size of the 1st matrix(exm. 3 3): ");
    scanf("%d %d", &a, &b);
    printf("Enter elements of 1st row wise: \n");

    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            printf("Enter next element: ");
            scanf("%d", &ar1[i][j]);
        }
    }

    printf("\nEnter the row and column size of 2nd matrix: ");
    scanf("%d %d", &c, &d);
    printf("Enter elements of 2nd matrix row wise :\n");

    for(i = 0; i < c; i++){
        for(j = 0; j < d; j++){
            printf("Enter next element: ");
            scanf("%d", &ar2[i][j]);
        }
    }

    printf("Entered matrixes are\n");
    for(i = 0; i < a; i++) {
        for(j = 0; j < b; j++) {
            printf("%d", ar1[i][j]);
        }
        printf("\n");
    }
    printf("\n and \n");
    for(i = 0; i < c; i++) {
        for (j = 0; j < d; j++) {
            printf("%d", ar2[i][j]);
        }
        printf("\n");
    }

    printf("\nConversing the first matrix to triple form\n");
    create_sparse(ar1, a,b,x);
    printf("\nConverting the second matrix to triple form\n");
    create_sparse(ar2, c,d,y);
}

void create_sparse(int a[10][10], int row, int column, term c[])
{
    int i, j, k = 0, count;
    c[0].row = row;
    c[0].col = column;

    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            if(a[i][j] !=0)
            k++;
        }
    }
    c[0].value = k;
    count = 1;
    for(i = 0 ; i < row; i++) {
        for(j = 0; j < column; j++) {
            if(a[i][j] != 0){
                c[count].row = i;
                c[count].col = j;
                c[count].value = a[i][j];
                count++;
            }
        }
    }
    printf("\nSparse form list of matrix in tiple form is\n");

    for(i = 0; i <= k; i++) {
        printf("%d\t%d\t%d\t", c[i].row, c[i].col, c[i].value);
    }
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>


int main(void)
{
    while (1) {   
        time_t t = time(NULL);
        struct tm* aTm = localtime(&t);
        
        system("cls");
        int year = aTm->tm_year-103;
        int months = aTm->tm_mon+1;
        int days = aTm->tm_yday+1;
        int hours = aTm->tm_hour+1;
        int minutes = aTm->tm_min+1;
        int seconds = aTm->tm_sec+1;

        printf("    Lived time: \n\n");
        printf("years:       %d\n", year);
        printf("months:      %d\n", 12 * year + months-3);
        printf("days:        %d \n", year * 365 + days-90);
        printf("hours:       %ld\n", year* 365 * 24 + hours);
        printf("minutes:     %ld \n", year * 365 * 24 * 60 + minutes);
        printf("seconds:     %ld\n",(year * 365 * 24 * 60 * 60 + 145) + seconds);
        printf("\n");
    
        printf("31%% [*****##########] \n");
        printf("Average lived time:\n\n");
        printf("years:       %d\n", 62);
        printf("months:      %d\n", 62 * 12);
        printf("days:        %d\n", 62 * 365);
        printf("hours:       %d\n", 62 * 365 * 24 + 23);
        printf("minutes:     %d\n", 62 * 365 * 24 * 60 + 33);
        printf("seconds:     %d\n", 62 * 365 * 24 * 60 * 60 + 178);
        
        Sleep(1000);
    }
}    
