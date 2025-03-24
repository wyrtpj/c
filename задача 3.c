#include <stdio.h> 

int main() { 
    int x, y, z; 
    
    printf("введите три числа : \n");
    scanf("%d %d %d",&x,&y,&z); 
    
    int result = x * y * z; 
    
    int sign = (result > 0) - (result < 0); 
    
    printf("%d\n", sign); 
    
    return 0;
}
