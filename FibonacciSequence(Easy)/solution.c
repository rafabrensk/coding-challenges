#include<stdio.h>

void fibonacci (int n) {
    int i, temp;
    int a = 0;
    int b = 1;
    for(i=0;i<n;i++) {
        printf("%d ", a);
        temp = a;
        a = b;
        b = temp + b;
    }
    printf("\n");
}

int main () {
    int n = 0;
    printf("Enter how many Fibonacci numbers you want to see: ");
    scanf("%d", &n);
    fibonacci(n);
}