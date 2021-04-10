#include <stdlib.h>
#include <time.h>

 int main(void) {

    int **ar;
    srand(time(NULL));
     int i,j, n = 1 + rand() % 10,*mas;


     ar = (int**)malloc(n*sizeof(int*));

     mas = (int*)malloc(n*sizeof(int)); // массив кол-ва элементов строк

    //выделяем память для указателей на строки

    for(i = 0; i<n; i++) {

         mas[i] = 1 + rand() % 5;

         ar[i] = (int*)malloc(mas[i]*sizeof(int));



         }


     for(i = 0; i<n; i++) {

         for(j = 0; j<mas[i]; j++) {

            ar[i][j] = 1 + rand() % 100;
            }

       }



     // Вывод элементов массива

     for(i=0; i<n; i++) {

        for(j=0; j<mas[i]; j++) {

             printf("%d\t ", ar[i][j]);

             }

         printf("\n");

        free(ar[i]);

         }

     free(ar);

    return 0;

}
