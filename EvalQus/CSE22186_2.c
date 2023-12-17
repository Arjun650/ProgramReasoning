// Arjun Kumar Das
// CSE22186

// 2. Increment function with precondition and postcondition.
#include<limits.h>
/*@ 
	requires INT_MIN<=a<=INT_MAX-1;
	ensures \result==a+1;
*/
int increment_by_one(int a) {
	return ++a;
}

void main() {
	int x,result;
	x = 15;
	//@assert x==15;
	result = increment_by_one(x);
	//@assert result==16;
}
