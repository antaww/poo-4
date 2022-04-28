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
    Carte(Couleur couleur_carte, const char string[3]);

    void afficher();

    void setType(Couleur couleur);

    void setValeur(const char *string);

    void affecter(Carte carte);

    bool equals(Carte carte);
};
