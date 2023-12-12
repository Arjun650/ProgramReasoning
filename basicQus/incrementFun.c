#include <stdio.h>
#include <limits.h>

/*@
    requires INT_MIN <= n <= INT_MAX;
    ensures \result == n+1;
    
*/

int Increment(int n){
   
    return n + 1;
}

int main(){
    int n = 20;
    //@ assert n == 20;
    int n1 = Increment(n);
    //@ assert n1 == 21;
}