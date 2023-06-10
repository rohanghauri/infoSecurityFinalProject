#include <stdio.h>
#include <string.h>

void vulnerableFunction(char *input) {
    char buffer[10];
    strcpy(buffer, input); // Vulnerability: No bounds checking on input size
    printf("Buffer content: %s\n", buffer);
}

int main() {
    char input[100];
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    
    vulnerableFunction(input);
    
    return 0;
}
