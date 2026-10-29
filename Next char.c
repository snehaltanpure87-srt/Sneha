#include <stdio.h>

int main() {
    char ch;
    int n, i;

    printf("Enter a character: ");
    scanf("%c", &ch);

    
    printf("Enter the integer n: ");
    scanf("%d", &n);

    
    printf("The next %d characters are: ", n);
    for(i = 1; i <= n; i++) {
        printf("%c ", ch + i);
    }
    printf("\n");

    return 0;
}
