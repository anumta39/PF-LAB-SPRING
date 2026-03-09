#include <stdio.h>  
int main() {
    char str[100];
    int i;

    
    printf("Enter a string: ");
    scanf("%[^A-Za-z]", str);

    
    printf("Non-alphabetic characters: ");
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}
