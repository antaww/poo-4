#ifndef TP4_CARTE2_H
#define TP4_CARTE2_H

#endif //TP4_CARTE2_H

#include <string>
#include <iostream>

namespace JeuDeCarte2 {

    void carte();

    enum class Couleur : unsigned short { PIQUE, COEUR, CARREAU, TREFLE };

    class Carte
    {
    public:

        // constructeur
        Carte(Couleur couleur, const std::string& valeur);

        // constructeur - copie
        Carte(Carte& crt);

        // destructeur
        ~Carte();

        Carte& operator=(const Carte&);

        inline bool operator==(const Carte& c) const {
            if (&c == this) return true;
            return (this->_couleur == c._couleur &&
                    this->_valeur == c._valeur);
        }

        inline bool operator!=(const Carte& c) const {
            if (&c == this) return false;
            return (!(this->operator==(c)));
        }

        // propriété setter -> type
        void setType(const Couleur couleur);

        // propriété setter -> valeur
        void setValeur(const std::string& valeur);



        // propriété getter -> Nombre de création
        static unsigned GetNbCreation();

        friend std::ostream& operator<<(std::ostream&, const Carte&);

    private:
        // Attribut - Nombre de création
        inline static unsigned NbCreation;
        // Attributs
        Couleur _couleur;
        std::string _valeur;
    };
}