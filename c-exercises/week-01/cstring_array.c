#include <stdio.h>

int main() {
  char * name = "John";
  int i;
  for(i = 0;i < 4;i++){
    printf("%c\n",name[i]);
  }
  printf(name);

return 0;
}
