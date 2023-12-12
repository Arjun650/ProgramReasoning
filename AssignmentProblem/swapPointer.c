#include <stdio.h>
#include <limits.h>

/*@
    requires INT_MIN <= *a <= INT_MAX;
    requires INT_MIN <= *b <= INT_MAX;
    ensures *a  == \old(*b) && *b == \old(*a);
*/

void swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
 }

 int main(){
    int c = 10 ; int d = 9;
   //@ assert c == 10 ;
   //@ assert d == 9;
    swap(&c , &d);
     //@ assert c == 9;
    //@ assert d == 10;
 }