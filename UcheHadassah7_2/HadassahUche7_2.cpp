/*a) Define a single structure data type called Book suitable for a storing details for 
books on sale. The details should include: author, title, publisher, year of publication, 
ISBN and price. 
b) Write a program that creates a Book structure variable and accepts the data of a 
book from the user and then displays the information entered.*/
#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 100;
struct Book
{
	char title[100];
	char author[100];
	char publisher[100];
	int yearOfPublication;
	int isbn;
	double price;
};
int main()
{
	Book bookDetails[100];
	int i = 0;
	int option;
	do
	{
		cout << "MENU";
		cout << "\n1) Enter new book";
		cout << "\n2) Display all books";
		cout << "\n3) Exit";
		cout << "\n Enter an option:";
		cin >> option;
		while(option < 1 || option > 3)
		{
			cout << "Invalid. Please enter an option:";
			cin >> option;
		}
		cin.ignore();
		if(option == 1)
		{
			cout << "Enter the details of the book.";
			cout << "\nTitle:";
			cin.getline(bookDetails[i].title, 100);
			cout << "\nAuthor:";
			cin.getline(bookDetails[i].author, 100);
			cout << "\nPublisher:";
			cin.getline(bookDetails[i].publisher, 100);
			cout << "\nYear of publication:";
			cin >> bookDetails[i].yearOfPublication;
			cout << "\nPrice:";
			cin >> bookDetails[i].price;
			i++;
		}
		else if (option == 2)
		{
			int j = 0;
			bookDetails[j].isbn = 0;
			for(;j<i;j++,bookDetails[j].isbn++)
			{

				cout << "\nTitle:" << bookDetails[j].title;
				cout << "\nAuthor:" << bookDetails[j].author;
				cout << "\nPublisher:" << bookDetails[j].publisher;
				cout << "\nYear of publication:" << bookDetails[j].yearOfPublication;
				cout << "\nISBN:EMYR" << bookDetails[j].isbn;
				cout << "\nPrice:" << bookDetails[j].price;
				
			}
			cout << endl;
		}
		else
		{
			cout << "Thank you for your time^^";
		}
		
	} while (option != 3 && i < 100);

}