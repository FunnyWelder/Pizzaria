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

    void addCheeze(){
        Cheeze++;
    }

    unsigned int getCheeze() const {
        return Cheeze;
    };

    void addSalami(){
        Salami++;
    }

    unsigned int getSalami() const {
        return Salami;
    };
};

class Order {
    vector<const Pizza *> pizzas;
public:
    void add(const Pizza *pizza) {
        pizzas.push_back(pizza);
    }

    void print() {
        unsigned int Account = 0;
        int n = pizzas.size();
        for(int i = 0; i < n; i++)
        {
            cout << "Pizza name: " << pizzas[i]->getName() << endl;;
            cout << "Pizza description: " << pizzas[i]->getDescription() << endl;;
            cout << "Pizza cost: " << pizzas[i]->getPrice() << endl;
            cout << "Cheeseness: " << pizzas[i]->getCheeze() << endl;
            cout << "Saltiness: "  << pizzas[i]->getSalami() << endl;
            cout << "Size: "       << pizzas[i]->getSize() << endl;
            cout << endl;
            Account += pizzas[i]->getCost();
        }
        cout << "Account: " << Account << " $" << endl;
    }
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

// Я не понял как сделать процедуру с меню пицц

int main() {
    setlocale( LC_ALL,"Russian" );
    Order order;
    Pizza_1 P1(1);
    P1.addCheeze();
    P1.addSalami();
    P1.addSalami();

    Pizza_7 P2(3);

    Pizza_9 P3(2);
    P3.addCheeze();

    order.add(&P1);
    order.add(&P2);
    order.add(&P3);

    order.print();

    return 0;
}