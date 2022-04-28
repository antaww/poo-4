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
private:
    std::string valeur;
    Couleur couleur;
public:
    Carte(Couleur couleur_carte, std::string const& valeur_carte);

    Carte(Carte const& carte);

    void afficher();

    void setType(Couleur couleur);

    void setValeur(std::string const& valeur_carte);

    void affecter(Carte& carte);

    bool equals(Carte& carte);
};
