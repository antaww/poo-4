#include <array>
#include "../header/carte.h"

std::array <std::string, 4> Couleurs = { "pique", "coeur", "carreau", "trefle" };

/**
 * Il crée trois cartes, c1, c2 et c3, puis compare c1 et c2.
 *
 * @return 0
 */
int carte() {
    std::cout << "Jeu de carte" << std::endl;
    Carte c1(COEUR, "As");
    c1.afficher(); //C1: coeur As
    Carte c2(c1);
    c2.afficher(); //C2: coeur As
    c2.setType(TREFLE);
    c2.setValeur("Queen");
    c2.afficher(); //C2: trefle Queen
    Carte c3(PIQUE, "2");
    c2.affecter(c3);
    c2.afficher(); //C2: pique 2
    c3.afficher(); //C3: pique 2

    if(c1.equals(c2)) {
        std::cout << "Les cartes sont egales" << std::endl;
    } else {
        std::cout << "Probleme : les cartes ne sont pas egales" << std::endl;
    }
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

void Carte::affecter(Carte carte) {
    this->couleur = carte.couleur;
    this->valeur = carte.valeur;
}

bool Carte::equals(Carte carte) {
    return false;
}
