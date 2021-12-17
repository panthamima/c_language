#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* encryptRailFence(char* text, int key){
    char rail[key][strlen(text)];
    int i=0,j=0,k=0;
    int dir_down = 0;
    int row = 0, col = 0;
    char* result = (char *)malloc(sizeof(char)* strlen(text));
    for (i=0; i < key; i++)
        for (j = 0; j < strlen(text); j++)
            rail[i][j] = '\n';
            
    for (i=0; i < strlen(text); i++) {
        if (row == 0 || row == key-1)
            dir_down = !dir_down;
        rail[row][col++] = text[i];
        dir_down?row++ : row--; 
    }
    for (i=0; i < key; i++)
        for (j=0; j < strlen(text); j++)
            if (rail[i][j]!='\n') {
                result[k] = rail[i][j];
                k++;
            }
     return result; 
}

char* decryptRailFence(char* cipher, int key) {
    char rail[key][strlen(cipher)];
    int i=0,j=0,k=0;
    int dir_down = 0;
    int row = 0, col = 0;
    int index = 0; 
    char* result = (char *)malloc(sizeof(char)* strlen(cipher)); 

    for (i=0; i < key; i++)
        for (j=0; j < strlen(cipher); j++)
            rail[i][j] = '\n';
    
    for (i=0; i < strlen(cipher); i++) { 
        if (row == 0) 
            dir_down = 1; 
        if (row == key-1) 
            dir_down = 0; 
        rail[row][col++] = '*';
        dir_down?row++ : row--; 
    } 
    for (i=0; i<key; i++) 
        for (j=0; j<strlen(cipher); j++) 
            if (rail[i][j] == '*' && index<strlen(cipher)) 
                rail[i][j] = cipher[index++];

    row = 0, col = 0; 
    for (i=0; i< strlen(cipher); i++) {
        if (row == 0) 
            dir_down = 1; 
        if (row == key-1)
            dir_down = 0; 
        if (rail[row][col] != '*') {
            result[k] = rail[row][col++];
            k++;
        }
        dir_down?row++: row--; 
    } 
    return result; 
}

int main() {
    char plain_text[50];
    char* cipher_text = NULL;
    int key;

    printf("Enter the plain text : ");
    fgets(plain_text,50,stdin);
    printf("Enter the key : ");
    scanf("%d",&key);

    cipher_text = encryptRailFence(plain_text, key);

    printf("Cipher text : %s\n",cipher_text);
    printf("Decryption of the same cipher text : %s\n",decryptRailFence(cipher_text,key)); 
    return 0;
}