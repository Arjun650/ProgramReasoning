#include <stdio.h>
#include <limits.h>
#include <math.h>
/*@
    logic integer xyz(integer b) = b >= 1 ? 3 * xyz(b - 1) : 1 ; 
    logic integer power(integer n ) = n > 1 ? (n - 2) * xyz(n - 2) + power(n - 2) : 1 ; 
*/

/*@
    requires 10 < r < 20;
    assigns \nothing;
    ensures \result == xyz(r);
*/
int powerr(int r){
    int pow = 1; 
    /*@
        loop invariant 1 <= j <= r+1 ; 
        loop invariant pow == xyz(j -1);
        loop assigns pow , j ; 
        loop variant r - j ; 
    */

    for (int j =1  ; j <= r ; j++){
        pow = pow * 3 ;
    }
    return pow;
}

/*@
    requires n > 0 ; 
    requires n < 5 ; 
   ensures \result == power(2 * n -1);

*/


int calSum(int n){
    int sum = 0 ; 
    /*@
        loop invariant 1 <= i <= n+2 ; 
        loop invariant sum == power(i);
        loop assigns i , sum;
        loop variant n - i ; 
    */
    for(int i = 1 ; i<= n ; i = i+2){
        sum = sum + ( i* powerr(i));
    }

    return sum;
}
int main(){
    int n = 2;
    //@assert n == 2 ;
   int  a = calSum(n);
    //@assert a == power(n);
   
}