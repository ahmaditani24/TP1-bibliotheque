#ifndef EMPRUNT_H
#define EMPRUNT_H

#include <iostream>
#include "date.h"

class Emprunt
{

public:
		Emprunt(const date& dateEmprunt, const std::string& isbn, const std::string& identifiant);

		const date& getDateEmprunt() const;
		const std::string& getIsbn() const;
		const std::string& getIdentifiant() const;

private:
		date dateEmprunt_;
		std::string isbn_;
		std::string identifiant_;
};
#endif 