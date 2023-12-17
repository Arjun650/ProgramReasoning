// Arjun Kumar Das
// CSE22186

// 5. Swap function using pass by value with precondition and postcondition.
#include<limits.h>

/*@ 
	requires INT_MIN<=a<=INT_MAX;
	requires INT_MIN<=b<=INT_MAX;
	ensures a==\at(b,Pre) && b==\at(a,Pre);
*/

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}


void main() {
	int a = 21;
	int b = 18;
	swap(a, b);
	//@assert a==18 && b==21;
}
