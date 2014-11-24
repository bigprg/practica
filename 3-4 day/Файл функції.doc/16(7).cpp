#include <conio.h>   
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

float func16_7(float x1, float x2, float x3)
{
float y;
      for (float i=x1; i<=x2; i=i+x3){
                  
          y=(atan(sin(i)))/i;
          printf("%1.2f\n", y);
          
      }
}

int main(){
    
    func16_7(-3.14, 3.14, 0.4);
        
getch();
return 0;
}
