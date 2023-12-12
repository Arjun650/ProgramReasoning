#include<stdio.h>
#include<limits.h>
/*@
    predicate unchanged{L0 , L1}(int* k) = \at(*k, L0) == \at(*k, L1);
*/

int main(){
    int i = 13 ; 
    int j = 37 ; 
    Begin:
        i = 23 ; 
    
    //@assert ! unchanged{Begin , Here} (&i);
    //@assert unchanged{Begin , Here} (&j);
}