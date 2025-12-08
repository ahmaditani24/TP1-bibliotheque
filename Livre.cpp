#include "Livre.h"
#include <iostream>

Livre::Livre(const std::string& titre, const Auteur auteur, const std::string& langue,
	const std::string& genre, const date& datePublication, int ISBN)
	: titre_(titre),
	auteur_(auteur),
	langue_(langue),
	genre_(genre),
	date_(datePublication), 
	ISBN_(ISBN)
{
}

const std::string& Livre::getTitre() const
{
	return titre_;
}

const Auteur Livre::getAuteur() const
{
	return auteur_;
}

const std::string& Livre::getLangue() const
{
	return langue_;
}

const std::string& Livre::getGenre() const
{
	return genre_;
}

int Livre::getISBN() const
{
	return ISBN_;
}

const date& Livre::getDate() const
{
	return date_;
}