#include "../header/personne.h"

enum Sexe { Inconnue=0, Masculin=1, Feminin=2};

struct Personne
{
    int numero;
    std::string nom{};
    Sexe sexe;
};

using ptrPersonne = Personne*;

ptrPersonne creer()
{
    std::cout << "\nCréation d'une personne\n";
    return new Personne ;
}

void initialiser(ptrPersonne& pp){
    std::cout << "\nInitialisation de la personne\n";
    pp -> numero = 10;
    pp -> nom = "Paul";
    pp -> sexe = Masculin;
}

void afficher(const ptrPersonne& pp) {
    if (pp != nullptr) {
        std::cout << "\nLa Personne a pour numero [" << pp -> numero << "]";
        std::cout << "\nLa Personne se nomme [" << pp -> nom << "]";
        std::cout << "\nLa Personne est de sexe [" << pp -> sexe << "]\n";
    }
}

void detruire(ptrPersonne& pp) {
    std::cout << "\nDestruction de la personne\n";
    delete pp;
    pp = nullptr;
}

void F_Personne() {
    std::cout << "\nBienvenue sur le TP 2.3 - Personne\n";

    ptrPersonne pp1 = nullptr;
    pp1 = creer();
    initialiser(pp1);
    afficher(pp1);
    detruire(pp1);
    afficher(pp1);

}