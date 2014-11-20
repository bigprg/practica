#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

int main(){

    char num[48];
    int c_b, c_prb;
    
    while(1){
             
             cin>>num;
             
             c_b=strlen(num);
             
             if(c_b>3){
                      
                      char frmt[64];
                      
                      c_prb=c_b/3;
                      
                      if(c_b % 3 == 0){
                               
                               --c_prb;
                               
                      }

                      int i2=0;
                      int i3=(c_b-1);
                      for(int i=(c_b+c_prb-1); i>=0; i--){
                              ++i2;
                              if(i2 % 4 == 0){
                                    frmt[i]=' ';
                              }else{
                                    frmt[i]=num[i3];
                                    i3--; 
                              }
                      }
                      frmt[(c_b+c_prb)]='\0';
                    
                    cout<<frmt<<endl;
                      
             }else{
                   
                   cout<<num;
             
             }
    }

getch();    
return 0;
}
