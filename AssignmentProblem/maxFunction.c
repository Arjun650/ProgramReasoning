#include <stdio.h>
#include <limits.h>

/*@
    requires INT_MIN < a < INT_MAX;
    requires INT_MIN < b < INT_MAX;
    ensures (\result == a)|| (\result == b);
    ensures (a > b) ==> \result == a;
    ensures (b > a) ==> \result == b;
*/

int maximum(int a , int b ){
    if(a > b ){
        return a ; 
    }
    else{
        return b ; 
    }
}

int main(){
    int a = 3 ; 
    int b = 5 ; 
    //@ assert b > a ; 
    int max = maximum(a , b);
    //@ assert max == b ; 

}