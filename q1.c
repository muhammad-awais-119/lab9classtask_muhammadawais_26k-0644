
#include <stdio.h>
#include <string.h>

int main() {

    char feedback[200];
    char updated[300];

    printf("Enter customer feedback: ");
    fgets(feedback, sizeof(feedback), stdin);

    // Remove newline character
    feedback[strcspn(feedback, "\n")] = '\0';

    // Count characters
    printf("\nTotal characters: %d\n", (int)strlen(feedback));

    // Search for bad
    if (strstr(feedback, "bad") != NULL) {
        printf("The word 'bad' exists.\n");
    }
    else {
        printf("The word 'bad' does not exist.\n");
    }

    // Search for good
    if (strstr(feedback, "good") != NULL) {
        printf("The word 'good' exists.\n");
    }
    else {
        printf("The word 'good' does not exist.\n");
    }

    // Replace bad with not good
    char *position = strstr(feedback, "bad");

    if (position != NULL) {

        int index = position - feedback;

        // Copy text before bad
        strncpy(updated, feedback, index);
        updated[index] = '\0';

        // Add replacement
        strcat(updated, "not good");

        // Add remaining text after bad
        strcat(updated, position + 3);

        printf("\nUpdated Feedback: %s\n", updated);
    }
    else {
        strcpy(updated, feedback);

        printf("\nNo replacement needed.\n");
        printf("Feedback: %s\n", updated);
    }

    return 0;
}
