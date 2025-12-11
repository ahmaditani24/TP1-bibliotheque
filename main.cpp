#include <iostream>
#include "date.h"
#include "Livre.h"
#include "Auteur.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "Bibliotheque.h"

int main() {

	Livre book1("1984", Auteur(2, "Orwell", "George", date(6, 25, 1903)), "English", 
		"Dystopian", date(6, 8, 1949), 9780451524935);
	Livre book2("Le Petit Prince", Auteur(3, "Saint-Exupéry", "Antoine de", date(6, 29, 1900)), "French",
		"Fable", date(4, 6, 1943), 9782070612758);
	Livre book3("Cien años de soledad", Auteur(4, "García Márquez", "Gabriel", date(3, 6, 1927)), "Spanish",
		"Magic Realism", date(5, 30, 1967), 9780307474728);
	Livre book4("Die Verwandlung", Auteur(5, "Kafka", "Franz", date(7, 3, 1883)), "German",
		"Absurdist Fiction", date(10, 1, 1915), 9783150092175);
	Livre book5("War and Peace", Auteur(6, "Tolstoy", "Leo", date(9, 9, 1828)), "Russian",
		"Historical Fiction", date(1, 1, 1869), 9780199232765);

	Auteur auteur1 = book1.getAuteur();
	Auteur auteur2 = book2.getAuteur();
	Auteur auteur3 = book3.getAuteur();
	Auteur auteur4 = book4.getAuteur();
	Auteur auteur5 = book5.getAuteur();

	Lecteur lecteur1("JDoe", "John", "Doe");
	Lecteur lecteur2("ASmith", "Alice", "Smith");
	Lecteur lecteur3("RBrown", "Robert", "Brown");





	/*date today(3, 14, 2024);
	std::cout << "Today's date is: " << today.month()
		<< "/" << today.day() << "/"
		<< today.year() << std::endl;

	Auteur auteur(1, "Fitzgerald", "F. Scott", date(9, 24, 1896));
	Livre book( "The Great Gatsby", auteur, "English", 
		"Fiction", date(4, 10, 1925), 9780743273565);
	auteur = book.getAuteur();
	std::cout << "Book Title: " << book.getTitre() << std::endl;
	std::cout << "Auteur : " << auteur.getId()   << std::endl;

	Lecteur l("AhIt", "Ahmad", "Itani");
	l.emprunterLivre("9782070413116");
	l.emprunterLivre("9782330061231");
	for (const auto& isbn : l.getISBNEmpruntes()) {
		std::cout << isbn << std::endl;
	}

	Emprunt emprunt(today, "9780743273565", l.getIdentifiant());
	today = emprunt.getDateEmprunt();
	std::cout << "Emprunt date: " << today.month()
		<< "/" << today.day() << "/"
		<< today.year() << std::endl;
	std::cout << "Emprunted book ISBN: " << emprunt.getIsbn() << " Identifiant: " << emprunt.getIdentifiant() << std::endl;*/


	return 0;
}