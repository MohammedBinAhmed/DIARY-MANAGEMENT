
void password(void) 
{
    int pass[25];
    int def[25];

    strcpy(def,"1234");	

	printf("\n\t\tLOGIN PAGE");
    printf("\n\t\t__________");

    printf("\n\n\tEnter your password> ");
	scanf("%s",pass);
    printf("\n");
    do
    {	
	if (strcmp(pass,def)==0)
	{
        system("cls");
		printf("\n\t\tWELCOME USER!");
        sleep(2);
        system("cls");
        break;
    }
    else
    {
       printf("\tWRONG PASSWORD!\n");
       printf("\tRe-enter your password> ");
       scanf("%s", pass);    
	}
   }while (1);
}