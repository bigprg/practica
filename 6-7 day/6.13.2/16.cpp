#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main (){

       char a;
       int i=97, j=122, k=0, l=64, s=0, p=0, h=0;
                
       FILE * f;
       f = fopen("16.txt", "r"); 
       printf ("String\n");
       
       
       
       while(!feof(f)){
       fscanf (f, "%c", &a);
       printf ("%c", a);
              if ((a>=i) && (a<=j)){
                         
                 s++;
              
              }else{
                    
                  if (((a>=k) && (a<=l)) || (a>j)){
                              
                      h++; 
                  
                  }else{
                        
                        p++;
                  
                  }
                  
              }
       }   
       
       if(p<s){
       
          cout<<"\nEnglish characters more";
       
       }else if(p>s){
       
             cout<<"\nRus characters more";
       
       }else if(p==s){
       
              cout<<"\nThe number of characters equal";
       
       }
       
       fclose(f);   
       
       getch();
       return 0;
}
