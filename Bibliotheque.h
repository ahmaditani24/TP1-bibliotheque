#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include <string>
#include <vector>

#include "date.h"
#include "Livre.h"
#include "Auteur.h"
#include "Emprunt.h"
#include "Lecteur.h"

class Bibliotheque
{
	public:
	Bibliotheque(const std::string& nom);

	void ajouterAuteur(const Auteur& auteur);
	void ajouterLivre(const Livre& livre);
	void ajouterLecteur(const Lecteur& lecteur);
	void EmprunterLivre(const std::string& isbn, const std::string& identifiant, const date& dateEmprunt);

	const std::string& getNom() const;
	const std::vector<Livre>& getLivres() const;
	const std::vector<Auteur>& getAuteurs() const;
	const std::vector<Lecteur>& getLecteurs() const;

private:
	std::string nom_;
	std::vector<Livre> livres_;
	std::vector<Auteur> auteurs_;
	std::vector<Lecteur> lecteurs_;
};

#endif