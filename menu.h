#define MAX_ENTRIES 100
#define MAX_ENTRY_LEN 1024

// Structure to represent a diary entry
typedef struct {
  int day;
  int month;
  int year;
  char *text;
} Entry;

// Array to store the entries
Entry entries[MAX_ENTRIES];

// Number of entries currently stored
int num_entries = 0;

// Function prototypes
void add_entry();
void view_entry();
void search_entry();
void view_pic();

void menu(void)
{
  while (true) {

    printf("\n\t\t\t|MAIN MENU|");
    printf("\n\t\t\t___________");
    printf("\n\n\t\t  1. Add an entry\n");
    printf("\n\t\t  2. View an entry\n");
    printf("\n\t\t  3. Search for an entry\n");
    printf("\n\t\t  4. View picture\n");
    printf("\n\t\t  5. Exit\n");
    printf("\n\n\t    Enter your choice: ");

    int choice;
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        add_entry();
        break;
      case 2:
        view_entry();
        break;
      case 3:
        search_entry();
        break;
      case 4:
        view_pic();
        break;
      case 5:
        system("cls");
        printf("\n\t\t\tTHANK YOU!");
        sleep(3);
        exit(0);
      default:
        printf("\n\t\t\tINVALID CHOICE!");
        printf("\n\t\t  PLEASE ENTER A VALID CHOICE\n");
        break;
    }
  }
}

void add_entry(void)
{
  system("cls");
  if (num_entries == MAX_ENTRIES) {
    printf("Error: Diary is full.\n");
    return;
  }

  Entry *entry = &entries[num_entries++];

  printf("\t\tEnter the date (dd-mm-yyyy): ");
  scanf("%d-%d-%d", &entry->day, &entry->month, &entry->year);

  printf("\t\tEnter the text: ");
  char buffer[1024];
  scanf("%s", buffer);
  printf("\n\n\t\t\t  DATA STORED!");
  sleep(2);
  system("cls");
  entry->text = strdup(buffer);
}

// Function to view a diary entry
void view_entry(void)
{
  system("cls");
  int day, month, year;
  printf("\t\tEnter the date (dd-mm-yyyy): ");
  scanf("%d-%d-%d", &day, &month, &year);

  for (int i = 0; i < num_entries; i++) {
    Entry *entry = &entries[i];
    if (entry->day == day && entry->month == month && entry->year == year) {
      printf("\n\t\t%02d/%02d/%04d: %s\n", entry->day, entry->month, entry->year, entry->text);
      printf("\n\n\t\t  PRESS ANY KEY TO RETURN!");
      getch();
      return;
    }
  }

  printf("\n\t\t\tNo entry found for the given date.\n");
  sleep(2);
  system("cls");
}

// Function to search for diary entries containing a given string
void search_entry(void)
{
  system("cls");
  printf("Enter the search string: ");
  char buffer[1024];
  scanf("%s", buffer);
  char *search_string = strdup(buffer);

  for (int i = 0; i < num_entries; i++) {
    Entry *entry = &entries[i];
    if (strstr(entry->text, search_string) != NULL) {
      printf("%02d/%02d/%04d: %s\n", entry->day, entry->month, entry->year, entry->text);
    printf("\n\n\t\t  PRESS ANY KEY TO RETURN!");
    getch();
    return;
    }
  }
  printf("\n\t\t\tNo entry found for the given search letters\n");
  sleep(2);
  system("cls");
}

void view_pic(void)
{
    initwindow(1000,750,"Image");

    readimagefile("./database/rick.jpg",0,0,1000,500);
    getch();
    closegraph();
}