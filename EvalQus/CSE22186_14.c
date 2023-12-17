// Arjun Kumar Das
// CSE22186

// To check the positive or negative number in an array using behavior.
/*@
	requires \valid_read(a+(0..n-1));
	ensures \exists integer k1,k2;(0<=k1<n&&0<=k2<n&&k1!=k2)==>(a[k1]>=0&&a[k2]<0);
	behavior pos:
		assumes c>=0;
		ensures \result==1;
	behavior neg:
		assumes c<0;
		ensures \result==-1;
	
	complete behaviors;
	disjoint behaviors;
*/

int check(int a[], int n, int c) {
	int i = 0;
	int count_positive = 0;
	int count_negative = 0;
	/*@	
		loop invariant 0<=i<=n;
		loop invariant \exists integer k;0<=k<(i-1)&&a[k]>=0==>count_positive+1;
		loop invariant \exists integer k;0<=k<(i-1)&&a[k]<0==>count_negative+1;
		loop assigns i,count_positive,count_negative;
		loop variant n-i;
	*/
	while(i<n) {
		if(a[i]>=0)
			count_positive++;
		else
			count_negative++;
		i++;
	}
	c = count_positive - count_negative;
	//@assert c==count_positive-count_negative;
	if(c>=0) 
		//@assert c>=0;
		return 1;
	else
		//@assert c<0;
		return -1;
}

void main() {
	int a[] = {32, -25, 16, 98, -60, 28};
	int res = check(a, 6, 0);
	//@assert res==1;
}
	

