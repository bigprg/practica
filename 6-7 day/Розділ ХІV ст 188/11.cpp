#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main (){

       int c, m; 
        
       srand(time(0));   
        
       ofstream out("11.txt");
       
       cout<<"Input counts number ";
       cin>>c;
       
       for(int i=0; i<c; i++){
               
               out<<rand()%9;
               out<<"\n";
       
       }
       
       out.close();
       
       int a[c];
       
       ifstream in("11.txt");

       for(int i=0; i<c; i++){
                 
	     in>>a[i];
	     cout<<a[i]<<" ";

	     
	   }
	   
       in.close();
       
       

       printf("\nNum element\nn=");
       scanf("%d", &m );
       printf("\nFirst element %d", a[0]);
       printf("\nThird element %d", a[2]);
       printf("\nn  element %d", a[m-1]);
       printf("\nLast element %d", a[c-1]);
       
  
       
       getch();
       return 0;
}
