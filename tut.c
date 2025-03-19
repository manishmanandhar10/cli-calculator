#include <stdio.h>

int main() {
    char name[50];

    // Prompt the user for their name
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Print a greeting message hi
    printf("Hello, %s!\n", name);
    
    return 0;
}
