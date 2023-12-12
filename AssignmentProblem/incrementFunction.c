#include <stdio.h>
#include <limits.h>

/*@
    requires INT_MIN < a < INT_MAX;
    ensures \result == \old(a)+ 1 ; 
*/

int increment(int a ){
    return ++a ; 
}

int main(){
    int a = 5 ; 
    int inc = increment(a);
    //@ assert inc == a + 1 ; 
}