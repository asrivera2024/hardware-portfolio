#include <stdio.h>

int main(){
  int a = 1;
  int * pointer_to_a = &a;

  printf("This is a: %d\n", a);
  printf("This is also a: %d\n", *pointer_to_a);
  //We must cast the int pointer in order to print is with %p
  printf("This is the address the pointer holds %p\n", (void *)pointer_to_a);
  
  a += 1;
  *pointer_to_a += 1;

   printf("This a plus one: %d\n", a);
   printf("This is also a plus another one: %d\n", *pointer_to_a);
  printf("%d",*pointer_to_a);


  return 0;
}
