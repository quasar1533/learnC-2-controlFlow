#include <stdio.h>
#include <limits.h>
#include <wchar.h>

int main() {
  // 常用字符集  ASCII
  char a = 'a';   // code point 97
  char char_1 = '1';   // code point 49
  char char_0 = '0';   // code point 48

  char i = 0;   // NULL  or \0
  char char_1_escape_oct = '\61';   // \加上8进制数可以转义字符
  char char_1_escape_hex = '\x31';   // \x加上16进制数可以转义字符

  // char都表示窄字符，c95标准之后引入了宽字符
  // Unicode  CJK    头文件wchar.h
  wchar_t zhong = L'中';
  // or
  wchar_t zhong_hex = L'\u4E2D';

  printf("char a: %c\n", a);
  printf("char a: %d\n", a);   // decimal输出则会打印出码点
  printf("char char_1: %c\n", char_1);
  printf("char char_1: %d\n", char_1);
  printf("char char_0: %c\n", char_0);
  printf("char char_0: %d\n", char_0);
  printf("char i: %c\n", i);
  printf("char i: %d\n", i);
  printf("char char_1_escape_oct: %c\n", char_1_escape_oct);
  printf("char char_1_escape_hex: %c\n", char_1_escape_hex);
  printf("wchar_t zhong: %d\n", zhong);
  printf("wchar_t zhong_hex: %d\n", zhong_hex);

  return 0;
}
