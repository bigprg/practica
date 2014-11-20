#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    char st[128]="";
    int count_slv=1;
    
             cin.getline(st, 128);
             
             for(int i=0; st[i]!='.' && st[i]!='\0'; i++){
                             
                             if(st[i]==' '){
                             
                                      count_slv++;
                             
                             }
                             
             
             }
             
             cout<<count_slv<<endl;

getch();    
return 0;
}
