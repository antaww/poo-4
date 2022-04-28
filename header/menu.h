#include <string>

#ifndef TP4_MENU_H
#define TP4_MENU_H

#endif //TP4_MENU_H


class Menu {
public:
   Menu();
   ~Menu();
   static void execute();
private:
    static void afficher();
    static int get_number(const std::string& message);
    static bool ask_continue();
};
