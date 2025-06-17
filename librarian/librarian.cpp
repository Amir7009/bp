// In The Name Of Allah
// Please run the program in full screen mode.
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iomanip>
#define SIZE 1000
using namespace std;

struct library {
    char title [41];
    char author [41];
    long long int ISBN;// When entering ISBN of books please use numbers only.
    int quantity;
    int publication;// for year of publication
}book[SIZE];

struct system_b { // for lending books
    long long int ISBN;
    char name [31];
    char number [12];
    bool is_borrowed;
}lend[SIZE];// There may be more books.

void addbook ( library *book, int &n );
void Search_by_title ( library *lib, int n );
void Search_by_author ( library *lib, int n );
void Search_by_ISBN ( library *lib, int n );
int edit_by_ISBN ( library *lib, int n );
void delete_book ( library *lib, int n, int pos );
void borrow_book ( library *book, system_b *lend, int n, int &num );
void return_book ( library *book, system_b *lend, int n, int &num );
void check_book ( library *book, system_b *lend, int n, int &num );

int main (){
    static int cnt=0, cnt2=0;
    cout << "Welcome!\n";
    int select, key=1; // for select case and break cycle.
    while ( key != 0 ){
        cout << "\n* * * * * * * * * *\n1-Books management\n2-Show books list\n3-Search a book\n4-Lending service\n5-Exit\n* * * * * * * * * *\n\nEnter your choice:  ";
        cin >> select ;
        switch ( select ){
        case 1:{
            int select1, key1=1;
            while ( key1 != 0 ){
                cout << "\n* * * * * * * * * *\n1-Add a book\n2-Remove a book\n3-Edit a book\n4-Back\n* * * * * * * * * *\n\nEnter your choice:  ";
                cin >> select1 ;
                switch ( select1 ){
                case 1:
                    {
                        addbook ( book, cnt );
                        break;
                    }
                case 2:
                    {
                        int n;
                        n = (edit_by_ISBN (book, cnt ));
                        if ( n == -1 )
                            cout << "\nNot found\n";
                        else
                            {
                                delete_book ( book, cnt, n );
                                cnt--;
                            }
                        break;
                    }
                case 3:
                    {
                        int n;
                        n = (edit_by_ISBN ( book, cnt ));
                        if ( n == -1 )
                            cout << "\nNOt found\n";
                        else
                        {
                            int select5, key5=1;
                            while ( key5 != 0 ){
                                cout << "\n* * * * * * * * * *\nWhat information do you want to change?\n\n\n1-Title\n2-Author\n3-Quantity\n4-Year\n5-back\n* * * * * * * * * *\n\nEnter your choice:  ";
                                cin >> select5;
                                switch ( select5 ){
                                case 1:
                                    {
                                        cout << "\nEnter new title:  ";
                                        cin.ignore();
                                        cin.getline ( book[n].title, 41 );
                                        cout << "\nChanges have been applied.\n";
                                        break;
                                    }
                                case 2:
                                    {
                                        cout << "\nEnter new author:  ";
                                        cin.ignore();
                                        cin.getline ( book[n].author, 41 );
                                        cout << "\nChanges have been applied.\n";
                                        break;
                                    }
                                case 3:
                                    {
                                        cout << "\nEnter new quantity:  ";
                                        cin >> book[n].quantity;
                                        cout << "\nChanges have been applied.\n";
                                        break;
                                    }
                                case 4:
                                    {
                                        cout << "\nEnter new year:  ";
                                        cin >> book[n].publication;
                                        cout << "\nChanges have been applied.\n";
                                        break;
                                    }
                                case 5:
                                    {
                                        key5 = 0;
                                        break;
                                    }
                                default:
                                    {
                                        cout << "\nEnter number of service that do you will to get.\n";
                                    }
                                }//s no 5
                            }// w no 5
                        }
                        break;
                    }
                case 4:
                    {
                        key1 = 0;
                        break;
                    }
                default:
                    {
                        cout << "\nEnter number of service that do you will to get.\n";
                    }
                }// s no 1
            }// w no 1
            break;
        }// c no 1


        case 2:{
            cout << left;
            cout << "| "
                 << setw(45) << "num: Title:" << " | "
                 << setw(40) << "Author:" << " | "
                 << setw(14) << "ISBN:" << " | "
                 << setw(5)  << "Count:" << " | "
                 << setw(4)  << "Year:" << " | " << endl <<endl;
            for (int i=0 ; i < cnt ; i++ ){
                cout << "| " << setw(4) << i+1 << " "
                     << setw(40) << book[i].title << " | "
                     << setw(40) << book[i].author << " | "
                     << setw(14) << book[i].ISBN << " | "
                     << setw(6)  << book[i].quantity << " | "
                     << setw(5)  << book[i].publication << " | " << endl;
            }
            break;;
        }// c no 2


        case 3:{
            int select3, key3=1;
            while ( key3 != 0 ){
                cout << "\n* * * * * * * * * *\n1-Search by title\n2-Search by author\n3-Search by ISBN\n4-back\n* * * * * * * * * *\n\nEnter your choice:  ";
                cin >> select3 ;
                switch ( select3 ){
                case 1:
                    {
                        Search_by_title ( book, cnt);
                        break;
                    }
                case 2:
                    {
                        Search_by_author ( book, cnt);
                        break;
                    }
                case 3:
                    {
                        Search_by_ISBN ( book, cnt);
                        break;
                    }
                case 4:
                    {
                        key3 = 0;
                        break;
                    }
                default:
                    {
                        cout << "\nEnter number of service that do you will to get.\n";
                    }
                }// s no 3
            }// w no 3
            break;
        }// c no 3


        case 4:{
            int select4, key4=1;
            while ( key4 != 0 ){
                cout << "\n* * * * * * * * * *\n1-Borrow a book\n2-Return a borrowed book\n3-Book status check\n4-All loan books list\n5-Unreturned books\n6-back\n* * * * * * * * * *\n\nEnter your choice:  ";
                cin >> select4 ;
                switch ( select4 ){
                case 1:
                    {
                        int n;
                        n = (edit_by_ISBN (book, cnt ));
                        if ( n == -1 )
                            cout << "\nNot found!\n";
                        else
                            {
                                borrow_book ( book, lend, n, cnt2 );
                            }
                        break;
                    }
                case 2:
                    {
                        int n;
                        n = (edit_by_ISBN (book, cnt ));
                        if ( n == -1 )
                            cout << "\nNot found!\n";
                        else
                            {
                                return_book ( book, lend, n, cnt2 );
                            }
                        break;
                    }
                case 3:
                    {
                        int n;
                        n = (edit_by_ISBN (book, cnt ));
                        if ( n == -1 )
                            cout << "\nNot found!\n";
                        else
                            {
                                check_book ( book, lend, n, cnt2 );
                            }
                        break;
                    }
                case 4:
                    {
                        cout << left;
                        cout << "| "
                             << setw(15) << "num: ISBN:" << " | "
                             << setw(30) << "name:" << " | "
                             << setw(11) << "phone:" << " | "
                             << setw(12)  << "status:" << " | "
                             << endl <<endl;
                        for (int i=0 ; i < cnt2 ; i++ ){
                            cout << "| " << setw(4) << i+1 << " "
                                 << setw(10) << lend[i].ISBN << " | "
                                 << setw(30) << lend[i].name << " | "
                                 << setw(11) << lend[i].number << " | ";
                                 if ( lend[i].is_borrowed )
                                    cout << setw(12) << "not returned" << " | " << endl;
                                 else
                                    cout << setw(12) << "returned" << " | " << endl;
                        }
                        break;;
                    }
                case 5:
                    {
                        cout << left;
                        cout << "| "
                             << setw(15) << "num: ISBN:" << " | "
                             << setw(30) << "name:" << " | "
                             << setw(11) << "phone:" << " | "
                             << setw(12)  << "status:" << " | "
                             << endl <<endl;
                        for (int i=0 ; i < cnt2 ; i++ ){
                            if ( lend[i].is_borrowed ){
                                cout << "| " << setw(4) << i+1 << " "
                                     << setw(10) << lend[i].ISBN << " | "
                                     << setw(30) << lend[i].name << " | "
                                     << setw(11) << lend[i].number << " | "
                                     << setw(12) << "not returned" << " | " << endl;
                            }
                        }
                        break;;
                    }
                case 6:
                    {
                        key4 = 0;
                        break;
                    }
                default:
                    {
                        cout << "\nEnter number of service that do you will to get.\n";
                    }
                }// s no 4
            }// w no 4
            break;
        }// c no 4


        case 5:{
            return 0;
        }// c no 5


        default:
            {
                cout << "\nEnter number of service that do you will to get.\n";
            }

        }// s no 0
    }// w no 0
}

