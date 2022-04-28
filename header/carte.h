#ifndef TP4_CARTE_H
#define TP4_CARTE_H

#endif //TP4_CARTE_H

#include <string>
#include <iostream>

int carte();

enum Couleur {
    PIQUE,
    COEUR,
    CARREAU,
    TREFLE
};

class Carte {

public:
    Carte() = delete;
    Carte(Couleur couleur_carte, std::string const& valeur_carte);

    Carte(Carte const& carte);

    ~Carte();


    void afficher() const;

    void setType(const Couleur couleur);

    void setValeur(std::string const& valeur_carte);

    void affecter(const Carte& carte);

    bool equals(const Carte& carte) const;
private:
    std::string valeur;
    Couleur couleur;

};
