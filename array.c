/*

    An array is a collection of data items, all of the same type, accessed using a common name.
    It starts from index 0.
    Syntax:- datatype variableName[arraysize]={value 1, value 2,value 3, . . .};

*/


#include<stdio.h>
void main(){
    int array[5]={1,2,3,4,5},i=0;
    for(;i<5;i++){
        printf("%d\n",array[i]);
    }
}