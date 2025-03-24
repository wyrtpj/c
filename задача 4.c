#include <stdio.h>

int main() {
    int num;
    
    printf("Введите число: ");
    scanf("%d", &num);
    int a = num > 0;
    int b = num & (num - 1);
    int result = a && !b;
 
    printf("%d\n", result);
    
    return 0;
}
