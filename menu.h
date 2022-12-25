void menu(void)
{
    int choice;
    printf("\n\t\tMain Menu");
    printf("\n\t\t_________");
    printf("\n\n\t1) Add your thoughts!!");
    printf("\n\t2) View your records!!");
    printf("\n\t3) Edit your records!!");
    printf("\n\t4) Delete your records!!");
    printf("\n\t5) Exit!!");
    printf("\n\n\tEnter your choice : ");
    scanf("%d", &choice);

    system("cls");

    switch(choice)
    {
        default :
            printf("\n\n\tEnter a valid choice!!");
            menu();

    }
}