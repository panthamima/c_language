#include <stdio.h>

void hello() {
    int i;
    char hw[] = "1_hello wrld";

    for(i = 0; i < 12; i++) { // strlen hw = 12
        printf("%c", hw[i]);
    }
    printf("\n");
}

void test_printf_c() {
    printf("chapter_1.c:13:16: warning: unknown escape sequence: \\c\n"); // '\c' 
}

void cels_fahr_table() {
    float fahr, celsius;

    struct fc {
        int lower;
        int upper;
        int step;
    } fc;

    fc.lower = 0;
    fc.upper = 300;
    fc.step  = 20;

    fahr = fc.lower;
    while(fahr <= fc.upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf ("\t%3.0f\t%6.1f\n", fahr, celsius);
        fahr += fc.step;
    }
}

void cels_fahr_table_v2() {
    float fahr, celsius;

    struct fc {
        int lower;
        int upper;
        int step;
    } fc;

    fc.lower = 0;
    fc.upper = 300;
    fc.step  = 20;

    fahr = fc.lower;
    printf("     TEMPERATURE TABLE\n    celsius     fahr\n+------------+-------------+\n");
    while(fahr <= fc.upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf ("|    %3.0f     |   %6.1f    |\n+------------+-------------+\n", fahr, celsius);
        fahr += fc.step;
    }
}

void fahr_cels_table() {
    float fahr, celsius;

    struct fc {
        int lower;
        int upper;
        int step;
    } fc;

    fc.lower = 0;
    fc.upper = 300;
    fc.step  = 20;

    fahr = fc.lower;
    printf("     TEMPERATURE TABLE\n    fahr     celsius\n+-----------+-----------+\n");
    while(fahr <= fc.upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf ("|  %6.1f   |    %3.0f    |\n+-----------+-----------+\n", celsius, fahr);
        fahr += fc.step;
    }
}

void copy() {
    int c;
    while ((c = getchar()) != '\n') {
        putchar (c);
    }

}

int main() {
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<EX_1>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    hello();
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<EX_2>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    test_printf_c();
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<EX_3>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    cels_fahr_table();
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<EX_4>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    cels_fahr_table_v2();
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<EX_5>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    fahr_cels_table();
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<EX_6>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    copy();
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<EX_7>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

}
