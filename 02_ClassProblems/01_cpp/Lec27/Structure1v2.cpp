#include<iostream>
using namespace std;

struct Book inputBook(struct Book);
void displayBook(struct Book);


struct Book
{
    int book_id;
    char book_name[30];
    float book_price;

    void displayBook()
    {
        cout << "Book Id = " << book_id << " Book Name : " << book_name << " Book Price = " << book_price << endl;
    }

    void inputBook()
    {
        cout<<"Enter the Book id ,Book name , Book price:";

        cin >> book_id;
        cin.ignore();
        cin.getline(book_name,30);

        cin >> book_price;
    }
};

int main()
{
    Book b1;

    b1.inputBook();
    b1.displayBook();

    return 0;
}



