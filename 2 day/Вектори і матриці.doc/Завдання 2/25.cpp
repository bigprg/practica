#include <iostream>
#include <conio.h>
using namespace std;


int main(){
    
    srand(time(0));
    
    int m, number_row=-1, number_column=-1;
    bool tmp_row_r=true, tmp_column_r=false;
             
             while(1){
             cout<<"Dimension A ";
             cin>>m;
             cout<<endl<<"-----------"<<endl;
             int K[m][m];
             
             for(int i=0; i<m; i++){
                     
                     for(int i2=0; i2<m; i2++){
                             
                             K[i][i2]= rand() % 2; 
                             cout<<K[i][i2]<<" ";
                     }
                       
                     cout<<endl;
             }
             
             for(int i3=0; i3<m; i3++){
                     if(!tmp_row_r){
                                    tmp_row_r=true;
                                    //cout<<"*";
                                    }
                     for(int i4=0; i4<m && tmp_row_r; i4++){
                             
                            // cout<<"ROW "<<i3<<" "<<i4;
                             
                             if(K[i3][i4]==1){  
                                              //cout<<" false" ;
                                          tmp_row_r=false;
                             }else{
                             
                                   number_row=(i3+1);
                                   
                             }
                             //cout<<endl;
                     
                     }
                     
                     if(tmp_row_r){break;}
                     
                     if(!tmp_column_r){
                     tmp_column_r=true;
                     //cout<<"**";
                     }
                      for(int i5=0; i5<m && tmp_column_r; i5++){
                             
                             //cout<<"COL "<<i5<<" "<<i3;
                             if(K[i5][i3]==1){
                                              
                                            //cout<<" false"  ;
                                          tmp_column_r=false;
                             }else{
                             
                                   number_column=(i3+1);
                                   
                             }
                             
                             
                             //cout<<endl;
                             
                     }
                     
                     if(tmp_column_r){break;}
                     
                     //cout<<endl;
             }
             cout<<endl<<"-----------"<<endl;
             if(tmp_column_r || tmp_row_r){
             
                             if(tmp_column_r){
                             
                                  cout<<"Column "<<number_column;
                             
                             }else{
                             
                                   cout<<"Row "<<number_row;
                                   
                             }
                             
             }else{
             
                   cout<<"Not found";
                   
             }
             cout<<endl;
             number_row=-1; number_column=-1;
             tmp_row_r=true; tmp_column_r=false;
             }
             
getch();    
return 0;
}
