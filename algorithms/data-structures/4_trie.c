#include <stdio.h>
#include <stdlib.h>

#define CHAR_SIZE 26

struct Trie {
    int isLeaf;
    struct Trie* character[CHAR_SIZE];
};

struct Trie* getNewTrieNode() {
    struct Trie* node = (struct Trie*)malloc(sizeof(struct Trie));
    node->isLeaf = 0;

    for(int i = 0; i < CHAR_SIZE; i++) {
        node->character[i] = NULL;
    }
    return node;
}

void insert(struct Trie *head, char* str) {
    struct Trie* curr = head;
    while (*str) {
        if(curr->character[*str - 'a'] == NULL) {
            curr->character[*str - 'a'] = getNewTrieNode();
        }
        curr = curr->character[*str - 'a'];
        
        str++;
    }
    curr->isLeaf = 1;
}

int search(struct Trie* head, char* str) {
    if(head == NULL) {
        return 0;
    }

    struct Trie* curr = head;

    while(*str) {
        curr = curr->character[*str - 'a'];
        if(curr == NULL) {
            return 0;
        }

        str++;
    }
    return curr->isLeaf;
}

int haveChildren(struct Trie* curr) {
    for(int i = 0; i < CHAR_SIZE; i++) {
        if(curr->character[i]) {
            return 1;
        }
    }
    return 0;
}

int deletion(struct Trie **curr, char* str) {
    if(*curr == NULL) {
        return 0;
    }

    if(*str) {
        if(*curr != NULL && (*curr)->character[*str - 'a'] != NULL &&
        deletion(&((*curr)->character[*str - 'a']), str + 1) && (*curr)-> isLeaf == 0) {
            if(!haveChildren(*curr)) {
                free(*curr);
                (*curr) = NULL;
                return 1;
            }
            else {
                return 0;
            }
        }
    }

    if(*str == '\0' && (*curr)->isLeaf) {
        if(!haveChildren(*curr)) {
            free(*curr);
            (*curr) = NULL;
            return 1;
        } else {
            (*curr)->isLeaf = 0;
            return 0;
        }
    }

    return 0;
}

int main() {
    struct Trie* head = getNewTrieNode();
        printf("Inserting hello\n");
        insert(head, "hello");
        printf("Searching for hello\n");
        (search(head,"hello")==1?printf("hello is found\n\n"):printf("hello is not found\n\n"));

        printf("----------------------------------\n");

        printf("Inserting helloworld\n");
        insert(head, "helloworld");
        printf("Searching for helloworld\n");
        (search(head,"helloworld")==1?printf("helloworld is found\n\n"):printf("helloworld is not found\n\n"));

        printf("---------------------------------\n");


        printf("Searching for avigyan\n");
        (search(head,"avigyan")==1?printf("avigyan is found\n\n"):printf("avigyan is not found\n\n"));

        printf("----------------------------------\n");


        printf("Deleting hello\n");
        deletion(&head, "hello");
        printf("Searching for hello\n");
        (search(head,"hello")==1?printf("hello is found\n"):printf("hello is not found\n"));
        printf("Searching for helloworld\n");
        (search(head,"helloworld")==1?printf("helloworld is found\n"):printf("helloworld is not found\n"));

    return 0;
}