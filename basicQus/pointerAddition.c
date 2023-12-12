#include <stdio.h>
#include <limits.h>
/*@
    requires \valid_read(a) && \valid(b); 
    requires INT_MIN / 2 < *a < INT_MAX / 2;
    requires INT_MIN / 2 < *b < INT_MAX / 2;
    requires \separated(a , b);
    ensures *a == \old(*a) + *b ; 
    assigns *a ; 
*/

void sum(int *a , int *b){
    *a = *a + *b ; 
    
}

int main(){
    int a = 10;
    int b = 20;
    sum(&a , &b);
    //@ assert a == 30 ; 
}