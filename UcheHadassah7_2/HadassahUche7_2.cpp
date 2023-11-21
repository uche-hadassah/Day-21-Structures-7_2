/*a) Define a single structure data type called Book suitable for a storing details for 
books on sale. The details should include: author, title, publisher, year of publication, 
ISBN and price. 
b) Write a program that creates a Book structure variable and accepts the data of a 
book from the user and then displays the information entered.*/
#include<iostream>
#include<cstring>
using namespace std;
struct Book
{
	char title[100];
	char author[100];
	char publisher[100];
	int yearOfPublication;
	int isbn = 0;
	double price;
};
int main()
{
	Book bookDetails;
	int option;
	for(int i = 0;i<100;i++)
	{
		cout << "\nMENU";
		cout << "\n1) Enter new book";
		cout << "\n2) Display all books";
		cout << "\n3) Exit";
		cout << "\n Enter an option:";
		cin >> option;
		if(option == 1)
		{
			cout << "Enter the details of the book.";
			cout << "\nTitle:";
			cin.getline(bookDetails.title, 100);
			cout << "\nAuthor:";
			cin.getline(bookDetails.author, 100);
			cout << "Publisher:";
			cin.getline(bookDetails.publisher, 100);
			cout << "\nYear of publication:";
			cin >> bookDetails.yearOfPublication;
			cout << "\nPrice:";
			cin >> bookDetails.price;
		}
		else if (option == 2)
		{

		}
	}

}