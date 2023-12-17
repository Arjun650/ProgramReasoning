// Arjun Kumar Das
// CSE22186

//To find the gcd of two numbers

#include<limits.h>

/*@
logic integer gcd(integer a,integer b)=(a == 0)?b:gcd(b%a,a);
*/

/*@
requires 0<=a<INT_MAX;
requires 0<=b<INT_MAX;
assigns \nothing;
ensures \result == gcd(a,b);
*/

int gcd(int a,int b){
    if(a == 0) return b;
    else return gcd(b%a,a);
}

int main(){
    int a = 24,b = 28;
    int ans = gcd(a,b);
    //@assert ans == 4;
    return 0;
}
