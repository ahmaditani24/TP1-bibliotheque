#include <string>
#include <iostream>

class Lecteur
{
 public:
	 Lecteur(int id, const std::string& nom, const std::string& prenom);
	 int getId() const;
	 const std::string& getNom() const;
	 const std::string& getPrenom() const;
	 
private:
	int id_;
	 std::string nom_;
	 std::string prenom_;
};

