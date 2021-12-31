#include <stdio.h>
#include <string.h>
#include "3_vector.h"

#define ds(s) printf("\nDEBUG--*"#s " : %s*\n", s);
#define dc(c) printf("\nDEBUG--%"#c " : %c%\n", c);
#define di(i) printf("\nDEBUG--#"#i " : %d#\n", i);

Vector* newVector(void (*print_util)(Vector*),
        int (*compare)(const void*, const void*),
        int (*compare_r)(const void*, const void*)) {
    Vector* myVector = malloc(sizeof *myVector);
    init(myVector, print_util, compare, compare_r);
    return myVector;
}

Vector* newMinimalVector(int (*comparator)(const void*, const void*),
        void(*printOne)(void*)) {
    Vector* myVector = malloc(sizeof *myVector);
    myVector -> length = 0;
    myVector -> data = NULL;
    myVector -> add = add;
    myVector -> remove = del;
    myVector -> print = print_vector;
    myVector -> printOne = printOne;
    myVector -> search = linear_search_vector;
    myVector -> sort = sort;
        
    return myVector;
}

void init(Vector *list,
        void (*print_util)(Vector*),
        int (*compare)(const void*, const void*),
        int (*compare_r)(const void*, const )
        
)