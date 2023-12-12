#include <stdio.h>
#include <limits.h>

/*@
    ensures \result == \old(a) + 10;
*/
int add(int a ){
int i = 0 ; 
    /*@
        loop invariant 0 <= i <= 10;
        loop invariant a == \at(a , Pre) + i ; 
        loop assigns i , a ; 
        loop variant 10 - i ; 
    */
   for( i = 0 ; i< 10 ; i++){
    ++a;
   }
    //@assert i == 10;
return a ; 
}

int main(){
    int a = add(5);
    //@assert a == 15;
    
}