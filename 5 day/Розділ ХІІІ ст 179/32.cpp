/*Для заповнення файлу bin
 *\
 *\int st = sizeof(sg[0].model)
 *\
 *        strncpy(sg[0].model, "Datsun", st);strncpy(sg[1].model, "Audi", st);strncpy(sg[2].model, "Ford", st);strncpy(sg[3].model, "Fiat", st);strncpy(sg[4].model, "Suzuki", st);strncpy(sg[5].model, "Acura", st);strncpy(sg[6].model, "Smart", st);strncpy(sg[7].model, "Luxus", st);strncpy(sg[8].model, "Opel", st);strncpy(sg[9].model, "Lada", st);strncpy(sg[10].model, "Volkswagen", st);strncpy(sg[11].model, "Merseges-Benz", st);strncpy(sg[12].model, "BMW", st);strncpy(sg[13].model, "JAC", st);strncpy(sg[14].model, "FAW", st);

        ofstream f("9.bin", ios::binary|ios::app|ios::out|ios::ate);

            for(int i=0; i<25; i++){
            		sg[i].type = rand() % 2;
            	    sg[i].price = rand() % 100000 + 9000;
                    f.write((char*)&sg[i],sizeof sg[i]);

                }

        f.close();


 *
 * */

#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct g{

      char model[12];
      int type;
      int price;

}sg[15];


int main(){

        srand(time(0));

        int mean=0, count_m=0;
        string type;

    cout<<"mode(auto | manually): ";
    cin>>type;

    if(type=="auto"){

        ifstream in("9.bin",ios::binary|ios::in);

        for(int h=0; h<15; h++){

        	in.read((char*)&sg[h],sizeof sg[h]);

        }

        in.close();

     }else{


        for(int i=0; i<15; i++){

                cout<<"Model Type(big=0|small=1) Price"<<endl;
                cin>>sg[i].model>>sg[i].type>>sg[i].price;

        }

     }

        for(int i=0; i<15; i++){

                cout<<"Model\t"<<sg[i].model<<endl;
                cout<<"Price\t"<<sg[i].price<<"$"<<endl;
                cout<<"Type\t";
                if(sg[i].type==1){

                      cout<<"Small";
                      mean=mean+sg[i].price;
                      count_m++;


                }else{

                      cout<<"Big";

                }

                cout<<endl<<"--------------"<<endl;

        }

        cout<<"Mean = "<<(mean/count_m)<<"$";

    getch();
    return 0;
}

