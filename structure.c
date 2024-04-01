#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int physics;
    int chemistry;
    int math;
    int total;
};

int main()
{
    int n;
    printf("Enter the number of s: ");
    scanf("%d", &n);

    struct Student s[n];
    for (int i = 0; i < n; ++i)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Physics marks: ");
        scanf("%d", &s[i].physics);
        printf("Chemistry marks: ");
        scanf("%d", &s[i].chemistry);
        printf("Math marks: ");
        scanf("%d", &s[i].math);
        s[i].total = s[i].physics + s[i].chemistry + s[i].math;
    }

    // Sort s based on total marks (descending order)
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (s[i].total < s[j].total)
            {
                struct Student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nMerit List (Highest to Lowest Total Marks):\n");
    printf("------------------------------------------------\n");
    printf("| Roll | Name            | Total Marks |\n");
    printf("------------------------------------------------\n");
    for (int i = 0; i < n; ++i)
    {
        printf("| %d   | %s            | %d          |\n", s[i].roll, s[i].name, s[i].total);
    }
    printf("------------------------------------------------\n");

    return 0;
}
