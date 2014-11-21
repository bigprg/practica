#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){
           
       srand(time(0));            

       unsigned long int a[100000], b[100000], c[200000], N1, N2, k, m, q; 
                
       FILE * f1, * f2, * f3;
       f1 = fopen("58_1.txt", "w"); 
       f2 = fopen("58_2.txt", "w"); 
       f3 = fopen("58_3.txt", "w");
       
       printf("Input count numbers at first file ");
       scanf("%d", &N1);
       printf("Input count numbers at two file ");
       scanf("%d", &N2);
       printf("File #1\n");
       
       for(unsigned long int i=0; i<N1; i++){
                    
           a[i] = rand() % 9;
           fprintf(f1, "%d", a[i]);
           printf("%d ", a[i]);
       
       }
         
       printf("\nFile #2\n");
       
       for(unsigned long int i=0; i < N2; i++){ 
      
           b[i] = rand() % 9;
           fprintf(f2, "%d", b[i]);
           printf("%d ", b[i]);
       
       }  
 
       for(unsigned long int j=N1-1; j>0; j--){
           
    		for(unsigned long int i=0; i<j; i++){
                         
                    if (a[i]>a[i+1]){
                                     
        				q=a[i];
        				a[i]=a[i+1];
        				a[i+1]=q;
        				
        			}
    	        }
       }
      
       for(unsigned long int j=N2-1; j>0; j--){
                    
    		for(unsigned long int i=0; i<j; i++){
                         
                    if (b[i]>b[i+1]){
                                     
        				q=b[i];
        				b[i]=b[i+1];
        				b[i+1]=q;
        				
        			}
    	        }
       }
      
      
       printf("\n\nSort\n-----\n");
       printf("File #1\n" );
       
       for(unsigned long int i=0; i<N1; i++){
                    
           fprintf(f1, "%d", a[i]);
           printf("%d ", a[i]);
           
       }  
       
       printf("\n-------\nFile #2\n");
       
       for(unsigned long int i=0; i<N2; i++){
           
           fprintf(f2, "%d", b[i]);
           printf("%d ", b[i]);
           
       }  
	
  	      
	   for(unsigned long int i=0, h=0, j=1; i<=N1+N2-1; i++, h=h+2, j=j+2){
                    
           c[h]=a[i];
           c[j]=b[i];
           
       }
       
               
   	   for(unsigned long int j=N1+N2-1; j>0; j--){
                    
        		for(unsigned long int i=0; i<j; i++){
                             
                        if (c[i]>c[i+1]){
                                         
            				q=c[i];
            				c[i]=c[i+1];
            				c[i+1]=q;
            				
            			}
        	        }
          }
      
       printf("\n\n-----\n");
       printf("Result: File #3\n");
      
   	   for(unsigned long int i=0; i<=N1+N2-1; i++){
                    
           fprintf(f3, "%d", c[i]);
           cout<<c[i]<<" ";
           
       }

	   fclose(f1);   
       fclose(f2); 
       fclose(f3);
       
       getch ();
       return 0;
       
}
