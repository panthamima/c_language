// char* caesarCipher(int key, char *text, char opt) {
//   char alphabet[26];
//   int offset = 65;
//   int textSize = strlen(text);
//   int i = 0;
//   char *outputText = malloc(textSize+1);

//   // create alphabet
//   for (i = 0; i < 26; i++) {
//     alphabet[i] = offset + i;
//   }
#include <stdio.h>

int main () { 
    FILE *file;
    struct food {
        char name[20]; 
        unsigned qty; 
        float price; 
    };
    struct food shop[10];
    char i=0;
 
    file = fopen("fscanf.txt", "r");
 
    while (fscanf(file, "%s%u%f", 
        shop[i].name, &(shop[i].qty), 
        &(shop[i].price)) != EOF) {
 
        printf("%s %u %.2f\n", shop[i].name, 
               shop[i].qty, shop[i].price); 
        i++;
    }
}