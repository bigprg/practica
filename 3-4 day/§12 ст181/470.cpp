#include <iostream>
#include <conio.h>  
#include <math.h>

using namespace std;

char fTab(char* a){ 
    

    int t=9,p;
    cout<<endl<<"Space size ";
    cin>>p; 
       for (int i=0; i<=strlen(a); i++)
        {
                if (a[i]==t)
                {
                       for (int j=0; j<p; j++)
                       {
                       cout<<" ";
                       }
                }
                else
                {
                    cout<<a[i];}
                }     
}
int main (){
    
    cout<<"Input row and use TAB"<<endl;
    char a[255]; 
    gets(a);
    fTab(a);
        
getch ();
return 0;
}
