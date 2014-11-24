#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main(){

       int  c, k, vr; 
       
       srand(time(0));
       
       ofstream out("22.txt");
       
       cout<<"Input counts number ";
       cin>>c;
       
       for(int i=0; i<c; i++){
               
               out<<rand()%9;
               out<<"\n";
       
       }
       
       out.close();
       
       int a[c];
       
       ifstream in("22.txt");

       for(int i=0; i<c; i++){
                 
	     in>>a[i];
	     cout<<a[i]<<" ";

	     
	   }
	   
	   in.close();
	   
	   ofstream out2("22.txt");
	   
       cout<<endl<<"Number of replace ";
       cin>>k;
       
       cout<<"Value replace ";
       cin>>vr;
       
       printf("\nReplace\n----------------\n");       
       
       for (int i=0; i<c; i++){
           
           
           if ((i==0) || (i==4) || (i==k-1) || (i==c-1)){
                      
                 cout<<vr<<" ";
                 out2<<vr;
           
           }else{
                 
                 cout<<a[i]<<" ";
                 out<<a[i];
                 
           }
       
       }
       
       out2.close();   
       
       getch ();
       return 0;
}

