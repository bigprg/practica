#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    
    srand(time(0));
    
    int iT2=0, m;
    bool res=true;
             
             cout<<"Dimension A and B ";
             cin>>m;
             
             int A[m][m], B[m][m];
             
             cout<<"A\n--------------\n";
             
             for(int i=0; i<m; i++){
                     
                     for(int i2=0; i2<m; i2++){
                             
                             A[i][i2]= rand() % 10; 
                             cout<<A[i][i2]<<" ";
                     }
                       
                     cout<<endl;
             }
             
             cout<<"\nB\n--------------\n";
             
             for(int i=0; i<m; i++){
                     
                     for(int i2=0; i2<m; i2++){
                             
                             B[i][i2]= rand() % 10; 
                             cout<<B[i][i2]<<" ";
                     }
                       
                     cout<<endl;
             }
             
             cout<<"\n---------------------------\n";
 
             
             
             for(int kk=2; kk<6; kk++){
             
             cout<<"\nB"<<kk<<"\n-------------\n";
             
             for(int i = 1; i < m; i++){
                 for(int j = 0; j < i; j++){
                 std::swap(B[i][j], B[j][i]);}
             }
             
             for(int i=0; i<m; i++){
                     
                     for(int i2=0; i2<m; i2++){

                             cout<<B[i][i2]<<" ";
                     }
                       
                     cout<<endl;
             }
             
             for(int kk22=0; kk22<m; kk22++){
                     
                     for(int kkk2=0; kkk2<m; kkk2++){

                             if(A[kk22][kkk2]!=B[kk22][kkk2]){
                                                            
                                                            res=false;
                                                            break;
                             
                             }
                     }
             }
                     
             }
             
             if(res){
             cout<<"\n----------\ntrue";
             }else{
              cout<<"\n----------\nfalse";     
             }
             

getch();    
return 0;
}
