#include <stdio.h>
#include <limits.h>
/*@
    requires INT_MIN < x < INT_MAX;
    requires INT_MIN < z < INT_MAX ; 
    
    
*/
void swap(int x , int z){
    
    int temp = x ; 
    x = z ; 
    z = temp;
    
}

int main(){
    int a = 3 ; 
    int b = 5 ; 
    swap(a , b);
    return 0;
}