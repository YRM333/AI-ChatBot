#include <stdio.h>
#include <string.h>

// Function to remove newline character
void removeNewline(char* str) {
    str[strcspn(str, "\n")] = 0;
}

int main() {
    char input[100];

    printf("Welcome to Simple Chatbot! Type 'bye' to exit.\n");

    while (1) {
        printf("You: ");
        fgets(input, sizeof(input), stdin);
        removeNewline(input);

        // Respond based on user input
        if (strcmp(input, "hi") == 0 || strcmp(input, "hello") == 0) {
            printf("Bot: Hello! How can I assist you?\n");
        }
        else if (strcmp(input, "how are you") == 0) {
            printf("Bot: I'm just a program, but I'm doing well. Thanks for asking!\n");
        }
        else if (strcmp(input, "what is your name") == 0) {
            printf("Bot: I am a simple chatbot created in C.\n");
        }
        else if (strcmp(input, "bye") == 0) {
            printf("Bot: Goodbye! Have a nice day.\n");
            break;
        }
        else {
            printf("Bot: I'm not sure how to respond to that.\n");
        }
    }

    return 0;
}
