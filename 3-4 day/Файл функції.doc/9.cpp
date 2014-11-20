#include <iostream>
#include <conio.h> 
#include <math.h>

using namespace std;

float func9 (float a, float b, float c, float d){
     float g;
     g=(pow(sqrt(a),3)+pow(sqrt(b),3)-pow(sqrt(c),3))/(pow(sqrt(d),3));
     cout<<"G = "<<g;
}

int main(){  
 
    float a, b, c, d;
    
    cout<<"Input a b c d "<<endl;
    cin>>a>>b>>c>>d;
    
    if ((a<0) || (b<0) || (c<0) || (d<0)){
    
       cout<<"Negative numbers are prohibited";
    }else{
    
       func9(a,b,c,d);        
          
    }
    
    
getch ();
}
