#include <stdio.h>
#include <limits.h>

/*@
	requires INT_MIN < n < INT_MAX;
	ensures ( \result == 'a' ) || ( \result == 'p' ) || ( \result == 'n' );
	ensures n == 0 ==> \result == 'a';
	ensures n > 0 ==> \result == 'p';
	ensures n < 0 ==> \result == 'n'; 
*/

int posNeg(int n){
	if ( n = 0 ) 
	return 'a';
	else 
	if ( n > 0 )
	return 'p';
	else
	return 'n';
}

int main(){
	posNeg(0);
	posNeg(9);
	posNeg(-8);
}
