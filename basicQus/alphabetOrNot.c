#include <stdio.h>
#include <limits.h>
 /*@
    requires ( c >= 'a' && c <= 'z' )||
        ( c >= 'A' && c <= 'z');
    ensures (( 97 <= c <= 122  || 65 <= c <= 90 ) ==> \result == 'y') ||  
    !(( 97 <= c <= 122  || 65 <= c <= 90 ) ==> \result == 'n');
 */

char character(char c){
    if ( (c >= 97 && c <= 122 ) || (c >= 65 && c <= 90) )
    return 'y';
    else
    return 'n';
}

int main(){
    character('c');
    character('Y');
}