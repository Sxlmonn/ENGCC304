#include <stdio.h>
#include <string.h>

// กำหนด structure ของหนังสือ
typedef struct {
    int bookID;
    char title[100];
    char author[100];
    int year;
} Book;

// ฟังก์ชันเพิ่มหนังสือใหม่
void addBook(Book books[], int *count) {
    if (*count >= 100) {
        printf("Library is full! Cannot add more books.\n");
        return;
    }
    
    printf("Enter Book ID: ");
    scanf("%d", &books[*count].bookID);
    getchar(); // รับ newline
    
    printf("Enter Title: ");
    fgets(books[*count].title, sizeof(books[*count].title), stdin);
    books[*count].title[strcspn(books[*count].title, "\n")] = 0; // ลบ newline
    
    printf("Enter Author: ");
    fgets(books[*count].author, sizeof(books[*count].author), stdin);
    books[*count].author[strcspn(books[*count].author, "\n")] = 0; // ลบ newline
    
    printf("Enter Year: ");
    scanf("%d", &books[*count].year);
    
    (*count)++;
    printf("Book added successfully!\n");
}

// ฟังก์ชันค้นหาหนังสือตามชื่อ
void searchBook(Book books[], int count, char title[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Book ID: %d\n", books[i].bookID);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Year: %d\n", books[i].year);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Book not found.\n");
    }
}

// ฟังก์ชันแสดงหนังสือทั้งหมด
void displayBooks(Book books[], int count) {
    if (count == 0) {
        printf("No books in the library.\n");
        return;
    }
    
    for (int i = 0; i < count; i++) {
        printf("Book ID: %d\n", books[i].bookID);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year: %d\n", books[i].year);
        printf("----------------------------\n");
    }
}

int main() {
    Book books[100]; // อาเรย์สำหรับเก็บหนังสือสูงสุด 100 เล่ม
    int count = 0;   // จำนวนหนังสือปัจจุบัน
    int choice;
    char searchTitle[100];
    
    do {
        // แสดงเมนู
        printf("\nLibrary Management System\n");
        printf("1. Add New Book\n");
        printf("2. Search Book by Title\n");
        printf("3. Display All Books\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        getchar(); // รับ newline
        
        switch (choice) {
            case 1:
                addBook(books, &count);
                break;
            case 2:
                printf("Enter Title to Search: ");
                fgets(searchTitle, sizeof(searchTitle), stdin);
                searchTitle[strcspn(searchTitle, "\n")] = 0; // ลบ newline
                searchBook(books, count, searchTitle);
                break;
            case 3:
                displayBooks(books, count);
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid option! Please try again.\n");
        }
    } while (choice != 4);
    
    return 0;
}   