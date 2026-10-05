#include <stdio.h>

typedef struct {
  char * name;
  int age;
} person;

void bday(person * p){
  p->age++;
}


int main(){
person p;
  p.name = "John";
  p.age = 25;
 
printf("%s is %d years old\n", p.name, p.age);

bday(&p);

printf("%s is now %d years old\n", p.name, p.age);

return 0;
}
