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
	char author[50];
	char title[50];
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
	BookData Book[100];//This is probably wrong. I'll figure it out later

	return 0;
}
void enterBookDetail(BookData& Book)
{
	
}
void displayBookDetail(const BookData& Book)
{

}
int CreateISBN()
{
	static int count = 0;/*A static variable does not reset when the function is re - called.
	ideal for generation unique variables
	*/
	return count++;
}
