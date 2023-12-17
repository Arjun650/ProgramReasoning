// Arjun Kumar Das
// CSE22186

// 1. Maximum function with precondition and postcondition.
#include<limits.h>
/*@ 
	requires INT_MIN<=a<=INT_MAX;
	requires INT_MIN<=b<=INT_MAX;
	ensures \result == a && \result>b || \result==b && \result > a || \result == a && a==b;
*/
int max(int a, int b) {
	return (a>b)?a:b;
}

void main() {
	int a = max(3, 5);
	int b = max(19, 11);
	//@ assert a==5 && b==19;
}
