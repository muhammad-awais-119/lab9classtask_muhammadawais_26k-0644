
#include <stdio.h>
#include <string.h>

int main() {

    char email[100];
    char domain[100];

    printf("Enter employee email: ");

    scanf("%99s", email);

    // Find @ symbol
    char *position = strchr(email, '@');

    if (position != NULL && position != email &&
        *(position + 1) != '\0') {

        // Copy everything after @
        strcpy(domain, position + 1);

        printf("\nEmail Address: %s\n", email);

        printf("Domain Name: %s\n", domain);
    }
    else {

        printf("\nInvalid email address!\n");
    }

    return 0;
}
