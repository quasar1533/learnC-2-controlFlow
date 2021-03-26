#include <stdio.h>
#include <stdbool.h>

int main() {
  /*
   * while (<condition>) {
   *   ... statement
   * }
   */

  /*
   * do {
   *  ... statement
   * } while (<condition>);
   */
//
//#define ADD '+'
//#define SUB '-'
//#define MULTIPLY '*'
//#define DIVIDE '/'
//#define REM '%'
//
//  int left, right;
//  char operator;
//  char command = 'y';
//  int result;
//
//  while (command != 'q') {
//    printf("please input an expression(such as 1 + 1): \n");
//    scanf("%d %c %d", &left, &operator, &right);
//
//    switch (operator) {
//      case ADD:
//        result = left + right;
//        break;
//      case SUB:
//        result = left - right;
//        break;
//      case MULTIPLY:
//        result = left * right;
//        break;
//      case DIVIDE:
//        result = left / right;
//        break;
//      default:
//        printf("unsupported operator: %c", operator);
//        return 1;   // 表示非正常退出
//    }
//
//    printf("result is: %d\n", result);
//
//    puts("Again? Enter 'q' to exit.");
//    // equal to   printf("Again? Enter 'q' to exit.\n")  省去换行，专用于输出字符串
//    getchar();
//    command = getchar();
//    // equal to   scanf("%c", &command);
//  }
  int num = 1;
  int sum1 = 0;

  while (num <= 100) {
    sum1 += num;
    num++;
  }
  printf("%d\n", sum1);

  int sum2 = 0;

  for (int i = 0; i <= 100; ++i) {
    sum2 += i;
  }
  printf("%d\n", sum2);

  // plus version
  int sum3 = 0;
  for (int i = 0, j = 0; i <= 100 && j <= 100; i++, j++) {
    sum3 += i * (i + j);
  }
  printf("sum3: %d\n",sum3);

  // goto 语法 不建议使用!!
  int num2 = 0;
  begin:
  printf("num2: %d\n" ,num2);
  if (num2++ < 5) {
    goto begin;
  }

  return 0;
}
