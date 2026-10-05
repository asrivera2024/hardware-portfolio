#include <stdio.h>

int main() {

char text[] = "Hello";

text[0] = 'J';

for (int i = 0; i < 6;i++){
    printf("%c", text[i]);
  }


  return 0;

}
