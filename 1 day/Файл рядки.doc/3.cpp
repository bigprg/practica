#include <iostream>
#include <conio.h>
using namespace std;

void bubble(char *items, int count){
  register int a, b;
  register char t;

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

    char st[128]="";
    char datas[128]="";
    int datac[128], i2=0;
             
             cout<<"text ";
             gets(st);
             bubble(st, strlen(st));
             
             for(int i=0; st[i]!='\0'; i++){
                     if(i==0){
                     
                              datas[i2]=st[i];
                              datac[i2]=1;
                              i2++;
     
                     }else if(datas[i2-1]!=st[i]){
                               
                               datas[i2]=st[i];
                               datac[i2]=1;
                               i2++;
   
                     }else{
                           ++datac[i2-1];

                     }
                     
             }
             
             cout<<endl;
             
             for(int i3=0; strlen(datas)>i3; i3++){
             
                     cout<<"'"<<datas[i3]<<"'"<<"\t"<<datac[i3]<<endl;
                     
             }

getch();    
return 0;
}
