#include<stdio.h>
struct rectangle  
//It is a derived datatype used to group the variables under one name in a block of memory.

{
    int length,breadth; //Initialization is not allowed here.
}/*(r) In this way we can also decalre the structure variable*/; 

struct rectangle r; // Here r is structure variable.

/*

struct rectangle  
{
    int length,breadth;
}(r); 

*/

void main(){
    int l=r.length,b=r.breadth;
    scanf("%d%d",&l,&b);
    printf("Area is %d\n",l*b);
}

