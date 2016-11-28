#include"Book.h"

Book::Book(const Book& a)
{
	
}


void Book::CopyIndex(const Book* c)
{
	
}

void Book:: Print()
{
	
}

Book Book::operator =(const Book& a)
{
	return *this;
}

bool Book:: cmpA(Book book)
{
	return false;
}

bool Book:: cmpN(Book book)
{
	return false;
}

bool Book::cmpY(Book book)
{
	return false;
}

char Book:: Author(int i )
{
	return 0;
}

char Book:: Name(int i)
{
	return 0;
}

int Book:: Year()
{
	return 0;
}

void Book:: WreatA(const char* str )
{

}

void Book:: WreatN(const char* str )
{

}

void Book:: WreatY(int i )
{
}


Book::~Book()
{
	delete [] author;
	delete [] name;
}

