#include <stdio.h>
#include <limits.h>

/*@
    ensures \result == \old(a) + 10;
*/

int add(int a){
  
    int i = 0;
    /*@
        loop invariant 0 <= i <= 10;
        loop invariant a == \at(a , Pre) + i;
        loop assigns i ;
        loop assigns a;
        loop variant 10 - i;
    */

    for(int i = 0 ; i< 10 ; ++i){
            ++a;
    }

    return a;
   
   //@assert i == 10;
   //@assert a == 40;
}

int main(){
    add(30);
}