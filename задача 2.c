#include <stdio.h> 
#include <stdbool.h> 

int main() { 
    int num; 
    
    printf( "введите целое число: \n" ); 
    scanf( "%d",&num ); 
    printf( "Число = %d; ",num ); 
    
    num= num % 2; 
    bool chetni = (num==0); 
    
    const char*resultat=chetni ? "число четное" : " число не четное"; 
    
    printf("%s\n",resultat ); 
    
    return 0;
}
