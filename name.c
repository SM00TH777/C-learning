#include <stdio.h>

int main() {
    char name[50];  // space to store your name (up to 49 chars + '\0')

    printf("Enter your name: ");
    
    // read a line of text (including spaces) from the user
    fgets(name, sizeof(name), stdin);

    // remove the trailing newline if present
    int i = 0;
    while (name[i] != '\0') {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
        i++;
    }

    printf("Hello, %s! Welcome to C programming.\n", name);

    return 0;
}
