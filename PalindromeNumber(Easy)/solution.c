#include<stdio.h>

void palindromocheck(int n) {
    int i = 1; 
    int inv = 0;
    int m = n;
    
    while(m>0) {
        m = m/10;
        i = i*10;
    }

    m = n;

    while (m>0) {
        i = i/10;
        inv += (i)*(m%10);
        m = m/10;
    }
    
    if (n == inv) {printf("(%d) palindrome!\n");}
    if (n != inv) {printf("(%d) not palindrome!\n");}
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    palindromocheck(n);
}