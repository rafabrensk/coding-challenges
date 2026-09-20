#include<stdio.h>

int primecheck(int n) {
    int divs = 0;
    int i;
    for (i=n;i>0;i--) {
        if (n%i == 0) {divs++;}
    }
    if (divs == 2) {return 1;}
    if (divs != 2) {return 0;}

}

int main() {
    int n, check;
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &n);
    check = primecheck(n);
    if (check == 1) {printf("The number (%d) is prime!", n);}
    if (check == 0) {printf("The number (%d) isnt prime!", n);}
    printf("\n");
}