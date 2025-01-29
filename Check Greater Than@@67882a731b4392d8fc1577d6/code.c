#include <stdio.h>



int main() {
    int a, b;
    scanf("%d %d", a, b);
    bool isGreater = a > b;
    if (isGreater){
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}