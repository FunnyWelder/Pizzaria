#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

class Pizza {
protected:
    int Type;
    unsigned int Cheeze;
    unsigned int Salami;

public:
    virtual string getName() const = 0;
    virtual string getDescription() const = 0;
    virtual unsigned int getPrice() const = 0;

    unsigned int getCheezeCost() const {
        return floor(getPrice()*0.1);
    };
    unsigned int getSalamiCost() const {
        return floor(getPrice()*0.2);
    };

    unsigned int getCost() const {
        return (getPrice() + getCheezeCost()*Cheeze + getSalamiCost()*Salami);
    };

    explicit Pizza(int type) : Type(type) {
        Cheeze = 0;
        Salami = 0;
    };

    string getSize() const {
        switch (Type) {
            case 1:
                return "Small - 1 кусок";
            case 2:
                return "Medium - 25 см";
            case 3:
                return "Large - 40 см";
        }
    }

    void addCheeze(unsigned int cheese){
        Cheeze = Cheeze + cheese;
    }

    unsigned int getCheeze() const {
        return Cheeze;
    };

    void addSalami(unsigned int salami){
        Salami = Salami + salami;
    }

    unsigned int getSalami() const {
        return Salami;
    };
};

class Pizza_1 : public Pizza {
public:
    explicit Pizza_1(int Type) : Pizza(Type) {
    }

    string getName() const override {
        return "Маргарита";
    };

    string getDescription() const override {
        return "Итальянские травы, томатный соус, моцарелла, томаты";
    };

    unsigned int getPrice() const override {
        switch (Type) {
            case 1:
                return 100;
            case 2:
                return 200;
            case 3:
                return 300;
        }
    }
};

class Pizza_2 : public Pizza {
public:
    explicit Pizza_2(int Type) : Pizza(Type) {
    }

    string getName() const override {
        return "Двойная пепперони";
    };

    string getDescription() const override {
        return "Пикантная пепперони, томатный соус, моцарелла";
    };

    unsigned int getPrice() const override {
        switch (Type) {
            case 1:
                return 160;
            case 2:
                return 270;
            case 3:
                return 420;
        }
    }
};


class Pizza_3 : public Pizza {
public:
    explicit Pizza_3(int Type) : Pizza(Type) {
    }

    string getName() const override {
        return "Четыре сезона";
    };

    string getDescription() const override {
        return "Итальянские травы, ветчина, пикантная пепперони, томатный соус, кубики брынзы, шампиньоны, моцарелла, томаты";
    };

    unsigned int getPrice() const override {
        switch (Type) {
            case 1:
                return 130;
            case 2:
                return 230;
            case 3:
                return 390;
        }
    }
};


class Pizza_4 : public Pizza {
public:
    explicit Pizza_4(int Type) : Pizza(Type) {
    }

    string getName() const override {
        return "Деревенская";
    };

    string getDescription() const override {
        return "Картофель из печи, соленые огурчики, цыпленок, соус ранч, томаты, красный лук, чеснок, моцарелла, томатный соус";
    };

    unsigned int getPrice() const override {
        switch (Type) {
            case 1:
                return 120;
            case 2:
                return 350;
            case 3:
                return 470;
        }
    }
};


class Pizza_5 : public Pizza {
public:
    explicit Pizza_5(int Type) : Pizza(Type) {
    }

    string getName() const override {
        return "Гавайская";
    };

    string getDescription() const override {
        return "Цыпленок, томатный соус, моцарелла, ананасы";
    };

    unsigned int getPrice() const override {
        switch (Type) {
            case 1:
                return 140;
            case 2:
                return 270;
            case 3:
                return 400;
        }
    }
};

class Pizza_6 : public Pizza {
public:
    explicit Pizza_6(int Type) : Pizza(Type) {
    }

    string getName() const override {
        return "Аррива";
    };

    string getDescription() const override {
        return "Соус бургер, цыпленок, соус ранч, чоризо, сладкий перец, красный лук, моцарелла, томаты, чеснок";
    };

    unsigned int getPrice() const override {
        switch (Type) {
            case 1:
                return 110;
            case 2:
                return 220;
            case 3:
                return 330;
        }
    }
};

class Pizza_7 : public Pizza {
public:
    explicit Pizza_7(int Type) : Pizza(Type) {
    }

    string getName() const override {
        return "Сырная";
    };

    string getDescription() const override {
        return "Томатный соус, моцарелла";
    };

