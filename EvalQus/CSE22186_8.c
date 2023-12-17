// Arjun Kumar Das
// CSE22186

 // Computing the integer square root with precondition and postcondition.
#include<limits.h>
#include<math.h>

/*@ requires 0<=a;
    ensures \result>=0;
    ensures \result*\result>=a;
*/
double find_sqrt(double a) {
	return sqrt(a);
}

void main() {
	double x = find_sqrt(77);
	double y = find_sqrt(100);
}
