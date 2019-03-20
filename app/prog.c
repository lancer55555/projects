#include <stdio.h>

int main(){
  // Программа опрос(имя,возраст,вес).
  int age, weight;
  char name[50]; // массив символов.
  printf("Введите ваше имя: ");
  scanf("%s", name);
  printf("Введите ваш возраст: ");
  scanf("%d", &age);
  printf("Введите ваш вес: ");
  scanf("%d", &weight);
  printf("Вывод информации.\n");
  printf("Ваше имя %s, ваш возраст %d лет, ваш вес - %d кг.\n", name, age, weight);
  printf("Адресс переменной name с нашим именем в памяти компьютера - %p\n", &name);
  return 0;
}
