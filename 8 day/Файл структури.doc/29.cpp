#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

struct cont{
       
       string lastname;
       string name;
       string middle_name;
       float GPA_certigicate;
       int score_lauguage;
       int assessment_specialty;
       
};

class gdb{

      public:
             
              void select(string type, int id=0){
                   
                   char a[256];
                   
                   if(type=="ball"){
                        
                        float ball;
                        cont cont[countall()];
                        
                        cout<<"format n.n: ";
                        cin>>ball;
                        
                        ifstream in("29db");
                        
                        for(int i=0; !in.eof(); i++){
                               
                             in.get(a[i]);
                             if(a[i]==' '){
                             
                                  cout<<"\n";
                                  
                                  if(row==0){
                                  
                                       cout<<"Id: ";
                                       row++;
                                             
                                  }else if(row==1){
                                  
                                        cout<<"Last name: ";
                                        row++;
                                        
                                  }else if(row==2){
                                  
                                        cout<<"Name: ";
                                        row++;
                                        
                                  }else if(row==3){
                                  
                                        cout<<"Middle name: ";
                                        row++;
                                        
                                  }else if(row==4){
                                  
                                        cout<<"GPA certigicate: ";
                                        row++;
                                        
                                  }else if(row==5){
                                  
                                        cout<<"Score lauguage: ";
                                        row++;
                                        
                                  }else if(row==6){
                                  
                                        cout<<"Assessment specialty: ";
                                        row++;
                                        
                                  }
                             
                             }else if(a[i]=='|'){
                             
                                   cout<<"\n----------------------------";
                                   row=0;
                                   
                             }else{
                             
                                  cout<<a[i]<<"";       
                                   
                             }
                       
                       }
                        
                        in.close();
                                    
                   }else{

                       int row=0;
                   
                       ifstream in("29db");
                       
                       for(int i=0; !in.eof(); i++){
                               
                             in.get(a[i]);
                             if(a[i]==' '){
                             
                                  cout<<"\n";
                                  
                                  if(row==0){
                                  
                                       cout<<"Id: ";
                                       row++;
                                             
                                  }else if(row==1){
                                  
                                        cout<<"Last name: ";
                                        row++;
                                        
                                  }else if(row==2){
                                  
                                        cout<<"Name: ";
                                        row++;
                                        
                                  }else if(row==3){
                                  
                                        cout<<"Middle name: ";
                                        row++;
                                        
                                  }else if(row==4){
                                  
                                        cout<<"GPA certigicate: ";
                                        row++;
                                        
                                  }else if(row==5){
                                  
                                        cout<<"Score lauguage: ";
                                        row++;
                                        
                                  }else if(row==6){
                                  
                                        cout<<"Assessment specialty: ";
                                        row++;
                                        
                                  }
                             
                             }else if(a[i]=='|'){
                             
                                   cout<<"\n----------------------------";
                                   row=0;
                                   
                             }else{
                             
                                  cout<<a[i]<<"";       
                                   
                             }
                       
                       }
                       
                       in.close();
                                   
                   }   
                   
              }
             
              void insert(){
                   
                   cont cont;
                   int next_id;
                   
                   ifstream in("29db_set");
                   
                   in>>next_id;
                   
                   in.close();
                   
                   cout<<"Id "<<next_id<<"\n";
                   cout<<"Lastname ";
                   cin>>cont.lastname;
                   cout<<"Name ";
                   cin>>cont.name;
                   cout<<"Middle name ";
                   cin>>cont.middle_name;
                   cout<<"GPA certigicate (format n.n) ";
                   cin>>cont.GPA_certigicate;
                   cout<<"Score lauguage (format n) ";
                   cin>>cont.score_lauguage;
                   cout<<"Assessment specialty (format n) ";
                   cin>>cont.assessment_specialty;
                   
                   ofstream out("29db", ios::app|ios::out|ios::ate);
                   
                   out<<" "<<next_id<<" "<<cont.lastname<<" "<<cont.name<<" "<<cont.middle_name<<" "<<cont.GPA_certigicate<<" "<<cont.score_lauguage<<" "<<cont.assessment_specialty<<"|";
                   
                   out.close();
                   
                   ofstream out2("29db_set", ios::out);
                   
                   out2<<(next_id+1);
                   
                   out2.close();
                   
              }
              
              int countall(){
                             
                        int count=0;
                        char c;
                             
                             ifstream in("29db");
                             
                             for(int i=0; !in.eof(); i++){
                                     in>>c;
                                     if(c=='|')count++;
                             }
                             
                             in.close();
                             
                             if(count>0)count++;
                             
                        return count;
                   
                   }
              
              void op(string t){
              
                   if(t=="i"){
                   
                              cout<<"Insert\n";
                              insert();
                              
                   }else if(t=="sa"){
                   
                               cout<<"Select all\n";
                               select("all");
                         
                   }else if(t=="ball"){
                   
                               cout<<"Select ball\n";
                               select("ball");  
                         
                   }
              
              }   
      
};

int main(){
    
    gdb gdb;
    
    string command;
    
    cout<<"Data base 29\n############"<<endl;
    
    cout<<"Operation\n\n";
    cout<<"SELECT ALL = sa\n";
    cout<<"SELECT BALL = ball\n";
    cout<<"INSERT = i\n";
    
    
    cout<<"##################\n";
    
    cin>>command;
             
    gdb.op(command);
    
    //cin>>insert.lastname;
    //gdb.insert(insert);
    
    
    
    //[lastname] [name] [middle name] [GPA certigicate] [score language] [assessment specialty]
    
    getch();
    return 0;
}
