#include<iostream>
using namespace std;

struct Book inputBook(struct Book);
void displayBook(struct Book);


struct Book
{
    int book_id;
    char book_name[30];
    float book_price;
};

int main()
{
    struct Book b1;

    b1 = inputBook(b1);
    displayBook(b1);

    return 0;
}

struct Book inputBook(struct Book b)
{
    cout<<"Enter the Book id ,Book name , Book price:";
    // cin>> b.book_id >>  >> b.book_price ;

    // BLUNDER -
    // b.book_name = "Mathematics book";
    // Use - strcpy() -> in string.h header of C language

    // NOTE - Here instead of using fflush() you have to use cin.ignore()
    // NOTE - To take input of string line with spaces you could use fgets() 
    // but in c++ you also have cin.getline() .

    cin >> b.book_id;
    cin.ignore();
    cin.getline(b.book_name,30);

    cin >> b.book_price;

    return b;
}

void displayBook(struct Book b)
{
    cout << "Book Id = " << b.book_id << " Book Name : " << b.book_name << " Book Price = " << b.book_price << endl;
}