#include <iostream>
#include <time.h>
#include <conio.h>

using namespace std;

struct g{
      char family[12];
      char name[12];
      char patronymic[12];
      int year;
      int month;
      int day;
}sg[9];


int main (){
    
    srand(time(0));
    int st = sizeof(sg[0].name);
    
    time_t t;
	tm *tk;
	
	time(&t);
	tk=localtime(&t);
    
    strncpy(sg[0].family, "Rudenko", st);strncpy(sg[1].family, "Bagatskiy", st);strncpy(sg[2].family, "Kovalchuk", st);strncpy(sg[3].family, "Grim", st);strncpy(sg[4].family, "Suluma", st);strncpy(sg[5].family, "Antonetc", st);strncpy(sg[6].family, "Bucenko", st);strncpy(sg[7].family, "Bliznuk", st);strncpy(sg[8].family, "Tovstopjat", st);strncpy(sg[9].family, "Lada", st); 
    strncpy(sg[0].name, "Igor", st);strncpy(sg[1].name, "Vladislav", st);strncpy(sg[2].name, "Karina", st);strncpy(sg[3].name, "Vladislav", st);strncpy(sg[4].name, "Sergey", st);strncpy(sg[5].name, "Yarik", st);strncpy(sg[6].name, "Dima", st);strncpy(sg[7].name, "Oleg", st);strncpy(sg[8].name, "Tolya", st);strncpy(sg[9].name, "Viki", st);
    strncpy(sg[0].patronymic, "O.", st);strncpy(sg[1].patronymic, "V.", st);strncpy(sg[2].patronymic, "K.", st);strncpy(sg[3].patronymic, "G.", st);strncpy(sg[4].patronymic, "S.", st);strncpy(sg[5].patronymic, "A.", st);strncpy(sg[6].patronymic, "B.", st);strncpy(sg[7].patronymic, "B.", st);strncpy(sg[8].patronymic, "T.", st);strncpy(sg[9].patronymic, "L.", st);
    
    for(int i=0; i<10; i++){
    
            sg[i].year = 1995 + rand() % 4 ;
            sg[i].month = rand () % 12;
            sg[i].day = rand () % 31;
            
            cout<<sg[i].name<<" "<<sg[i].family<<" "<<sg[i].patronymic<<endl;
            cout<<sg[i].day<<"."<<sg[i].month<<"."<<sg[i].year<<endl;
            cout<<"----------------------"<<endl<<endl;
            //Шукаємо чи є ті хто народився сьогодні
            cout<<"Birgday>"<<endl;
            if(1+tk->tm_mon == sg[i].month && tk->tm_mday == sg[i].day){
            
                                      cout<<sg[i].name<<" "<<sg[i].family<<" "<<sg[i].patronymic<<endl;
                                      cout<<sg[i].day<<"."<<sg[i].month<<"."<<sg[i].year<<endl;
                                      cout<<"----------------------"<<endl<<endl;  
            
            }
            
    }
    
    
    //cout << 1+tk->tm_mon << tk->tm_mday << endl;
    
    getch();
    return 0;
}
