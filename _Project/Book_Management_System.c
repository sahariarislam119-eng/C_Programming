#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    int id;
    char title[50];
    char author[50];
    float price;
    int quantity;
};

void addBook(struct Book books[], int *count);
void displayBooks(struct Book books[], int count);
void searchBook(struct Book books[], int count);
void updateBook(struct Book books[], int count);

int main() {
    struct Book books[MAX_BOOKS];
    int count = 0; 
    int choice;

    do {
        printf("\n========================================\n");
        printf("       BOOK MANAGEMENT SYSTEM           \n");
        printf("========================================\n");
        printf("1. Add a New Book\n");
        printf("2. Display All Books\n");
        printf("3. Search for a Book (by ID)\n");
        printf("4. Update Book Quantity\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                addBook(books, &count);
                break;
            case 2:
                displayBooks(books, count);
                break;
            case 3:
                searchBook(books, count);
                break;
            case 4:
                updateBook(books, count);
                break;
            case 5:
                printf("\nExiting Book Management System. Goodbye! 👋\n");
                break;
            default:
                printf("\nInvalid choice! Please choose between 1 and 5.\n");
        }
    } while (choice != 5);

    return 0;
}

void addBook(struct Book books[], int *count) {
    if (*count >= MAX_BOOKS) {
        printf("\nError: Library inventory is full!\n");
        return;
    }

    printf("\n--- Add New Book ---\n");
    printf("Enter Book ID: ");
    scanf("%d", &books[*count].id);

    while (getchar() != '\n');

    printf("Enter Book Title: ");
    fgets(books[*count].title, sizeof(books[*count].title), stdin);
    books[*count].title[strcspn(books[*count].title, "\n")] = 0; 

    printf("Enter Author Name: ");
    fgets(books[*count].author, sizeof(books[*count].author), stdin);
    books[*count].author[strcspn(books[*count].author, "\n")] = 0;

    printf("Enter Price ($): ");
    scanf("%f", &books[*count].price);

    printf("Enter Quantity: ");
    scanf("%d", &books[*count].quantity);

    (*count)++;
    printf("\nBook added successfully! 🎉\n");
}

// Function to display all books
void displayBooks(struct Book books[], int count) {
    if (count == 0) {
        printf("\nNo books available in the inventory.\n");
        return;
    }

    printf("\n--- Library Inventory ---\n");
    printf("%-5s | %-25s | %-20s | %-8s | %-8s\n", "ID", "Title", "Author", "Price", "Qty");
    printf("--------------------------------------------------------------------\n");
    
    for (int i = 0; i < count; i++) {
        printf("%-5d | %-25s | %-20s | $%-7.2f | %-8d\n", 
               books[i].id, 
               books[i].title, 
               books[i].author, 
               books[i].price, 
               books[i].quantity);
    }
}

void searchBook(struct Book books[], int count) {
    if (count == 0) {
        printf("\nInventory is empty. Nothing to search.\n");
        return;
    }

    int searchId, found = 0;
    printf("\nEnter Book ID to search: ");
    scanf("%d", &searchId);

    for (int i = 0; i < count; i++) {
        if (books[i].id == searchId) {
            printf("\nBook Found! 📖\n");
            printf("ID: %d\n", books[i].id);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Price: $%.2f\n", books[i].price);
            printf("Quantity Available: %d\n", books[i].quantity);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nBook with ID %d not found.\n", searchId);
    }
}

void updateBook(struct Book books[], int count) {
    if (count == 0) {
        printf("\nInventory is empty.\n");
        return;
    }

    int searchId, found = 0;
    printf("\nEnter Book ID to update quantity: ");
    scanf("%d", &searchId);

    for (int i = 0; i < count; i++) {
        if (books[i].id == searchId) {
            printf("Current Quantity for '%s': %d\n", books[i].title, books[i].quantity);
            printf("Enter new quantity: ");
            scanf("%d", &books[i].quantity);
            printf("\nQuantity updated successfully! ✅\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nBook with ID %d not found.\n", searchId);
    }
}