#include <array>
#include "../header/carte.h"

std::array <std::string, 4> Couleurs = { "pique", "coeur", "carreau", "trefle" };

int carte() {
    Carte c1(COEUR, "As");
    c1.afficher();
    Carte c2(c1);
    c2.afficher();
    c2.setType(TREFLE);
    c2.setValeur("Queen");
    c2.afficher();
    return 0;
}

Carte::Carte(Couleur couleur_carte, const char *string) {
    this->couleur = couleur_carte;
    this->valeur = string;
}

void Carte::afficher() {
    std::cout << this->valeur << " de " << Couleurs[this->couleur] << std::endl;
}

void Carte::setType(Couleur couleur) {
    this->couleur = couleur;
}

void Carte::setValeur(const char *string) {
    this->valeur = string;
}
