// Arjun Kumar Das
// CSE22186

// Compute the factorial of a given number with precondition and postcondition.


/*@logic integer factorial(integer n)=(n<=0)?1:n*factorial(n-1);*/
/*@
	requires n<=12;
	assigns \nothing;
	ensures \result==factorial(n);
*/

int fact(int n) {
	if(n<2) return 1;
	int prod = 1;
	int i = 2;
	/*@
		loop invariant 2<=i<=n+1;
		loop invariant prod==factorial(i-1);
		loop assigns prod,i;
		loop variant n+1-i;
	*/
	while(i<=n) {
		prod = prod * i;
		i++;
	}
	return prod;
}

void main() {
	int a = 5;
	//@assert a==5;
	int res = fact(a);
	//@assert res==120;
}
