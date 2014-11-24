#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

long double p(double a, double b, double h){
       long double p;
       p=a+b+2*(sqrt(((pow(h,2))-(pow((a-b),2)))/4));
       return p;
}

long double s(double a, double b, double h){
       long double s;
       s=((a+b)/2)*h;
       return s;
}

int main (){  

    long double a1, b1, h1, a2, b2, h2, pt1,pt2,st1,st2;
    
    cout<<"Enter basics first trapezoid and its height"<<endl;
    cin>>a1>>b1>>h1;
    
    cout<<"Enter foundations second trapezoid and its height"<<endl;
    cin>>a2>>b2>>h2;
    
    if ((a1<=0) || (b1<=0) || (h1<=0) || (a2<=0) || (b2<=0) || (h2<=0)){
        cout<<"A negative number is forbidden"<<endl;        
  	}else{
        pt1=p(a1, b1, h1);
        pt2=p(a2, b2, h2);
        st1=s(a1, b1, h1);
        st2=s(a2,b2,h2);
        
        cout<<endl<<"P1 = "<<pt1<<"\nP2 = "<<pt2<<"\nSum P = "<<pt1+pt2<<endl;
        
        cout<<"S1 = "<<st1<<"\nS2 ="<<st2<<"\nSUm A = "<<st1+st2;
    }  
    
getch ();
return 0;
}
