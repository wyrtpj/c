#include <stdio.h> 
#include <stdbool.h> 

int main() { 
    int num; 
    
    printf( "введите целое число: \n" ); 
    scanf( "%d",&num ); 
    printf( "Число = %d; ",num ); 
    
    num= num % 2; //вычисление остатка от деления числа на 2 (0, если число чётное, 1, если число нечетное)
    bool chetni = (num==0); 
    
    const char*resultat=chetni ? "число четное" : " число не четное"; //  если переменная true (чётная), то "число четное" присваивается переменной resultat, если false  (нечётное),"число не четное" присваивается resultat.
    
    printf("%s\n",resultat ); 
    
    return 0;
}
