// Arjun Kumar Das
// CSE22186

// 4. To check the given number is odd or even, divisible by 3 or not with precondtion and postcondition.
#include<limits.h>
/*@ 
	requires INT_MIN<val;
	ensures \result==0||\result==1;
	ensures (val%2==0==>\result==1)&&
		(val%2!=0==>\result==0);
*/
int odd_or_even(int val) {
	if(val%2==0)
		return 1;
	return 0;
}

/*@ 
	requires INT_MIN<val;
	ensures \result == 0||\result==1;
	ensures (val%3==0==>\result==1)&&
		(val%3!=0==>\result==0);
*/
int divisible_by_three(int val) {
	if(val%3==0)
		return 1;
	return 0;
}


void main() {
	int a = 28;
	//@assert a==28;
	int x = odd_or_even(a);
	//@assert x==1;
	int y = divisible_by_three(a);
	//@assert y==0;
}
