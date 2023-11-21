/*Name:Uche Hadassah
This program receives and stores the details of books on sale using structures*/
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
	Book bookDetails[MAX];
	int i = 0;
	int option;
	do
	{
		cout << "\nMENU";
		cout << "\n1) Enter new book";
		cout << "\n2) Display all books";
		cout << "\n3) Exit";
		cout << "\nEnter an option:";
		cin >> option;
		while(option < 1 || option > 3)//Incase of invalid options
		{
			cout << "Invalid. Please enter an option:";
			cin >> option;
		}
		cin.ignore();
		if(option == 1)
		{// Receives the details of the book from the user
			cout << "Enter the details of the book.";
			cout << "\nTitle:";
			cin.getline(bookDetails[i].title, MAX);
			cout << "Author:";
			cin.getline(bookDetails[i].author, MAX);
			cout << "Publisher:";
			cin.getline(bookDetails[i].publisher, MAX);
			cout << "Year of publication:";
			do
			{//Ensures the year is valid
				cin >> bookDetails[i].yearOfPublication;
				while (bookDetails[i].yearOfPublication < 1 || bookDetails[i].yearOfPublication > 2023)
				{
					cout << "Invalid year. Please enter the year of publication:";
					cin >> bookDetails[i].yearOfPublication;
				}
			} while (bookDetails[i].yearOfPublication < 1 || bookDetails[i].yearOfPublication > 2023);
			bookDetails[i].isbn = i;
			cout << "Price:";
			do
			{//Ensures the price is valid
				cin >> bookDetails[i].price;
				while (bookDetails[i].price <= 0.0 )
				{
					cout << "Invalid price. Please enter the price of the book:";
					cin >> bookDetails[i].price;
				}
			} while (bookDetails[i].price <= 0.0);
			i++;
		}
		else if (option == 2)
		{//Prints ot the details of all books
			int j = 0;
			do
			{
				for(;j < i;j++)//Prints out the details of every book
				{
					cout << "\n" << j + 1 << ") " << bookDetails[j].title << " written by " << bookDetails[j].author
						<< " and published by " << bookDetails[j].publisher << " in the year " << bookDetails[j].yearOfPublication
						<< "\nISBN:BOOK00" << bookDetails[j].isbn << "\nPrice:$" << bookDetails[j].price;
				}
				if (i == 0)//If no book was entered
				{
						cout << "No book has been entered.";
				}
			} while (j < i);
		}
		else
		{
			cout << "\nThank you for your time^^";
		}
		
	} while (option != 3 && i < 100);

}