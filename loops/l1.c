#include <stdio.h>
#include <limits.h>

int main(){

int i = 0 ;
int h = 42 ; 
/*@
    loop invariant 0 <= i <= 30 ; 
    loop assigns i , h ; 
    loop variant 30 - i ; 
*/

for(i = 0 ; i< 30 ; i++){
    ++h;
}

//@assert i == 30;


}