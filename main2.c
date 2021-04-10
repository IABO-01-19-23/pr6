
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main(void) {

    int A_SIZE = 100, B_SIZE = 100;
    int *A = NULL, *B = NULL;
    unsigned i;
    srand(time(NULL));

     A = (int*) calloc(A_SIZE,sizeof(int));
     B = (int*) malloc(B_SIZE * sizeof(int));

     for (i = 0; i < A_SIZE; i++)
         A[i] = 1 + rand() % 100;


     for (i = 0; i < B_SIZE; i++)
         B[i] = 1 + rand() % 100;


     printf("Adress of A: %p\n", A);
     printf("Adress of B: %p\n", B);

     for (i = 0; i < A_SIZE; i++)
         printf("%d\t", A[i]);

    printf("\n");

     for (i = 0; i < B_SIZE; i++)
         printf("%d\t", B[i]);

    A_SIZE = 200;
    B_SIZE = 50;

     A = (int*) realloc(A, A_SIZE*sizeof(int));
     B = (int*) realloc(B, B_SIZE*sizeof(int));

     printf("\nAdress of A: %p", A);
     printf("\nAdress of B: %p", B);

     A_SIZE = 50;
     B_SIZE = 200;

     A = (int*) realloc(A, A_SIZE*sizeof(int));
     B = (int*) realloc(B, B_SIZE*sizeof(int));


     free(A);
     free(B);

}
