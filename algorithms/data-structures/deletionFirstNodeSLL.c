#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node *next;
};

void delete_first_node(struct node **head) {
    struct node *tmp;

    if(head == NULL || *head == NULL) return;
    
    tmp = *head;
    *head = (*head)->next;
    free(tmp);
}

void print_list(struct node *head) {
    printf("H->");

    while(head) {
        printf("%d->", head->val);
        head = head->next;
    }
    printf("|||\n");
}

void insert_front(struct node **head, int value) {
    struct node * new_node = NULL;

    new_node = (struct node *)malloc(sizeof(struct node));

    if(new_node == NULL) {
        printf("Failed to insert element. Out of memory");
    }  

    new_node->val = value;
    new_node->next = *head;
    *head = new_node;
}

void main() {
    int count = 0, i, val;
    struct node * head = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &count);

    for(i = 0; i < count; i++) {
        printf("Enter %dth element: ", i);
        scanf("%d", &val);
        insert_front(&head, val);
    }

    printf("Initial Linked List: ");
    print_list(head);
    
    delete_first_node(&head);
    
    printf("Linked List after first node deleted: ");
    print_list(head);
}