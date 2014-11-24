#include <iostream>
#include <conio.h>
#include <fstream>
#include <time.h>

using namespace std;

int main (){
         
       srand(time(0));
         
       int c, r, t; 
       
       ofstream out("14.txt");
       
       cout<<"Input counts number ";
       cin>>c;
       
       for(int i=0; i<c; i++){
               
               out<<rand()%9;
               out<<"\n";
       
       }
       
       out.close();
       
       int a[c];
       
       ifstream in("14.txt");

       for(int i=0; i<c; i++){
                 
	     in>>a[i];
	     cout<<a[i]<<" ";

	     
	   }
	   
       in.close();
       
       r=a[0]-a[c-1];
       
       cout<<"\nDifference "<<r;
       
       getch();
       return 0;
}
