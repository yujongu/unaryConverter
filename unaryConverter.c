#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("Hello, this is a program that converts a number into unary symbol!\n");
  printf("A unary symbol is the simplest symbol set there is. It is base 1, and quite easy to understand.\n");
  printf("For instance, the number 1, which is base 10 is equal to | in unary.\n");
  printf("Then this goes on\n");
  printf("1 : |\n2 : ||\n3 : |||\n and so on.");
  printf("Did you know that the symbol | in unary is a birch tree?\n");
  int input;
  printf("Please type in the number you would like to convert: ");
  scanf("%d", &input);

  printf("Is it...\n1. Base 10\n2. Base 2\n");
  int base;
  scanf("%d", &base);

  printf("Thank you. The converted unary symbol is...\n");

  char * res;
  if (base == 1) {
    res = (char *)malloc(sizeof(char) * 1000);
    char * p = res;
    for(int i = 0; i < input; i++){
      *p = '|';
      p++;
    }
    *p = '\n';
    printf("%s\n", res);
  }

  if (base == 2) {

  }



  return 0;
}
