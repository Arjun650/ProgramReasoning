// Arjun Kumar Das
// CSE22186

// Linear search problem using behavior.

#include <stddef.h>
/*@
	requires \valid_read(array+(0..length-1));
	assigns \nothing;
	behavior in:
		assumes \exists size_t a;0<=a<length&&array[a]==element;
		ensures array<=\result<array+length&&*\result==element;

	behavior notin:	
		assumes \forall size_t a;0<=a<length==>array[a]!=element;
		ensures \result==NULL;
	
	disjoint behaviors;	
	complete behaviors;	
*/
int* search(int* array, size_t length, int element) {
	/*@
		loop invariant 0<=i<=length;
		loop invariant \forall size_t j;0<=j<i==>array[j]!=element;
		loop assigns i;	
		loop variant length-i;
	*/
	for(size_t i = 0; i < length; i++) 
		if(array[i]==element) return &array[i];
	return NULL;
}

void main() {
	int a[] = {13, 24, 18, 22, 17, 6};
	int* res = search(a, 6, 22);
}
