#include <stdio.h>
#include <limits.h>

int main(){
    int h = 30;
    int i = 0;
    /*@
        loop invariant 0 <= i <= 10;
        loop assigns i;
        loop assigns a;
    */
   
    for(i = 0 ; i< 10  ;i++){}

    //@ assert h == 30;
    //@ assert i == 10;
}