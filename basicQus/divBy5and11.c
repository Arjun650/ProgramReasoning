#include <stdio.h>
#include <limits.h>

/*@
    requires INT_MIN < n < INT_MAX;
    ensures ( \result == 'd' ) || ( \result == 'n' );
    ensures n % 5 == 0  && n % 11 == 0 ==> \result == 'd';
    ensures n % 5 != 0 && n % 11 != 0 ==> \result == 'n'; 
*/

char divi(int n){
    if(n%5 == 0 && n%11 ==  0 )
    return 'd';
    else
    return 'n';
}

int main(){
    int n = 10;
    divi(n);
}