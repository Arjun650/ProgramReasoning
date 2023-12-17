// Arjun Kumar Das
// CSE22186

// 3. Compute the absolute value without arithmetic overflow and with precondition and postcondtion.
#include<limits.h>
/*@ 
	requires INT_MIN<=val<=INT_MAX;
	ensures \result>=0;
	ensures (val>=0==>\result==val)&&(val<0==>\result==-val);
*/
int abs(int val) {
	if(val<0) return -val;
	return val;
}

void main() {
	int a,result;
	a = -7;
	//@assert a==-7;
	result = abs(a);
	//@assert result==7;
}
