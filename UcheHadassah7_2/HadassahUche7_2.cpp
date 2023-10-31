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
struct Book 
{
	char author[50];
	char title[50];
	char publisher[100];
	Date publication;
	char ISBN[20];
	double price;
};
int main()
{

	return 0;
}
