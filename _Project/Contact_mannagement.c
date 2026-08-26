#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

void addContact() {
    struct Contact c;
    FILE *fp = fopen("contacts.dat", "ab");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter Name: ");
    scanf(" %[^\n]", c.name);
    printf("Enter Phone: ");
    scanf("%s", c.phone);
    printf("Enter Email: ");
    scanf("%s", c.email);

    fwrite(&c, sizeof(c), 1, fp);
    fclose(fp);
    printf("Contact added successfully!\n");
}

void displayContacts() {
    struct Contact c;
    FILE *fp = fopen("contacts.dat", "rb");
    if (fp == NULL) {
        printf("No contacts found.\n");
        return;
    }

    printf("\n--- Contact List ---\n");
    while (fread(&c, sizeof(c), 1, fp)) {
        printf("\nName: %s\nPhone: %s\nEmail: %s\n", c.name, c.phone, c.email);
    }
    fclose(fp);
}

void searchContact() {
    struct Contact c;
    char searchName[50];
    int found = 0;

    printf("Enter name to search: ");
    scanf(" %[^\n]", searchName);

    FILE *fp = fopen("contacts.dat", "rb");
    if (fp == NULL) {
        printf("No contacts found.\n");
        return;
    }

    while (fread(&c, sizeof(c), 1, fp)) {
        if (strcasecmp(c.name, searchName) == 0) {
            printf("\nFound Contact:\nName: %s\nPhone: %s\nEmail: %s\n", c.name, c.phone, c.email);
            found = 1;
            break;
        }
    }
    fclose(fp);

    if (!found)
        printf("Contact not found.\n");
}

void deleteContact() {
    struct Contact c;
    char deleteName[50];
    int found = 0;

    printf("Enter name to delete: ");
    scanf(" %[^\n]", deleteName);

    FILE *fp = fopen("contacts.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if (fp == NULL || temp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    while (fread(&c, sizeof(c), 1, fp)) {
        if (strcasecmp(c.name, deleteName) != 0) {
            fwrite(&c, sizeof(c), 1, temp);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove("contacts.dat");
    rename("temp.dat", "contacts.dat");

    if (found)
        printf("Contact deleted successfully.\n");
    else
        printf("Contact not found.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n==== Contact Management System ====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            addContact();
            break;
        case 2:
            displayContacts();
            break;
        case 3:
            searchContact();
            break;
        case 4:
            deleteContact();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}