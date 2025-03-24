#include <stdio.h>

int main() {
 int num;
 
 printf( "введите число = " );
 scanf( "%d", &num );
 
 printf( "%d\n", (num > 0) && !( num & (num - 1) ));
 
return 0;
}
