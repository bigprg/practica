#include <iostream>
#include <conio.h>

using namespace std;

struct g{
       
       char city[16];
       char country[16];
       
}sg[25];


int main(){
        
        int st = sizeof(sg[0].city);
        string type;
    
    cout<<"mode(auto | manually): ";
    cin>>type;
    
    if(type=="auto"){
                     
        strncpy(sg[0].city, "Rome", st);strncpy(sg[1].city, "Guatemala", st);strncpy(sg[2].city, "Guatemala", st);strncpy(sg[3].city, "Guatemala", st);strncpy(sg[4].city, "Milan", st);strncpy(sg[5].city, "Guatemala", st);strncpy(sg[6].city, "Guatemala", st);strncpy(sg[7].city, "Guatemala", st);strncpy(sg[8].city, "Guatemala", st);strncpy(sg[9].city, "Guatemala", st);strncpy(sg[10].city, "Naples", st);strncpy(sg[11].city, "Guatemala", st);strncpy(sg[12].city, "Guatemala", st);strncpy(sg[13].city, "Turin", st);strncpy(sg[14].city, "Guatemala", st);strncpy(sg[15].city, "Guatemala", st);strncpy(sg[16].city, "Guatemala", st);strncpy(sg[17].city, "Palermo", st);strncpy(sg[18].city, "Guatemala", st);strncpy(sg[19].city, "Guatemala", st);strncpy(sg[20].city, "Guatemala", st);strncpy(sg[21].city, "Guatemala", st);strncpy(sg[22].city, "Genoa", st);strncpy(sg[23].city, "Guatemala", st);strncpy(sg[24].city, "Guatemala", st);strncpy(sg[25].city, "Bologna", st);
        strncpy(sg[0].country, "Italy", st);strncpy(sg[1].country, "Guatemala", st);strncpy(sg[2].country, "Guatemala", st);strncpy(sg[3].country, "Guatemala", st);strncpy(sg[4].country, "Italy", st);strncpy(sg[5].country, "Guatemala", st);strncpy(sg[6].country, "Guatemala", st);strncpy(sg[7].country, "Guatemala", st);strncpy(sg[8].country, "Guatemala", st);strncpy(sg[9].country, "Guatemala", st);strncpy(sg[10].country, "Italy", st);strncpy(sg[11].country, "Guatemala", st);strncpy(sg[12].country, "Guatemala", st);strncpy(sg[13].country, "Italy", st);strncpy(sg[14].country, "Guatemala", st);strncpy(sg[15].country, "Guatemala", st);strncpy(sg[16].country, "Guatemala", st);strncpy(sg[17].country, "Italy", st);strncpy(sg[18].country, "Guatemala", st);strncpy(sg[19].country, "Guatemala", st);strncpy(sg[20].country, "Guatemala", st);strncpy(sg[21].country, "Guatemala", st);strncpy(sg[22].country, "Italy", st);strncpy(sg[23].country, "Guatemala", st);strncpy(sg[24].country, "Guatemala", st);strncpy(sg[25].country, "Italy", st);
        
    }else{
    
          for(int i=0; i<25; i++){
        
                  cout<<"City Country"<<endl;
                  cin>>sg[i].city>>sg[i].country;
                
          } 
          
    }
        cout<<"(search Italy...)"<<endl;

        
        cout<<"\n-------------------------\n";
        
        for (int i = 0; i <= 25; i++){

              if (strcmp(sg[i].country, "Italy")==0){
                                        
                    cout<< "City "<<sg[i].city<<endl;
                    cout<<"Country "<<sg[i].country<<endl<<"---"<<endl;
                    
              }
        }

    getch ();
    return 0;
}
