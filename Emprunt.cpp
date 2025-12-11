#include "Emprunt.h"

Emprunt::Emprunt(const date& dateEmprunt, const std::string& isbn, const std::string& identifiant)
	: dateEmprunt_(dateEmprunt), isbn_(isbn), identifiant_(identifiant) {
}

const date& Emprunt::getDateEmprunt() const {
	return dateEmprunt_;
}

const std::string& Emprunt::getIsbn() const {
	return isbn_;
}

const std::string& Emprunt::getIdentifiant() const {
	return identifiant_;
}

