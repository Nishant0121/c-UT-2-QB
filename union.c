#include <stdio.h>

union PersonInfo
{
    char name[50];
    int id;
};

void main()
{
    union PersonInfo person;
    int choice;

    printf("Enter 1 to store name or 2 to store ID: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the person's name: ");
        scanf("%s", person.name);
        printf("Name stored: %s\n", person.name);
        break;
    case 2:
        printf("Enter the person's ID: ");
        scanf("%d", &person.id);
        printf("ID stored: %d\n", person.id);
        break;
    default:
        printf("Invalid choice. Please enter 1 or 2.\n");
        break;
    }
}
