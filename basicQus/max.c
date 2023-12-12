#include <stdio.h>
#include <limits.h>
   
   /*@
   	requires INT_MIN < a < INT_MAX;
   	requires INT_MIN < b < INT_MAX;
   	ensures ( \result == a )  || ( \result == b );
   	ensures ( a > b ==> \result == a ); 
   	ensures ( b > a ==> \result == b);
   	
   */
   
int max(int a , int b){
	if( a > b )
	return a;
	else
	return b;
}

int main(){
	max(-3 , 7);
	max(-1 , -67);
	max(5 , 7);
}
