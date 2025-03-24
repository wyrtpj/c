#include <stdio.h>
#include <stdbool.h>

int main() {
 int num;
  
 printf( "Введите целое число: \n" );
 scanf( "%d", &num );
 printf( "Ваше число:%d; ", num );
  
 int i;
  
 num = num % 2;
 bool honest = ( num == 0 );
  
 const char* result = honest ? "Число четное" : "Число нечетное";
  
 printf( "%s\n", result );
 
 return 0;
}
