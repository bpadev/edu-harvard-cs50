// Week 4, Memory


// Hexadecimal
// - Base 16, 0-9, A-F, so 0-F. 
// - 1 Hexadecimal digit = 4 binary digits/bits
// - 0x prefix, 0x48


// Addresses
// - 
& // - address of operator
* // - dereference operator, says go to this address
// - pointers are just a different type of variable that store the address of some value.

#include <stdio.h>

int main(void)
{

  int n = 50;
  int *p = &n; // grabs addess of n, stores in p as a pointer.
  printf("%p\n", p);
  printf("%i\n", *p);

}

// Strings
// - an array of characters 
// - not a formal data type in C
char *s = "HI!";


// Pointer Arithmetic
int main(void)
{
  int numbers[] = {4, 6, 8, 2, 7, 5, 0};

  printf("%i\n", *numbers);
  printf("%i\n", *(numbers + 1));
}


// Stack and Heap
// - Machine code at top of memory.
// - Global variables below machine code.
// - Heap
// - Stack