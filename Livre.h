#ifndef LIVRE_H
#define LIVRE_H
#include <string>
#include "date.h" 
#include "Auteur.h"

class Livre
{
public:
	Livre(const std::string& titre, const Auteur auteur, const std::string& langue,
		const std::string& genre, const date& datePublication, int ISBN);

	~Livre() = default;

	const std::string& getTitre() const;
	const Auteur getAuteur() const;
	const std::string& getLangue() const;
	const std::string& getGenre() const;
	int getISBN() const;
	const date& getDate() const;

private:
	std::string titre_;
	Auteur auteur_;
	std::string langue_;
	std::string genre_;
	date date_; 
	int ISBN_;
};

#endif