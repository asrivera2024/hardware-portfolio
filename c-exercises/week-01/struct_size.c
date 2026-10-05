#include <stdio.h>

 struct ace{
  char foo;
  int age;
}; 

int main(){

  printf("Here's the byte size of struct ace: %lu bytes\n", sizeof( struct ace));

  return 0;
}
