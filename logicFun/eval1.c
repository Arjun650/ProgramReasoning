#include <stdio.h>
#include <limits.h>
#include <math.h>

/*@
    logic integer xyz(integer b) = b > 1 ? 5 * xyz(b -1) : 1 ; 
    logic integer power(integer n) = n > 1 ?  power(n-1) + n* xyz(n -1) : 1;
*/

/*@
    requires w > 0 ; 
    requires w < 5 ; 
    ensures \result == xyz(w);
*/

int powerr(int w){
    int pow = 1 ; 
    /*@
        loop invariant 1 <= j <= w+1 ;  
        loop invariant pow == xyz(j - 1);
        loop assigns pow , j ; 
        loop variant w - j ; 

    */
    for (int j = 1 ; j <= w ; j++){
        pow = pow * 5 ; 
    }
    return pow;
}
/*@
    requires r > 0;
    requires r < 10;
    ensures \result == power(r);

*/
int calSum(int r){
    int sum = 0 ; 
    /*@
        loop invariant 1 <= i <= r+1 ; 
        loop invariant sum == power(i -1);
        loop variant r - i ; 
    */
    for(int i = 1 ; i <= r ; i++){
        sum = sum + (i * powerr(i));
    }
    return sum;
}

int main(){
    int n = 2;
    //@assert n == 2;
    int b =calSum(n);
    //@assert b == power(n);
}