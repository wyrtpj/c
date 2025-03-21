#include <stdio.h>

int main() {
int x;
    
printf("введите числo : \n");
scanf("%d",&x);
    
printf("%d\n",(x>0) && (x&(x-1))==0);
    
    return 0;
}