    unsigned int getPrice() const override {
        switch (Type) {
            case 1:
                return 100;
            case 2:
                return 200;
            case 3:
                return 300;
        }
    }
};

class Pizza_8 : public Pizza {
public:
    explicit Pizza_8(int Type) : Pizza(Type) {
    }

    string getName() const override {
        return "Ветчина и сыр";
    };

    string getDescription() const override {
        return "Ветчина, моцарелла, сливочный соус";
    };

    unsigned int getPrice() const override {
        switch (Type) {
            case 1:
                return 100;
            case 2:
                return 200;
            case 3:
                return 300;
        }
    }
};

class Pizza_9 : public Pizza {
public:
    explicit Pizza_9(int Type) : Pizza(Type) {
    }

    string getName() const override {
        return "Крэйзи пепперони";
    };

    string getDescription() const override {
        return "Цыпленок, пикантная пепперони, томатный соус, моцарелла, кисло-сладкий соус";
    };

    unsigned int getPrice() const override {
        switch (Type) {
            case 1:
                return 130;
            case 2:
                return 250;
            case 3:
                return 400;
        }
    }
};

class Pizza_10 : public Pizza {
public:
    explicit Pizza_10(int Type) : Pizza(Type) {
    }

    string getName() const override {
        return "Креветки по-азиатски";
    };

    string getDescription() const override {
        return "Шампиньоны, моцарелла, креветки, кисло-сладкий соус, черный кунжут";
    };

    unsigned int getPrice() const override {
        switch (Type) {
            case 1:
                return 150;
            case 2:
                return 290;
            case 3:
                return 400;
        }
    }
};

class Order {
    vector<Pizza*> pizzas;
public:
    void add(Pizza* pizza) {
        pizzas.push_back(pizza);
    }

    void print() {
        unsigned int Account = 0;
        int n = pizzas.size();
        for(int i = 0; i < n; i++)
        {
            cout << "Pizza name: " << pizzas[i]->getName() << endl;
            cout << "Pizza description: " << pizzas[i]->getDescription() << endl;

            unsigned int cheese;
            cout << "Сколько раз хотите добавить сыра? "; cin >> cheese;
            pizzas[i]->addCheeze(cheese);
            cout << "Cheeseness: " << pizzas[i]->getCheeze() << endl;

            unsigned int salami;
            cout << "Сколько раз хотите добавить салями? "; cin >> salami;
            pizzas[i]->addSalami(salami);
            cout << "Salaminess: "  << pizzas[i]->getSalami() << endl;

            cout << "Pizza cost: " << pizzas[i]->getPrice() << endl;
            cout << "Size: "       << pizzas[i]->getSize() << endl;
            cout << endl;
            Account += pizzas[i]->getCost();
        }
        cout << "Account: " << Account << " $" << endl;
    }
};

class Menu {
public:
    static void print() {
        cout << "Menu:" << endl;
        Pizza_1 pizza_1(1); cout << "[1] " << pizza_1.getName() << ' ' << pizza_1.getPrice() << " $" << ": " << pizza_1.getDescription() << endl;
        Pizza_2 pizza_2(1); cout << "[2] " << pizza_2.getName() << ' ' << pizza_2.getPrice() << " $" << ": " << pizza_2.getDescription() << endl;
        Pizza_3 pizza_3(1); cout << "[3] " << pizza_3.getName() << ' ' << pizza_3.getPrice() << " $" << ": " << pizza_3.getDescription() << endl;
        Pizza_4 pizza_4(1); cout << "[4] " << pizza_4.getName() << ' ' << pizza_4.getPrice() << " $" << ": " << pizza_4.getDescription() << endl;
        Pizza_5 pizza_5(1); cout << "[5] " << pizza_5.getName() << ' ' << pizza_5.getPrice() << " $" << ": " << pizza_5.getDescription() << endl;
        Pizza_6 pizza_6(1); cout << "[6] " << pizza_6.getName() << ' ' << pizza_6.getPrice() << " $" << ": " << pizza_6.getDescription() << endl;
        Pizza_7 pizza_7(1); cout << "[7] " << pizza_7.getName() << ' ' << pizza_7.getPrice() << " $" << ": " << pizza_7.getDescription() << endl;
        Pizza_8 pizza_8(1); cout << "[8] " << pizza_8.getName() << ' ' << pizza_8.getPrice() << " $" << ": " << pizza_8.getDescription() << endl;
        Pizza_9 pizza_9(1); cout << "[9] " << pizza_9.getName() << ' ' << pizza_9.getPrice() << " $" << ": " << pizza_9.getDescription() << endl;
        Pizza_10 pizza_10(1); cout << "[10] " << pizza_10.getName() << ' ' << pizza_10.getPrice() << " $" << ": " << pizza_10.getDescription() << endl;
        cout << "*Внимание цены представлены для Small размера пиццы.*" << endl << endl; // типо мелкий шрифт
    }

