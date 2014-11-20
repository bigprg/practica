#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main (){
         
       srand(time(0));
         
       int a[1000], N, r; 
                
       FILE * f;
       f = fopen ("14.txt", "w"); 
       
       printf("Input count numbers\nN ");
       scanf("%d", &N);
       
       printf ("Numbers at file\n");
       
       for(int i=0; i<N; i++){
           
           a[i] = rand() % 9;
           fprintf (f, "%d", a[i]);
           printf ("%d ", a[i]);
       
       }   
       
       r=a[0]-a[N-1];
       printf("\nDifference %d", r);
       
       fclose(f);   
       
       getch();
       return 0;
}
