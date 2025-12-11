#include "Lecteur.h"

Lecteur::Lecteur(const std::string& identifiant, 
    const std::string& nom, const std::string& prenom)
    : identifiant_(identifiant), nom_(nom), prenom_(prenom) {
}

std ::string Lecteur::getIdentifiant() const {
    return identifiant_;
}

std::string Lecteur::getNom() const {
    return nom_;
}

std::string Lecteur::getPrenom() const {
    return prenom_;
}

const std::vector<std::string>& Lecteur::getISBNEmpruntes() const {
    return isbnEmpruntes_;
}

void Lecteur::emprunterLivre(const std::string& isbn) {
    isbnEmpruntes_.push_back(isbn);
}


