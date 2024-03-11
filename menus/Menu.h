
class Menu {
public:
    virtual void display() = 0;
    static void initialMenu();
    static void startMenu();
};

void Menu::initialMenu() {
     printf("\n1- New Game\n2- Continue\n0- Exit\n");
}

void Menu::startMenu() {
    printf("\n1- Create character\n");
}