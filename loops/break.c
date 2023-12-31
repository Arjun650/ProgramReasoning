#include <stdio.h>
#include <limits.h>

/*@
    requires INT_MIN < i < INT_MAX;
  
*/

int main(){
    int i = 0 ;     
    int h= 42 ; 
     /*@
        loop invariant 0 <= i <= 29;
        loop assigns i ; 
        loop variant 30 - i ; 
        
     */
    while(i < 30){
        ++i;
         if(i == 30)
            break;
    }
    //@assert i == 30; 
    //@assert h == 42;
}