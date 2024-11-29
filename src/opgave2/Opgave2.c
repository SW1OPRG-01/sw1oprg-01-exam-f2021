#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {

  char buf[24];
  int age;
  
  printf("Indtast din fornavn: ");
  fgets(buf, 24, stdin);
  printf("Indtast din alder som heltal: ");
  scanf("%d", &age);
  printf("Du hedder %s", buf);
  printf("Dit fornavn har %lu bogstaver\nDin alder er %d\n", strlen(buf) - 1, age);

  return 0;
}