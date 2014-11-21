#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){

       int a[512], N, k, m; 
       
       srand(time(0));
         
       FILE * f;
       f = fopen("22.txt", "w"); 
       printf("Input count number\nN ");
       scanf ("%d", &N);
       printf("Numbers at file\n");
       
       for(int i = 0; i < N; i++){
               
           a[i] = rand () % 9;
           fprintf(f, "%d", a[i]);
           printf("%d ", a[i]);
       
       }   
       
      
       printf("\nNumber of replacement\nk ");
       scanf("%d", &k );
       printf("\nValue\nm ");
       scanf("%d", &m);
       
       printf("\nReplace\n----------------\n");       
       
       for (int i=0; i<N; i++){
           
           if ((i==0) || (i==4) || (i==k-1) || (i==N-1)){
                      
                 printf ("%d ", m);
                 fprintf(f, "%d", m );
           
           }else{
                 
                 printf ("%d ", a[i]);
                 fprintf(f, "%d", a[i]);
                 
           }
       
       }
       
       fclose (f);   
       
       getch ();
       return 0;
}

