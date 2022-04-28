#include <iostream>
#include <limits>
#include "../header/menu.h"
#include "../header/carte.h"



Menu::Menu() = default;

Menu::~Menu() = default;



void Menu::afficher() {
    std::cout << "Quel exercice voulez-vous faire ?" << std::endl;
    std::cout << "0 -> Finir le programme" << std::endl;
    std::cout << "1 -> TP 3.1" << std::endl;
    std::cout << "2 -> TP 3.2" << std::endl;
}

int Menu::get_number(const std::string& message) {
    std::cout << message << std::endl;
    double number;
    std::cout << ">";
    std::cin >> number;
    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Choix invalide, veuillez entrer un nombre entier : ";
        std::cin >> number;
    }
    int number2 = int(number);
    return number2;
}

bool Menu::ask_continue() {
    char choice;
    std::cout << "Voulez-vous continuer ? (o/n)" << std::endl;
    std::cin >> choice;
    if (choice == 'o') {
        return true;
    } else {
        std::cout << "Tres bien, au revoir!" << std::endl;
        return false;
    }
}

void Menu::execute() {
    int choice;
    do {
        afficher();
        choice = get_number("Saisir votre choix :");
        switch (choice) {
            case 0:
                std::cout << "Fin du programme" << std::endl;
                break;
            case 1:
                carte();
                std::cout << "TP 3.1" << std::endl;
                break;
            case 2:
//                TP3_2::execute();
                std::cout << "TP 3.2" << std::endl;
                break;
            default:
                std::cout << "Choix invalide" << std::endl;
        }
    } while (ask_continue());
}


