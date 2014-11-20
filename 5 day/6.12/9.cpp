#include <iostream>
#include <conio.h>

using namespace std;

struct g{
      char family[10];
      char group[3];
      int month;
      int age;
}sg[9];


int main (){

    srand(time(0));
    int st = sizeof(sg[0].family), st2 = sizeof(sg[0].group), sMonth;

    strncpy(sg[0].family, "Rudenko", st);strncpy(sg[1].family, "Bagatskiy", st);strncpy(sg[2].family, "Kovalchuk", st);strncpy(sg[3].family, "Grim", st);strncpy(sg[4].family, "Suluma", st);strncpy(sg[5].family, "Antonetc", st);strncpy(sg[6].family, "Bucenko", st);strncpy(sg[7].family, "Bliznuk", st);strncpy(sg[8].family, "Tovstopjat", st);strncpy(sg[9].family, "Lada", st);
    strncpy(sg[0].group, "ps1", st2);strncpy(sg[1].group, "od4", st2);strncpy(sg[2].group, "as6", st2);strncpy(sg[3].group, "ty1", st2);strncpy(sg[4].group, "ui2", st2);strncpy(sg[5].group, "ps2", st2);strncpy(sg[6].group, "rt4", st2);strncpy(sg[7].group, "qw1", st2);strncpy(sg[8].group, "hj4", st2);strncpy(sg[9].group, "ff2", st2);
    for(int i=0; i<10; i++){
    
            sg[i].month = 1 + rand () % 11;
            sg[i].age = 5 + rand () % 3;
            
            cout<<sg[i].family<<" "<<sg[i].group<<endl;
            cout<<"age "<<sg[i].age<<"\tmonth "<<sg[i].month<<endl;
            cout<<"----------------------"<<endl<<endl;

            
    }
    
    cout<<endl<<endl<<"Input number month ";
    cin>>sMonth;
    cout<<"----------------------"<<endl<<endl;
    
    for(int i=0; i<10; i++){
            
            if(sg[i].month==sMonth){
            
            cout<<sg[i].family<<" "<<sg[i].group<<endl;
            cout<<"age "<<sg[i].age<<"\tmonth "<<sg[i].month<<endl;
            cout<<"----------------------"<<endl<<endl;
            
            }
            
    }
    
    getch();
    return 0;
}
