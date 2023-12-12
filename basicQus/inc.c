#include <stdio.h>
#include <limits.h>

/*@
    requires INT_MIN <= a <= INT_MAX;
    ensures \result > a;
    ensures \result == a + 1;
*/

int incre(int a){
   int p = a+1;
    return p;
}

int main(){
    int n = 10;
    //@ assert n == 10;
    int res = incre(n);
    
}
