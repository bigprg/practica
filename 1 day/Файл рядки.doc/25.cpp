#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    string st[128];
    int year[128];
    int i=-1;
    
    do{
    
       i++;
        cout<<"Lastname and Year"<<endl;
        cin>>st[i];
        if(st[i]!="end"){
                         
        cin>>year[i];
        
        }
        
        
    }while(st[i]!="end");
    
    
    
    cout<<"---------------------"<<endl;
    
    for(int i2=0; i2<i; i2++){
            
            for(int y=0; y<=10000; y++){
                    
                                if(year[i2]==y){
            
                                                    cout<<st[i2]<<" "<<year[i2]<<endl;
                               
                               }
                    
            }
            
    }

getch();    
return 0;
}
