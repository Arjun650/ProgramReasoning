#include <stdio.h>
#include <limits.h>

/*@
	requires INT_MIN < a < INT_MAX;
	requires INT_MIN < b < INT_MAX;
	requires INT_MIN < c < INT_MAX;
	
	ensures (\result == a ) || ( \result == b ) ||  ( \result == c ) || ( \result == 0 ); 
	ensures a > b && a > c ==> \result == a;
	ensures b > a && b > c ==> \result == b;
	ensures c > a && c > b ==> \result == c;
	
	 
*/

int max(int a , int b , int c){
	//if( a == b || a == c || b == c )
	//return 1;
	//else
	if( a > b && a > c)
	return a;
	else 
	if( b > a && b > c)
	return b;
	else
	return c;
}

int main(){
	max(4 , 5, 6);
	max(5 , 5 , 7);
}
