/*Uche Hadassah
* a) Define a single structure data type called Book suitable for a storing details for 
books on sale. The details should include: author, title, publisher, year of publication, 
ISBN and price. 
b) Write a program that creates a Book structure variable and accepts the data of a 
book from the user and then displays the information entered.
*/
#include<iostream>
#include<cstring>

using namespace std;
struct Date 
{
	int day;
	int month;
	int year;
};
struct BookData
{
	char title[50];
	char author[50];
	char publisher[100];
	Date publication;
	char ISBN[20];//Make this unique for every book
	double price;
};
//Function Prototypes
void enterBookDetail(BookData&);
void displayBookDetail(const BookData&);//I dont get why this is passed as a constant
int CreateISBN();
int main()
{
	BookData Book[100];// Array stores 100 books
	int bookCount = 0;
	int Option;
	do

	{
		cout << "Menu" << endl;
		cout << "1) Enter new book" << endl;
		cout << "2) Display all books" << endl;
		cout << "3) Display book by index" << endl;
		cout << "4) Display book by Author" << endl;
		cout << "5) Display book by Title" << endl;
		cout << "6) Display  by publisher" << endl;
		cout << "7) Exit" << endl;
		cout << " Enter your choice:";
		cin >> Option;
		cin.ignore();
		if (Option == 1)
		{
			if (bookCount < 100)
			{
				enterBookDetail(Book[bookCount]);
				bookCount++;
			}
			else
			{
				cerr << "No more room to store more books" << endl;
			}
		}
		else if (Option == 2)
		{
			for (int i = 0; i < bookCount; i++)
			{
				displayBookDetail(Book[i]);
			}
		}
	} while (Option < 1);
	
	return 0;
}
void enterBookDetail(BookData& Book)
{
	cout << "Enter Title:";
	cin.getline(Book.title, 50);
	cout << "Enter Author:";
	cin.getline(Book.author, 50);
	cout << "Enter Publisher:";
	cin.getline(Book.publisher, 50);
	cout << "Enter date of publication.";
	cout << "\nYear:";
	cin >> Book.publication.year;
	//Have to verify the user input. NEVER TRUST THE USER
	while (Book.publication.year < 0 || Book.publication.year > 2023)
	{
		if (Book.publication.year > 0 && Book.publication.year <= 2023)//Verify that the date is within bounds
		{

			if (Book.publication.year % 4 != 0)
			{
				do
				{
					cout << "Month:";
					cin >> Book.publication.month;
					if (Book.publication.month == 2)
					{
						do
						{
							cout << "Day:";
							cin >> Book.publication.day;
						} while (Book.publication.day > 0 && Book.publication.day <= 28);
					}
					else if (Book.publication.month == 4 || Book.publication.month == 6 || Book.publication.month == 9 || Book.publication.month == 11)
					{
						do
						{
							cout << "Day:";
							cin >> Book.publication.day;
						} while (Book.publication.day > 0 && Book.publication.day <= 30);
					}
					else
					{
						do
						{
							cout << "Day:";
							cin >> Book.publication.day;
						} while (Book.publication.day > 0 && Book.publication.day <= 31);
					}
				} while (Book.publication.month > 0 && Book.publication.month <= 12);//Verify that the month is within bounds
			}
			else if (Book.publication.year % 4 == 0)
			{
				do
				{
					cout << "Month:";
					cin >> Book.publication.month;
					if (Book.publication.month == 2)
					{
						do
						{
							cout << "Day:";
							cin >> Book.publication.day;
						} while (Book.publication.day > 0 && Book.publication.day <= 29);
					}
					else if (Book.publication.month == 4 || Book.publication.month == 6 || Book.publication.month == 9 || Book.publication.month == 11)
					{
						do
						{
							cout << "Day:";
							cin >> Book.publication.day;
						} while (Book.publication.day > 0 && Book.publication.day <= 30);
					}
					else
					{
						do
						{
							cout << "Day:";
							cin >> Book.publication.day;
						} while (Book.publication.day > 0 && Book.publication.day <= 31);
					}
				} while (Book.publication.month > 0 && Book.publication.month <= 12);//Verify that the month is within bounds
			}

		}
		else
		{
			cout << "invalid year!";
		}
	}

	
	// Get the price from the user
	do
	{
		cout << "Enter the price of the book:";
		cin >> Book.price;
	} while (Book.price < 0.0);// verify that the price is not less than 0
}
int CreateISBN()
{
	static int count = 001;/*A static variable does not reset when the function is re - called.
	ideal for generation unique variables
	*/
	return count++;
}
void displayBookDetail(const BookData& Book)
{
	cout << "Book Details:" << Book.title << " by " << Book.author << endl;
	cout << "Published by " << Book.publisher << " on " << Book.publication.day << "/" << Book.publication.month << "/" << Book.publication.year << endl;
	cout << "ISBN:" << Book.ISBN << endl;
	cout << "Price:" << Book.price << endl;
}

