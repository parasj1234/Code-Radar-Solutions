#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
    printf("Output:\n");
    for (int i = n; i>=1;i--){
        for (int j = 1; j<=1;j++){
            printf("*");
        }
        printf("\n")
    }
    return 0;
}