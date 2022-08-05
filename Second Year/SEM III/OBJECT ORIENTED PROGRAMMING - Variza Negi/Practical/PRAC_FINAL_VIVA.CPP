/*1ST QUESTION
#include<iostream>
#include<string.h>
using namespace std;
class Account
{
    int bal,dep,wid_amt,acc_no;
    char name[30];
public:
    void Acc_Details();
    void GetBalance();
    void Deposit();
    void Withdraw();
    void Display();
};
inline void Account :: Acc_Details()
{
    cout<<"Enter your Name :: ";
    cin>>name;
    cout<<"\nEnter your account number :: ";
    cin>>acc_no;
}
inline void Account :: GetBalance()
{
    cout<<"\nEnter the balance of your account :: ";
    cin>>bal;
}

inline void Account :: Deposit()
{
    cout<<"\nEnter the amount you want to deposit in your account :: ";
    cin>>dep;
}

inline void Account :: Withdraw()
{
    cout<<"\nEnter the amount you want to withdraw from your account :: ";
    cin>>wid_amt;
}

inline void Account :: Display()
{
    cout<<"\nName of the Account holder:: "<<name;
    cout<<"\nAccount number:: "<<acc_no;
    cout<<"\nBalance in the account:: "<<bal;
    cout<<"\nAmount deposited in your account:: "<<dep;
    cout<<"\nAmount withdrawn from your account:: "<<wid_amt;
}

int main()
{
    Account acc;
    acc.Acc_Details();
    acc.GetBalance();
    acc.Deposit();
    acc.Withdraw();
    acc.Display();
    return 0;
}
*/

//2ND QUESTION
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class Book
{
    private:
      int pages;
      char title[30],author[30];
    public:
        void read()
        {
            cout<<"\nEnter Name of Book: ";
            cin>>title;
            cout<<"\nEnter Author of Book: ";
            cin>>author;
            cout<<"\nEnter Number if Pages of Book: ";
            cin>>pages;
        }
        void display()
        {
            cout<<"\n\nName of Book: "<<title;
            cout<<"\n\nAuthor of Book: "<<author;
            cout<<"\n\nNumber of Pages of Book: "<<pages;
        }
};

class TextBook : public Book
{
    private:
        int chapters,assignments;
    protected:
        int standard;
        void readtextBook()
{
                    cout<<"\nEnter number of chapters of the book:";
                    cin>>chapters;
                    cout<<"\nEnter number of assignments of the book:";
                    cin>>assignments;
                }

        void showtextbook()
{
                    cout<<"\n\nNumber of chapters of the book:"<<chapters;
                    cout<<"\n\nNumber of assignments of the book:"<<assignments;
                }

};

class PhysicsBook : public TextBook
{
    private:
        int topic,assignment;
    public:
        void readPhysicsbook()
        {
              readtextBook();
            cout<<"\nEnter number of topics of the Physics book:";
            cin>>topic;
            cout<<"\nEnter number of assignments of the Physics book:";
            cin>>assignment;
        }
        void display()
        {
                showtextbook();
            cout<<"\n\nNumber of topics of the Physics book:"<<topic;
            cout<<"\n\nNumber of assignments of the Physics book:"<<assignment;
        }
};

int main()
{
    TextBook b;
    PhysicsBook p;
    cout<<"\t Data Input";
    b.Book::read();
    p.readPhysicsbook();
    cout<<"\n\n\t Data Output";
    b.Book::display();
    p.display();
    return 0;
}
