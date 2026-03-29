#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char name[100];
    int age;
    int priority;
    int reg;
    char bloodgroup[5];
    struct node *next;
};

struct node *start = NULL;
struct node *insert(struct node *start);
struct node *delete1(struct node *start);
void display(struct node *start);
void table();
char *getdiseasename(int priority);

int main()
{
    int option;
    printf("\nSUBJECT NAME : DATA STRUCTURES");
    printf("\nSUBJECT CODE : 202040301");
    printf("\nMINI PROJECT TITLE : HOSPITAL APPOINTMENT MANAGEMENT SYSTEM");
    printf("\n\nDevloped By : HARSHIL PATEL  <12202040501026>\n\n");
    do
    {

    label:
        printf("\n++-----------------------------------------------++");
        printf("\n||      +---------------------------------+      ||");
        printf("\n||      |     WELCOME TO ZYDUS HOSPITAL   |      ||");
        printf("\n||      +---------------------------------+      ||");
        printf("\n||      | 1. Add a patient                |      ||");
        printf("\n||      | 2. Delete a record              |      ||");
        printf("\n||      | 3. Display all appointments     |      ||");
        printf("\n||      | 4. Exit                         |      ||");
        printf("\n||      +---------------------------------+      ||");
        printf("\n++-----------------------------------------------++");
        printf("\n\nEnter your choice: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            start = insert(start);
            break;
        case 2:
            start = delete1(start);
            break;
        case 3:
            display(start);
            break;
        default:
            if (option != 4)
            {
                printf("\nPLEASE ENTER VALID CHOICE !!!");
                goto label;
            }
            else
                break;
        }
    } while (option != 4);
}

// Function to add a patient
struct node *insert(struct node *start)
{
    struct node *newnode, *ptr;
    char name1[100], bloodgroup1[5];
    int age1, priority1, reg1;

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\n+----------------------------------------------+");
    printf("\n| Enter the following details of the patient : |");
    printf("\n+----------------------------------------------+");
    printf("\n| Reg. no.    : ");
    scanf("%d", &reg1);
    printf("| Name        : ");
    scanf("%s", name1);
    strcpy(newnode->name, name1);
    printf("| Age         : ");
    scanf("%d", &age1);
    newnode->age = age1;
    printf("| Blood group : ");
    scanf("%s", bloodgroup1);
    printf("+----------------------------------------------+");
    strcpy(newnode->bloodgroup, bloodgroup1);
    table();
    printf("\nEnter your disease number : ");
    scanf("%d", &priority1);
    newnode->priority = priority1;
    newnode->reg = reg1;

    if ((start == NULL) || priority1 < start->priority)
    {
        newnode->next = start;
        start = newnode;
    }
    else
    {
        ptr = start;
        while (ptr->next != NULL && ptr->next->priority <= priority1)
        {
            ptr = ptr->next;
        }
        newnode->next = ptr->next;
        ptr->next = newnode;
    }
    return start;
}

// Function to delete a patient record
struct node *delete1(struct node *start)
{
    struct node *ptr;
    ptr = start;
    if (start == NULL)
    {
        printf("\n+---------------------------------------------+");
        printf("\n|          NO PATIENT RECORD TO DELETE        |");
        printf("\n+---------------------------------------------+\n\n\n");
    }
    else
    {
        ptr = start;
        printf("\n+---------------------------------------------+");
        printf("\n|           Deleted Record is : %2d            |", ptr->reg);
        printf("\n+---------------------------------------------+\n\n\n");
        start = ptr->next;
        free(ptr);
    }
    return start;
}

// Function to display the appoinments of the patient
void display(struct node *start)
{
    struct node *ptr;
    int j = 1;
    ptr = start;

    if (start == NULL)
    {
        printf("\n+---------------------------------------------+");
        printf("\n|              THERE IS NO PATIENT            |");
        printf("\n+---------------------------------------------+\n\n\n");
    }
    else
    {
        printf("\n+---------------------------------------------+");
        printf("\n|    Priority wise appointments of patients   |");
        printf("\n+---------------------------------------------+\n\n\n");
        while (ptr != NULL)
        {

            printf("\n+---------------------------------------------+");
            printf("\n| APPOINTMENT NUMBER : %d                      |", j++);
            printf("\n+---------------------------------------------+");
            printf("\n| Reg. no.     : %d", ptr->reg);
            printf("\n| Name         : %s", ptr->name);
            printf("\n| Age          : %d", ptr->age);
            printf("\n| Blood Group  : %s", ptr->bloodgroup);
            printf("\n| Disease      : %s", getdiseasename(ptr->priority));
            printf("\n+---------------------------------------------+\n");
            ptr = ptr->next;
        }
    }
}

// Disease table
void table()
{

    printf("\n+-----------------------------+");
    printf("\n|   Please refer this table   |");
    printf("\n|       for diseases:         |");
    printf("\n+-----------------------------+");
    printf("\n| 1. Heart attack             |");
    printf("\n| 2. Severe wound/Bleeding    |");
    printf("\n| 3. Cancer                   |");
    printf("\n| 4. Chest pain               |");
    printf("\n| 5. Fracture                 |");
    printf("\n| 6. Diabetes Checkup         |");
    printf("\n| 7. Infection                |");
    printf("\n| 8. Viral Fever              |");
    printf("\n| 9. Common Cold/Headache     |");
    printf("\n+-----------------------------+");
    printf("\n");
}

char *getdiseasename(int priority)
{
    switch (priority)
    {
    case 1:
        return "Heart attack";
        break;
    case 2:
        return "Severe wound/Bleeding";
        break;
    case 3:
        return "Cancer";
        break;
    case 4:
        return "Chest pain";
        break;
    case 5:
        return "Fracture";
        break;
    case 6:
        return "Diabetes Checkup";
        break;
    case 7:
        return "Infection";
        break;
    case 8:
        return "Viral Fever";
        break;
    case 9:
        return "Common Cold/Headache";
        break;
    default:
        return "Unknown";
        break;
    }
}
