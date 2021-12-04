// #include <cs50.h>
#include <stdio.h>
// #include <string.h>


int main(void) 
{
  // initialize array
  int numbers[] = {4, 6, 8, 2, 7, 5, 0};

  for (int i = 0; i < 7; i++)
  {
    if (numbers[i] == 0) 
    {
      printf("Found\n");
      return 0; // success, exit
    }
  } 
  printf("Not found\n");
  return 1; // catch all, if 0 not found, return 1
}


int main(void) 
{
  // string will not pickup without CS50 library.
  string names[] = {"Bill", "Charlie", "Bobby", "Ben", "Austin", "Luna"};

  for (int i = 0; i < 7; i++) 
  {
    // you can not do this in C, if (names[i] == "Bill"), need to use strcmp(string, string to match)
    if (strcmp(names[i], "Bill") == 0)
    {
      printf("Found\n");
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}


typedef struct 
{
  /* data */
  string name;
  string number;
}
person;

int main(void) 
{
  // data structures
  person people[2];

  people[0].name = "Brian";
  people[0].number = "978-123-4567";

  people[1].name = "David";
  people[1].number = "978-123-4567";

  for (int i = 0; i < 2: i++)
  {
    if (strcomp(names[i].name, "Benjamin" == 0)) 
    {
      printf("Found %s\n", people[i].number);
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
  
}