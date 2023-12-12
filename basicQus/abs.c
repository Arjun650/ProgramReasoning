#include <stdio.h>
#include <limits.h>

/*@
	requires n > INT_MIN;
	requires n < INT_MAX;
	ensures \result >= 0;
	ensures ( n < 0 ==> \result == -n );
	ensures ( n >= 0 ==> \result == n );
*/


int abs(int n ){
	if(n>0){
		return n;
	}
	else
	return -n;
}

int main(){
	abs(-4);
}
