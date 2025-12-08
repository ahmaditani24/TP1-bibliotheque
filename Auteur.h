#ifndef AUTEUR_H
#define AUTEUR_H

#include <string>
#include "date.h"

class Auteur
{
	public:
		Auteur(int id, const std::string& nom, const std::string& prenom, const date& dateDeNaissance);
		int getId() const;
		const std::string& getNom() const;
		const std::string& getPrenom() const;
		const date& getDateDeNaissance() const;
		Auteur operator << (const Auteur& other);

	private:
		int id_;
		std::string nom_;
		std::string prenom_;
		date dateDeNaissance_;
};

#endif