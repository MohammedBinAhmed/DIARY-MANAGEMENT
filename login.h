#define MAX_USERNAME_LEN 50
#define MAX_PASSWORD_LEN 50

int login(void)
{
    while(1)
    {
        // Open the text file containing login information
        FILE *loginFile = fopen("./database/login.txt", "r");

        // Read the username and password from the file
        char username[MAX_USERNAME_LEN];
        char password[MAX_PASSWORD_LEN];
        fscanf(loginFile, "%s %s", username, password);
        fclose(loginFile);

        // Prompt the user to enter their username and password
        char enteredUsername[MAX_USERNAME_LEN];
        char enteredPassword[MAX_PASSWORD_LEN];
        printf("\t\t\t*LOGIN PAGE*");
        printf("\n\t\t\t************");
        printf("\n\n\tEnter your username: ");
        scanf("%s", enteredUsername);
        printf("\tEnter your password: ");
        scanf("%s", enteredPassword);

        // Compare the entered login information to the information from the file
        if (strcmp(enteredUsername, username) == 0 && strcmp(enteredPassword, password) == 0) {
            system("cls");
            printf("\n\n\t\t\tLogin successful!");
            printf("\n\n\t\t  TAKING YOU TO THE MAIN PAGE");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".");
            sleep(1);
            system("cls");
            break;
        } else {
            system("cls");
            printf("\n\n\tIncorrect username or password.\n");
            printf("\n\n\t\t\tREDIRECTING");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".");
            sleep(1);
            system("cls");
        }
    }

}
