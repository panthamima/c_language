#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct node {
    int val;
    struct node* par;
    struct node* left;
    struct node* right;
    int color;
} Node;

Node* newNode(int val, Node* par) {
    Node* create = (Node*)(malloc(sizeof(Node)));
    create->val = val;
    create->par = par;
    create->left = NULL;
    create->right = NULL;
    create->color = 1;
}

int isLeaf(Node* n) {
    if(n->left == NULL && n->right == NULL) {
        return 1;
    }
    return 0;
}

Node* leftRotate(Node* node) {
    Node* parent = node->par;
    Node* grandParent = parent->par;

    parent->right = node->left;

    if(node->left != NULL) {
        node->left->par = parent;
    }
    node->par = grandParent;
    parent->par = node;
    node->left = parent;

    if(grandParent != NULL) {
        if(grandParent->right == parent) {
            grandParent->right = node;
        } else {
            grandParent->left = node;
        }
    }

    return node;
}


Node* rightRotate(Node* node) {
    Node* parent = node->par;
    Node* grandParent = parent->par;

    parent->left = node->right;

    if(node->right != NULL) {
        node->right->par = parent;
    }
    node->par = grandParent;
    parent->par = node;
    node->right = parent;

    if(grandParent != NULL) {
        if(grandParent->right == parent) {
            grandParent->right = node;
        } else {
            grandParent->left = node;
        }
    }
    return node;
}

void checkNode (Node* node) {
    if(node == NULL || node->par == NULL) {
        return;
    }

    Node* child = node;
    //If it is a black node or its parent is a black node
    if(node->color == 0 || (node->par)->color == 0){
        // Dont Do Anything
        return;
    }

    Node* parent = node->par;
    Node* grandParent = parent->par;

    if(grandParent == NULL) {
        parent->color = 0;
        return;
    }

    if(grandParent->right != NULL && (grandParent->right)->color == 1 && grandParent->left != NULL && (grandParent->left)->color == 1){
        (grandParent->right)->color = 0;
        (grandParent->left)->color = 0;
        grandParent->color = 1;
        return;
    } else {
        Node* greatGrandParent = grandParent->par;

        if(grandParent->right == parent) {
            if(parent->right == node) {
                grandParent->right = parent->left;
                if(parent->left != NULL) {
                    (grandParent->left)->par = grandParent;
                }
                parent->left = grandParent;
                grandParent->par = parent;

                parent->par = greatGrandParent;
 
                if(greatGrandParent != NULL) {
                    if(greatGrandParent->left != NULL && greatGrandParent->left == grandParent) {
                        greatGrandParent->left = parent;
                    } else {
                        greatGrandParent->right = parent;
                    }
                }

                parent->color = 0;
                grandParent->color = 1;
            } else {
                parent->left = child->right;

                if(child->right != NULL) {
                    (child->right)->par = parent;
                }
                child->right = parent;
                parent->par = child;

                grandParent->right = child->left;
                
                if(child->left != NULL) {
                    (child->left)->par = grandParent;
                }
                child->right = grandParent;
                grandParent->par = child;

                child->par = greatGrandParent;
                if(greatGrandParent != NULL) {
                    if(greatGrandParent->left != NULL && greatGrandParent->left == grandParent) {
                        greatGrandParent->left = child;
                    } else {
                        greatGrandParent->right = child;
                    }
                }
                
                child->color = 0;
                grandParent->color = 1;
            }
        } else {
            if(parent->left == node) {
                grandParent->left = parent->right;
                if(parent->right != NULL) {
                    (parent->right)->par = grandParent;
                }
                parent->right = grandParent;
                grandParent->par = parent;

                parent->par = greatGrandParent;

                if(greatGrandParent != NULL) {
                    if(greatGrandParent->left != NULL && greatGrandParent->left == grandParent) {
                        greatGrandParent->left = parent;
                    } else {
                        greatGrandParent->right = parent;
                    }
                }
                parent->color = 0;
                grandParent->color = 1;
            } else {
                parent->right = child->left;
                if(child->left != NULL) {
                    (child->right)->par = grandParent;
                }
                child->right = grandParent;
                grandParent->par = child;

                child->par = greatGrandParent;
                if(greatGrandParent != NULL) {
                    if(greatGrandParent->left != NULL && greatGrandParent->left == grandParent) {
                        greatGrandParent->left = child;
                    } else {
                        greatGrandParent->right = child;
                    }
                }
                child->color = 0;
                grandParent->color = 1;
            }
        }
    }
}
//https://github.com/AllAlgorithms/c/blob/master/algorithms/data-structures/red_black_tree.c
