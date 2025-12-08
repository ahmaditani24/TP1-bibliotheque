#include "Auteur.h"

Auteur::Auteur(int id, const std::string& nom, const std::string& prenom, const date& dateDeNaissance)
	: id_(id),
	  nom_(nom),
	  prenom_(prenom),
	  dateDeNaissance_(dateDeNaissance)
{
}

Auteur Auteur::operator<<(const Auteur& other) {
	return Auteur(other.id_, other.nom_, other.prenom_, other.dateDeNaissance_);
}

int Auteur::getId() const
{
	return id_;

}
const std::string& Auteur::getNom() const
{
	return nom_;

}
const std::string& Auteur::getPrenom() const
{
	return prenom_;
}

const date& Auteur::getDateDeNaissance() const
{
	return dateDeNaissance_;
}