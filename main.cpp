#include <iostream>
#include "date.h"
#include "Livre.h"

int main() {
	date today(3, 14, 2024);
	Auteur auteur(1, "Fitzgerald", "F. Scott", date(9, 24, 1896));
	
	Livre book( "The Great Gatsby", auteur, "English", 
		"Fiction", date(4, 10, 1925), 9780743273565);

	auteur = book.getAuteur();

	std::cout << "Book Title: " << book.getTitre() << std::endl;
	std::cout << "Auteur : " << auteur.getId()   << std::endl;

	std::cout << "Today's date is: "<< today.month() 
		<< "/"<< today.day() << "/"
		<< today.year() << std::endl;

	return 0;
}