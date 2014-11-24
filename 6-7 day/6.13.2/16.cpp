#include <iostream>
#include <conio.h>
#include <fstream>
#include <locale.h>

using namespace std;

int main (){
         
       setlocale(LC_ALL,"Russian");

       int i=97, j=122, k=0, l=64, s=0, p=0, h=0;
       
       char text[256], a;
       
       ofstream out("16.txt");
       
       cout<<"Input string\n";
       
       out<<gets(text);
       
       out.close();
       
       ifstream in("16.txt");

       while(!in.eof()){
                 
	     in>>a;
	     //cout<<a<<" ";
         
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
	   
       in.close();
       
       if(p<s){
       
          cout<<"\nEnglish characters more";
       
       }else if(p>s){
       
             cout<<"\nRus characters more";
       
       }else if(p==s){
       
              cout<<"\nThe number of characters equal";
       
       }
       
       getch();
       return 0;
}
