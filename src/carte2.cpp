#include <array>
#include "../header/carte2.h"


namespace JeuDeCarte2 {

    std::array<std::string, 4> Couleurs = {"pique", "coeur", "carreau", "trefle"};

    //constructeur
    Carte::Carte(Couleur couleur, const std::string &valeur) : _couleur(couleur), _valeur(valeur) {
        std::cout << "Creation d'une carte." << std::endl;
        JeuDeCarte2::Carte::NbCreation++;
    }

    //constructeur - copie
    Carte::Carte(Carte &crt) : _couleur(crt._couleur), _valeur(crt._valeur) {
        std::cout << "Creation d'une carte." << std::endl;
        JeuDeCarte2::Carte::NbCreation++;
    }

    // destructeur
    Carte::~Carte() {
        std::cout << __func__ << std::endl;
        JeuDeCarte2::Carte::NbCreation--;
    }

    Carte &Carte::operator=(const Carte &c) {
        std::cerr << "operator=" << std::endl;
        if (&c != this) {
            this->_couleur = c._couleur;
            this->_valeur = c._valeur;
        }
        return *this;
    }


    // setter type - enumération Couleur
    void Carte::setType(const Couleur couleur) {
        this->_couleur = couleur;
    }

    // setter valeur - string valeur
    void Carte::setValeur(const std::string &valeur) {
        this->_valeur = valeur;
    }

    unsigned Carte::GetNbCreation() {
        return JeuDeCarte2::Carte::NbCreation;
    };

    std::ostream &operator<<(std::ostream &flux, const Carte &carte) {
        // declare une variable de type string
        std::string couleur;
        if (carte._couleur == Couleur::PIQUE) {
            couleur = "pique";
        } else if (carte._couleur == Couleur::COEUR) {
            couleur = "coeur";
        } else if (carte._couleur == Couleur::CARREAU) {
            couleur = "carreau";
        } else if (carte._couleur == Couleur::TREFLE) {
            couleur = "trefle";
        }
        //Affichage des attributs
        flux << "Carte: " << carte._valeur << " de " << couleur;
        return flux;
    }


    void carte() {
        std::cout << "Jeu de carte" << std::endl;
        JeuDeCarte2::Carte c1(JeuDeCarte2::Couleur::PIQUE, "As");
        std::cout << c1 << std::endl;
        JeuDeCarte2::Carte c2(c1);
        std::cout << c2 << std::endl;
        c2.setType(JeuDeCarte2::Couleur::TREFLE);
        c2.setValeur("REINE");
        std::cout << c2 << std::endl;
        if (c1 != c2) {
            std::cout << "Les cartes sont differentes" << std::endl;
        } else {
            std::cerr << "Les cartes sont identiques" << std::endl;
        }
        std::cout << "Nombre de cartes creees: " << JeuDeCarte2::Carte::GetNbCreation() << std::endl;
    }
}


