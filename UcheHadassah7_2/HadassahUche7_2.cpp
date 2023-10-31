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
	BookData Book = {"Forced Love, Forged Hearts","Uche Hadassah","Emyrixx",30,5,2023,"EM0001",25.00};//This is probably wrong. I'll figure it out later
	displayBookDetail(Book);
	return 0;
}
void enterBookDetail(BookData& Book)
{
	
}
void displayBookDetail(const BookData& Book)
{
	cout << "Book Details:" << Book.title << " by " << Book.author << endl;
	cout << "Published by " << Book.publisher << " on " << Book.publication.day << "/" << Book.publication.month << "/" << Book.publication.year << endl;
	cout << "ISBN:" << Book.ISBN << endl;
	cout << "Price:" << Book.price << endl;
}
int CreateISBN()
{
	static int count = 0;/*A static variable does not reset when the function is re - called.
	ideal for generation unique variables
	*/
	return count++;
}
