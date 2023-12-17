// Arjun Kumar Das
// CSE22186

// 7. Examples illustrating the usage of labels, here, pre, post, \at, \old, valid, valid_read, assigns, separated.
#include<limits.h>

/*@ 	
	requires INT_MIN-(*b)<=*a<=INT_MAX-(*b);
	requires INT_MIN-(*a)<=*b<=INT_MAX-(*a);
	requires \valid(a)&&\valid_read(b);
	requires \separated(a, b);
	assigns *a;	
	ensures *a==\old(*a)+*b;
	ensures *b==\old(*b);
*/

void increase_a_by_b(int* a, int* b) {
	*a = *a + *b;
}


void main() {
	int a = 5;
	int b = 6;
	L1:
	increase_a_by_b(&a, &b);
	//@assert \at(a,Here)==11&&b==6;
	//@assert \at(a,L1)==5&&\at(b,L1)==6;
	
}
