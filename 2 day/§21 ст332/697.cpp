#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main() {
    
int rK, rM, rL;
    
cout<<"Input k ";
cin>>rK;
    
cout<<"Input m ";
cin>>rM;

cout<<"Input l ";
cin>>rL;   
    
int a[rK][rM], b[rM][rL];

int i,j,l, n1, n2;

int s(0);

cout<<"A matrix:"<<endl;
for(i=0; i<rK; i++) {
for(j=0; j<rM; j++) {
cin>>a[i][j];
}
cout<<"--"<<endl;
}

cout<<"B matrix: "<<endl; 
for(i=0; i<rM; i++) {
for(j=0; j<rL; j++) {
cin>>b[i][j];
}
cout<<"--"<<endl;
}

if(rK>rM){

          n1=rK;
          
}else{

      n1=rM;

}

if(rM>rL){

          n2=rM;
          
}else{

      n2=rL;

}

int c[n1][n2];

for(i=0; i<n1; i++) {
  for(l=0; l<n1; l++) {
    s = 0;
      for(j=0; j<n2; j++) {
        s += a[i][j]*b[j][l];
      }
    c[i][l] = s;
  }
}

cout<<"rezult:\n--"<<endl;

for(i=0; i<n1; i++) {
for(j=0; j<n2; j++) {
cout<<c[i][j]<<" ";
}
cout<<endl;
}
cout<<"--"<<endl;
getch();
return 0;
}
