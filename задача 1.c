#include <stdio.h> 

int main() { 
   float temperature;

   printf( "введите температуру в Цельсия: \n" );
   scanf( "%f", &temperature); 
   printf( "c=%.2f; ", temperature); 
   
   float farengate;
   
   farengate = ( temperature*9.0/5.0)  + 32; // использование формулы для перевода градусов Цельсия в градусы Фаренгейта

   printf( "F=%.2f", farengate, "\n"); 
   
    return 0; 
}
