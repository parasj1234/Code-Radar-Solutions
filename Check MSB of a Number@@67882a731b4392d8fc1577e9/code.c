// Your code here...
#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    if((1<<31)&a==1){
        printf("Set");
    }
    else{
    printf("Not Set");

    }
return 0;
}