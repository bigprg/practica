#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

float func424(float s, float t){
      
    float f1, f2, f;
    f1=((2*t)+(2*s)-(sin(1.17)))/(5+1.17);
    f2=((2*2.2)-t-(sin(s-t)))/(5+abs((int)s-(int)t));
    f=f1+f2;
    cout<<f;

}

int main (){  

    float s, t;
    
    cout<<"Input s AND t"<<endl;
    cin>>s>>t;
    
    cout<<endl<<"--------"<<endl;
    func424(s, t);
        
getch ();
return 0;
}
