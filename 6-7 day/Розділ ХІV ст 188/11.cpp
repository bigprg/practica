#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main (){

       int a[512], N, m; 
        
       srand(time(0));   
       
  FILE * f;
  
       f = fopen("11.txt", "w"); 
       printf("Input count numbers\nN ");
       scanf("%d", &N);
       printf("Number at file\n");
              
              for (int i = 0; i < N; i++) { 
                   a[i] = rand () % 9;
                   fprintf ( f, "%d", a[i] );
                   printf ( "%d ", a[i] );
               } 
               
       printf("\nNum element\nn=");
       scanf("%d", &m );
       printf("\nFirst element %d", a[0]);
       printf("\nThird element %d", a[2]);
       printf("\nn  element %d", a[m-1]);
       printf("\nLast element %d", a[N-1]);
       
       fclose(f);   
       
       getch ();
       return 0;
}
