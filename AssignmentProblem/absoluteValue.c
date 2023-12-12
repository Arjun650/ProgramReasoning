#include <stdio.h>
#include <limits.h>
/*@
    requires INT_MIN < x < INT_MAX;
    ensures \result >= 0 ; 
    ensures ( x >= 0 ) ==> \result == x ; 
    ensures ( x < 0 ) ==> \result == -x ;  
*/

int absolute(int x){
    if( x < 0 ){
        return -x ; 
    }
    else
        return x ; 
}

int main(){
    int a = -10 ; 
    int b = 200;
        //@ assert a == -10 ; 
        //@ assert b == 200 ; 
    int abs = absolute(a);
        //@ assert abs == -a ;
    int abs1 = absolute(b);
        //@ assert abs1 == b ; 
}