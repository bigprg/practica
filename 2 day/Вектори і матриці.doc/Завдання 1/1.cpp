#include <iostream>
#include <conio.h>
using namespace std;

void bubble(int *items, int count){
  register int a, b;
  register int t;

  for(a=1; a < count; ++a)
    for(b=count-1; b >= a; --b) {
      if(items[b-1] > items[b]) {
        t = items[b-1];
        items[b-1] = items[b];
        items[b] = t;
      }
    }
}

int main(){
    srand( time( 0 ) );
    
    int iT2=0, m;
             
             cout<<"Dimension A ";
             cin>>m;
             
             int A[m], D[m];
             
             for(int i=0; i<m; i++){
             
               A[i]= rand() % 10;       
               cout<<"A["<<i<<"] = "<<A[i]<<endl;
             }
             
             bubble(A, m);
             
             cout<<"-------"<<endl;
             for(int i2=0; m>i2; i2++){
                     
                     if(i2==0){
                              
                              D[iT2]=A[i2];
                              iT2++;
     
                     }else if(D[iT2-1]!=A[i2]){
                               
                               D[iT2]=A[i2];
                               iT2++;
   
                     }
                     
             }
             
             cout<<endl;
             
             for(int i3=0; iT2>i3; i3++){
             
                     cout<<"D["<<i3<<"] = "<<D[i3]<<endl;;
                     
             }

getch();    
return 0;
}
