#include <stdio.h>
#include <limits.h>

/*@
    requires 10000 > a ;
    requires 10000 > b  ;

    ensures ( \result == a-b ) || ( \result == b-a );
    ensures a > b ==> \result == (a - b);
    ensures b > a ==> \result == (b - a);
    
*/

int distance(int a , int b){
    if(a > b )
        return a - b;
    else
        return b - a;
}

int main(){
    distance (4.5 , 6);
}