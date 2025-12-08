#include "Lecteur.h"

Lecteur::Lecteur(int id, const std::string& nom, const std::string& prenom)
	: id_(id),
	  nom_(nom),
	  prenom_(prenom)
{
}

int Lecteur::getId() const
{
	return id_;
}

const std::string& Lecteur::getNom() const
{
	return nom_;
}

const std::string& Lecteur::getPrenom() const
{
	return prenom_;
}
