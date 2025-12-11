#include "Bibliotheque.h"

Bibliotheque::Bibliotheque(const std::string& nom)
	: nom_(nom) {
}	

void Bibliotheque::ajouterAuteur(const Auteur& auteur) {
	auteurs_.push_back(auteur);
}

void Bibliotheque::ajouterLivre(const Livre& livre) {
	livres_.push_back(livre);
}	

void Bibliotheque::ajouterLecteur(const Lecteur& lecteur) {
	lecteurs_.push_back(lecteur);
}

void Bibliotheque::EmprunterLivre(const std::string& isbn, const std::string& identifiant, const date& dateEmprunt) {
	for (auto& lecteur : lecteurs_) {
		if (lecteur.getIdentifiant() == identifiant) {
			lecteur.emprunterLivre(isbn);
			break;
		}
	}
	Emprunt emprunt(dateEmprunt, isbn, identifiant);
}

const std::string& Bibliotheque::getNom() const {
	return nom_;
}

const std::vector<Livre>& Bibliotheque::getLivres() const {
	return livres_;
}

