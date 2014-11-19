#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    char str[128];
    int c=0;
    
        cin.getline(str, 128);
        
        for(int i=0; str[i]!='\0'; i++){
        
                if(str[i]=='x'){
                c++;                
                }
        
        } 
        cout<<c;


getch();    
return 0;
}
