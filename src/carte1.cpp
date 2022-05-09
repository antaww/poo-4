#include <array>
#include "../header/carte1.h"

namespace carte1 {

    std::array<std::string, 4> Couleurs = {"pique", "coeur", "carreau", "trefle"};

    Carte::Carte(Couleur couleur_carte, std::string const &valeur_carte) {
        // verifier que la valeur est correcte

        this->couleur = couleur_carte;
        this->valeur = valeur_carte;
        // try catch to test valeur_carte
        //try {
        if ((valeur_carte != "As") && (valeur_carte != "2") && (valeur_carte != "3") && (valeur_carte != "4") &&
            (valeur_carte != "5") && (valeur_carte != "6") && (valeur_carte != "7") && (valeur_carte != "8") &&
            (valeur_carte != "9") && (valeur_carte != "10") && (valeur_carte != "Valet") && (valeur_carte != "Dame") &&
            (valeur_carte != "Roi")) {
            throw std::invalid_argument("Valeur de carte incorrecte");
        }
        //} catch(std::invalid_argument const& e) {
        //    std::cout << "Valeur invalide" << std::endl;
        //}
    }

    Carte::Carte(const Carte &carte) {
        this->couleur = carte.couleur;
        this->valeur = carte.valeur;
    }

    Carte::~Carte() {
        std::cout << "Destruction de la carte " << this->valeur << " de " << Couleurs[this->couleur] << std::endl;
    }

    void Carte::afficher() const {
        std::cout << this->valeur << " de " << Couleurs[this->couleur] << std::endl;
    }

    void Carte::setType(const Couleur couleur) {
        this->couleur = couleur;
    }

    void Carte::setValeur(std::string const &valeur_carte) {
        this->valeur = valeur_carte;
    }

    void Carte::affecter(const Carte &carte) {
        this->couleur = carte.couleur;
        this->valeur = carte.valeur;
    }

    bool Carte::equals(const Carte &carte) const {
        if (this->couleur == carte.couleur && this->valeur == carte.valeur) {
            return true;
        } else {
            return false;
        }
    }

/**
 * Il crée trois cartes, c1, c2 et c3, puis compare c1 et c2.
 *
 * @return 0
 */
    int carte() {
        std::cout << "Jeu de carte" << std::endl;
        try {
            Carte c1(COEUR, "adazdazd");
        } catch (std::invalid_argument const &e) {
            std::cout << "Valeur invalide" << std::endl;
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

            if (c1.equals(c2)) {
                std::cout << "Les cartes sont egales" << std::endl;
            } else {
                std::cout << "Probleme : les cartes ne sont pas egales" << std::endl;
            }
        }
        return 0;
    }
}