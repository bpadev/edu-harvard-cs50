// Week 5, Data Structures


// Arrays
// - [1, 2, 3, 4]
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  // PLaces on the stack
  // int list[3];

  // list[0] = 1;
  // list[1] = 2;
  // list[2] = 3;
  
  // Dynamically, places on the heap
  int *list = malloc(3 * sizeof(int));

  if (list = NULL)
  {
    return 1;
  }

  list[0] = 1;
  list[1] = 2;
  list[2] = 3;

  // TIme passes
  int *tmp = malloc(4 * sizeof(int));
  if (tmp == NULL)
  {
    free(list); // everytime you use malloc you need to eventually use free.
    return 1;
  }

  for (int i = 0; i < 3; i++)
  {
    tmp[i] == list[i];
  }
  tmp[3] = 4;

  free(list);

  list = tmp;
}


// Data Structures
// - Linked Lists, can't use array notation to jump to next index. Need to use pointers. Pointers point to other nodes.
typedef struct node
{
  int number;
  struct node *next;
}
node;

node *n = malloc(sizeof(node));

node *list = NULL;

if (n != NULL)
{
  n->number = 1;
}


// Trees
// binary search on binary search tree. Implement this.


// Hash Table
// 