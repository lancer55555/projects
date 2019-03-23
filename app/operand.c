#include <stdio.h>

int main(){
  int a = 10, b = 20, c = 3, d = 2, e = 4;
  //int sum = 0, sum1 = 0;
  //sum = a + b - c * d / e; // формула неудобная для чтения и понимания.
  //printf("Итого переменная sum -> %d\n", sum);
  //sum1 = (a + b) - ((c * d) / e); // читабельный вид формулы.
  //printf("Итого переменная sum1 --> %d\n", sum1);

  printf("Тема арифметические операции в языке Си.\n");
  printf("#########################################\n");
  printf("Переменная a = %d, b = %d, c = %d, d = %d, e = %d\n", a,b,c,d,e);
  printf("Сложение Addition a + b = %d\n", a + b);
  printf("Вычитание Substraction b - a = %d\n", b - a);
  printf("Умножение Multiplication d * e = %d\n", d * e );
  printf("Деление Division e / d = %d\n", e / d);
  printf("Остаток от деления Remainder division %d\n", a % d);
  printf("Инкремент Increment ++e = %d\n", ++e);
  printf("Постфиксный Инлремент a++ = %d\n", a++);
  printf("Переменная a(после) = %d\n", a);
  printf("Дикремент Dicrement --d = %d\n", --d);
  printf("Постфксный Дикремент b-- = %d\n", b--);
  printf("Переменная b(после) = %d\n", b);
  printf("#########################################\n");
}
