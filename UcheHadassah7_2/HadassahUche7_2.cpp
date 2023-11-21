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
	char author[100];
	char title[100];
	char publisher[100];
	int yearOfPublication;
	int isbn = 0;
	double price;
};