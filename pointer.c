/* Uses of Pointer:-
    1) Pointers are used to access the heap memory. (indirect access)
    2) Pointers are used to access the outside resources. (keyboard,monitor etc.)
    3) Pointers are used for parameters passing.
*/

#include <stdio.h>
void main()
{
    int a = 10;
    int *p; //Declaration of pointer 
    p = &a; //p stores the address of a 
    printf("%d\n", *p);
}