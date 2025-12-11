#ifndef LECTEUR_H
#define LECTEUR_H

#include <string>
#include <vector>

class Lecteur {
  
public:
    Lecteur(const std::string& identifiant, const std::string& nom, const std::string& prenom);

	std::string getIdentifiant() const;
    std::string getNom() const;
    std::string getPrenom() const;
    
    const std::vector<std::string>& getISBNEmpruntes() const;
    void emprunterLivre(const std::string& isbn);

private:
	std::string identifiant_;
    std::string nom_;
    std::string prenom_;
    std::vector<std::string> isbnEmpruntes_;
};

#endif
