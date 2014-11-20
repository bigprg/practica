#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>

using namespace std;

double f1 (double n){
       
       double y;
       y=(n+sin(n))/3;
       return y;
}

double f2 (double n1, double n2){
       
       double y;
       y=(n1+sin(n1))/(sin(n2)+n2);
       return y;
       
}

double f3 (double n1, double n2){
       
       double y;
       y=(n1+sin(n2))/(n2+sin(n1));
       return y;
       
}

double f4 (double n1, double n2){
       
       double y;
       y=(sin(n1)+n2)/(sin(n2)+n1);
       return y;

}


int main ()
{

    double n1, n2, n3, n4, n5, n6, a, b, c, g;
    
    cout<<"Input 6 n"<<endl;
    cin>>n1>>n2>>n3>>n4>>n5>>n6;
    
    a= f1(n1) + f1(n2) + f1(n3);
    cout<<"a="<<a<<endl;
    
    b=f2(n1,n2) + f2(n3,n4) + f2(n5,n6);
    cout<<"b="<<b<<endl;
    
    c=f3(n1,n2) + f3(n3,n4) + f3(n5,n6);
    cout<<"c="<<c<<endl;
    
    g=f4(n1,n2) + f4(n3,n4) + f4(n5,n6);
    cout<<"g="<<g<<endl;

    getch ();
    return 0;
}
