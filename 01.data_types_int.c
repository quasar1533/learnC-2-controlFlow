#include <stdio.h>
#include <limits.h>

int main() {
  short int short_int = 0;
  int i = 110;
  long int long_int = 0;

  long long long_long_int = 0;

  unsigned int unsigned_int = 0;

  size_t size_of_int = sizeof(int);

  // c99 之后版本的long long int
  // %hu  unsigned short decimal

  // sizeof 运算符用查看数据类型的长度
  printf("short int: %d\n", sizeof(short int));
  printf("int: %d\n", sizeof(int));
  printf("long int: %d\n", sizeof(long int));
  printf("long long int: %d\n", sizeof(long long int));

  printf("int in hex: %x\n", i);
  printf("int in oct: %o\n", i);

  // 引入limits库，查看数据的限制
  printf("max int number: %d, min int number: %d\n", INT_MAX, INT_MIN);
  printf("max unsigned int number: %u, min unsigned int number: %d\n", UINT_MAX, 0);
  printf("max long int number: %ld, min long int number: %ld\n", LONG_MAX, LONG_MIN);

  return 0;
}
