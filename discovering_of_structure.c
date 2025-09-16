#include <stdio.h>

int main() {
    // TODO: Define your Book struct here
    struct Book {
        int id;
        char title[50];
        int pages;
        float price;
    };
    
    // Print confirmation message
    printf("Book struct defined successfully!\n");
    
    // TODO: Print the size of the Book struct and its members
    int idsize = sizeof(int);
    int titlesize = 50*sizeof(char);
    int pagesize = sizeof(int);
    int pricesize = sizeof(float);
    int bksize = idsize + titlesize + pagesize + pricesize;
    int size = sizeof(struct Book);
    printf("Size of Book struct: %lu bytes\n",size);
    printf("Size of id: %zu bytes\n",idsize);
    printf("Size of title: %zu bytes\n",titlesize);
    printf("Size of pages: %zu bytes\n",pagesize);
    printf("Size of price: %zu bytes\n",pricesize);
    
    
    return 0;
}
