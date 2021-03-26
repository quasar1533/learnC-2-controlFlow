#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // 1. random number
  // [0, 0x7fff]
  int time1 = time(NULL);
  printf("%d\n", time1);

  srand(time1);
  int magic_number = rand();
  printf("%d\n", magic_number);
  // 2. loop
  while (1) {
    int user_input;
    printf("Please input an number: \n");
    scanf("%d", &user_input);
    if (user_input > magic_number) {
      printf("Your number is bigger!\n");
    } else if (user_input < magic_number) {
      printf("Your number is smaller!\n");
    } else {
      printf("Bingo!\n");
      break;
    }
  }

  return 0;
}