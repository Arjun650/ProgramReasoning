#include <stdio.h>
#include <limits.h>

/*@
	requires INT_MIN < a < INT_MAX;
	ensures ( \result % 2 == 0 ) || ( \result % 2 != 0 );
	ensures ( a % 2 == 0 ==> \result == a ) ;
	ensures ( a % 2 != 0 ==> \result == 1 );
*/

char evenOdd(int a ){
	if( a % 2 == 0 )
	return a;
	else
	return 1;
}

int main(){
	evenOdd(3);
	evenOdd(4);
}