void addbook ( library *book, int &n ){
    n++;
    int t=1;
    cout << "\nEnter book's name:\t";
    cin.ignore();
    cin.getline ( book[n-1].title, 41 );
    cout << "\nEnter author's name:\t";
    cin.getline ( book[n-1].author, 41 );
    cout << "\nEnter ISBN:\t";
    cin >> book[n-1].ISBN ;
    for ( int i=0 ; i < n-1 ; i++ )
        if ( book[i].ISBN == book[n-1].ISBN ){
            cout << "\nThe ISBN is duplicated.\n";
            n--;
            t=0;
            break;
        }
        if (t){
            cout << "\nEnter count of the book:\t";
            cin >> book[n-1].quantity ;
            cout << "\nEnter the year of publication:\t";
            cin >> book[n-1].publication ;
        }
}

void Search_by_title ( library *lib, int n ){
    cout << "\nEnter the title of book:\t";
    char x[41];
    int ch=0;
    cin.ignore();
    cin.getline ( x, 41 );
    cout << "\n# # # # # # # # # #";
    for ( int i=0 ; i < n ; i++ ){
        if ( (strcmp ( book[i].title , x)) == 0 ){
            ch++;
            cout << "\n" << ch << ":\n";
            cout << "\nTitle:    " << lib[i].title;
            cout << "\nAuthor:   " << lib[i].author;
            cout << "\nISBN:     " << lib[i].ISBN;
            cout << "\nQuantity: " << lib[i].quantity;
            cout << "\nYear:     " << lib[i].publication << "\n";
        }
    }
    if ( !ch )
        cout << "\n\nNot found!\n\n";
    cout << "# # # # # # # # # #\n";
}

