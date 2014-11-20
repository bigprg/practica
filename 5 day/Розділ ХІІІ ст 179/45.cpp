#include <iostream>
#include <time.h>
#include <conio.h>

using namespace std;

struct g{
      char family[10];
      char name[10];
      char patronymic[16];
      int year;
      char month[20];
      int den;
}sg[19];


int main (){

    char b[15], d[15];
    int a,c;
    
    ifstream p("45.txt");

    
        for (int i = 0; i <= 4; i++)
        {
            p>>obj[i].family>>obj[i].name>>obj[i].otch>>obj[i].month>>obj[i].den>>obj[i].year;
            cout << endl << "Прізвище" << endl;
            cout << obj[i].family;
            cout << endl << "І'мя" << endl;
            cout << obj[i].name;
            cout << endl << "По-батькові" << endl;
            cout << obj[i].otch;  
            cout << endl << "Дата народження" << endl;
            cout << obj[i].year;
            cout << " ";
            cout << obj[i].month;
            cout << " ";
            cout << obj[i].den;       
        }
        cout << endl << endl << "День народження" << endl;
        for (int i = 0; i <= 4; i++)
        {
            
             a=strcmp(obj[i].month,"december");
             c=obj[i].den;
            if ((a==0) && (c==17)) 
                {
            cout << endl << "Прізвище" << endl;
            cout << obj[i].family;
            cout << endl << "І'мя" << endl;
            cout << obj[i].name;
            cout << endl << "По-батькові" << endl;
            cout << obj[i].otch;  
            cout << endl << "Дата народження" << endl;
            cout << obj[i].year;
            cout << " ";
            cout << obj[i].month;
            cout << " ";
            cout << obj[i].den;       
                }
        }
        
    
    getch();
    return 0;
}
