#include<stdio.h>
#include<stdlib.h>
void main(){
    int *p,i,k=0;
    p=(int *)malloc(5*sizeof(int));  
    
    //Initializing the heap memory through malloc()
    //ptr = (cast-type*) malloc(byte-size)

    /*In C++ 
        p=new int[5];
    */

    for(i=0;i<5;i++){
        p[i]=k+1;  //Assigning the value 
        k++;
    }

    for(i=0;i<5;i++){
        printf("%d\n",p[i]);
    }

    free(p); //Releasing the memory allocated by the malloc() 
}