void Search_by_author ( library *lib, int n ){
    cout << "\nEnter the author of book:\t";
    char x[41];
    int ch=0;
    cin.ignore();
    cin.getline ( x, 41 );
    cout << "\n# # # # # # # # # #\n";
    for ( int i=0 ; i < n ; i++ ){
        if ( (strcmp ( book[i].author , x)) == 0 ){
            ch++;
            cout << "\n" << ch << ":\n";
            cout << "\nTitle:    " << lib[i].title;
            cout << "\nAuthor:   " << lib[i].author;
            cout << "\nISBN:     " << lib[i].ISBN;
            cout << "\nQuantity: " << lib[i].quantity;
            cout << "\nYear:     " << lib[i].publication << "\n";
        }
    }
    if ( !ch )
        cout << "\n\nNot found!\n\n";
    cout << "# # # # # # # # # #\n";
}

void Search_by_ISBN ( library *lib, int n ){
    cout << "\nEnter the ISBN of book:\t";
    long long int x;
    int ch=0;
    cin >> x;
    cout << "\n# # # # # # # # # #\n";
    for ( int i=0 ; i < n ; i++ ){
        if ( book[i].ISBN == x ){
            ch++;
            cout << "\n" << ch << ":\n";
            cout << "\nTitle:    " << lib[i].title;
            cout << "\nAuthor:   " << lib[i].author;
            cout << "\nISBN:     " << lib[i].ISBN;
            cout << "\nQuantity: " << lib[i].quantity;
            cout << "\nYear:     " << lib[i].publication << "\n";
        }
    }
    if ( !ch )
        cout << "\n\nNot found!\n\n";
    cout << "# # # # # # # # # #\n";
}

int edit_by_ISBN ( library *lib, int n ){
    cout << "\nEnter the ISBN of book:\t";
    long long int x;
    int pos;
    cin >> x;
    for ( pos=0 ; pos < n ; pos++ ){
        if ( book[pos].ISBN == x ){
            return pos;
        }
    }
    return -1;
}

void delete_book ( library *lib, int n, int pos ){
    for(int j = pos ; j < n-1 ; j++){
        book[j]=book[j+1];
    }
    cout <<"\nBook was deleted.\n";
}

void borrow_book ( library *book, system_b *lend, int n, int &num ){
    if ( book[n].quantity ){
        num++;
        book[n].quantity--;
        cout << "\nEnter your name:  ";
        cin.ignore();
        cin.getline ( lend[num-1].name, 31 );
        cout << "\nEnter your phone number:( 11 digits! )  ";
        cin.getline ( lend[num-1].number, 12 );
        lend[num-1].is_borrowed = 1;
        lend[num-1].ISBN = book[n].ISBN;
        cout << "\n**Successful**\n";
    }
    else
        cout << "\nThis book is currently unavailable!\n";
}

void return_book ( library *book, system_b *lend, int n, int &num ){
    char tmp_n[31], tmp_ph[12];
    cout << "\nEnter your name:  ";
    cin.ignore();
    cin.getline ( tmp_n, 31 );
    cout << "\nEnter your phone number:( 11 digits! )  ";
    cin.getline ( tmp_ph, 12 );
    for ( int i=0 ; i < num ; i++ ){
        if ( (book[n].ISBN == lend[i].ISBN) && (strcmp(tmp_n, lend[i].name)==0) && (strcmp(tmp_ph, lend[i].number)==0) ){
            lend[i].is_borrowed = 0;
            book[n].quantity++;
            cout << "\n**Successful**\n";
            return;
        }
    }
    cout << "\nNot found!";
}

void check_book ( library *book, system_b *lend, int n, int &num ){
    char tmp_n[31], tmp_ph[12];
    cout << "\nEnter your name:  ";
    cin.ignore();
    cin.getline ( tmp_n, 31 );
    cout << "\nEnter your phone number:( 11 digits! )  ";
    cin.getline ( tmp_ph, 12 );
    for ( int i=0 ; i < num ; i++ ){
        if ( (book[n].ISBN == lend[i].ISBN) && (strcmp(tmp_n, lend[i].name)==0) && (strcmp(tmp_ph, lend[i].number)==0) ){
            if ( lend[i].is_borrowed )
                cout << "\nThe book has Not returned yet.\n";
            else
                cout << "\nthe book has been returned successfully.\n";
            return;
        }
    }
    cout << "\nNot found!\n";
}
