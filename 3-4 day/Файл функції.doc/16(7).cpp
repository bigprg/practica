#include <conio.h>   
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

float func16_7(float x1)
{
float y;
      for (float i=-3.14; i<=3.14; i=i+0.5){
                  
          y=(atan(sin(i)))/i;
          printf("%1.2f\n", y);
          
      }
}

int main(){
    
    func16_7(-3.14);
        
getch (); 
}