    static void print_sizes(){
        cout << "Sizes:" << endl;
        Pizza_1 pizza1S(1);
        Pizza_1 pizza1M(2);
        Pizza_1 pizza1L(3);
        cout << "[1] " << pizza1S.getSize() << endl;
        cout << "[2] " << pizza1M.getSize() << endl;
        cout << "[3] " << pizza1L.getSize() << endl << endl;
    }
};

int main() {
    setlocale( LC_ALL,"Russian" );
    Order order;
    Menu::print();
    Menu::print_sizes();

    unsigned short int n = 0;
    do {
        cout << "Пожалуйста, выберите номер пиццы, которую вы хотите заказать. Если не хотите заказывать, то выберите номер 0: "; cin >> n;
        if (n > 10) {
            cout << "Извините пиццы с таким номером нет. ";
        }
        if ((n != 0) && (n <= 10)) {
            unsigned short int size = 0;
            while ((size == 0) || (size > 3)) {
                cout << "Пожалуйста, выберите номер размера пиццы: "; cin >> size;
                if ((size == 0) || (size > 3)) {
                    cout << "Извините размера пиццы с таким номером нет.";
                }
                cout << endl;
            }
            switch (n) {
                case 1:
                    switch (size) {
                        case 1:
                            order.add(new Pizza_1(1));
                            break;
                        case 2:
                            order.add(new Pizza_1(2));
                            break;
                        case 3:
                            order.add(new Pizza_1(3));
                            break;
                    }
                    break;
                case 2:
                    switch (size) {
                        case 1:
                            order.add(new Pizza_2(1));
                            break;
                        case 2:
                            order.add(new Pizza_2(2));
                            break;
                        case 3:
                            order.add(new Pizza_2(3));
                            break;
                    }
                    break;
                case 3:
                    switch (size) {
                        case 1:
                            order.add(new Pizza_3(1));
                            break;
                        case 2:
                            order.add(new Pizza_3(2));
                            break;
                        case 3:
                            order.add(new Pizza_3(3));
                            break;
                    }
                    break;
                case 4:
                    switch (size) {
                        case 1:
                            order.add(new Pizza_4(1));
                            break;
                        case 2:
                            order.add(new Pizza_4(2));
                            break;
                        case 3:
                            order.add(new Pizza_4(3));
                            break;
                    }
                    break;
                case 5:
                    switch (size) {
                        case 1:
                            order.add(new Pizza_5(1));
                            break;
                        case 2:
                            order.add(new Pizza_5(2));
                            break;
                        case 3:
                            order.add(new Pizza_5(3));
                            break;
                    }
                    break;
                case 6:
                    switch (size) {
                        case 1:
                            order.add(new Pizza_6(1));
                            break;
                        case 2:
                            order.add(new Pizza_6(2));
                            break;
                        case 3:
                            order.add(new Pizza_6(3));
                            break;
                    }
                    break;
                case 7:
                    switch (size) {
                        case 1:
                            order.add(new Pizza_7(1));
                            break;
                        case 2:
                            order.add(new Pizza_7(2));
                            break;
                        case 3:
                            order.add(new Pizza_7(3));
                            break;
                    }
                    break;
                case 8:
                    switch (size) {
                        case 1:
                            order.add(new Pizza_8(1));
                            break;
                        case 2:
                            order.add(new Pizza_8(2));
                            break;
                        case 3:
                            order.add(new Pizza_8(3));
                            break;
                    }
                    break;
                case 9:
                    switch (size) {
                        case 1:
                            order.add(new Pizza_9(1));
                            break;
                        case 2:
                            order.add(new Pizza_9(2));
                            break;
                        case 3:
                            order.add(new Pizza_9(3));
                            break;
                    }
                    break;
                case 10:
                    switch (size) {
                        case 1:
                            order.add(new Pizza_10(1));
                            break;
                        case 2:
                            order.add(new Pizza_10(2));
                            break;
                        case 3:
                            order.add(new Pizza_10(3));
                            break;
                    }
                    break;
            }
            n = 1000;
            size = 1000;
        }
    } while (n > 10);

    order.print();

    return 0;
}