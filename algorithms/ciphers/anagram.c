#include <stdio.h>

int main() {
    char a[100], b[100];

    printf("enter a string: ");
    gets(a);

    printf("enter a string: ");
    gets(b);

    if(check_anagram(a, b) == 1) {
        printf("anagram");
    } else {
        printf("not anagram");
    }

}
int check_anagram(char a[], char b[]) {
    int first[26] = {0}, second[26] = {0}, c = 0;

    while(a[c] != '\0') {
        first[a[c] - 'a']++;
        c++;
    }

    while(b[c] != '\0') {
        second[b[c] - 'a']++;
        c++;
    }

    for(c = 0; c < 26; c++) {
        if(first[c] != second[c]) {
            return 0;
        }
    }
}
