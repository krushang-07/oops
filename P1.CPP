#include <iostream>
using namespace std;

class Hero
{

    // properties
    // int health;
    // empty ob size = 1

    // public , private , protected - [access modifier]

public:
    int health;
    char lvl;

    // when object are created in given class the function callled constructor are involked like-krushang.hero()
    Hero()
    {
        cout << "constructor called" << endl;
    }

    // parameterised constructor

    Hero(int health)
    {
        cout << "single parameterized constructor" << endl;
        this->health = health;
    }

    Hero(int health, char lvl)
    {
        cout << "double parameterized constructor" << endl;
        this->health = health;
        this->lvl = lvl;
    }

    // copy constructor

    Hero(Hero &temp)
    {
        cout << "copy constructor" << endl;
        this->health = temp.health;
        this->lvl = temp.lvl;
    }

    // shellow copy arr use same memory location example :=== babbar gabbar change then print the value are gabbar not gabbar babbar
    // deep copy not use samew memory location after changes

    // getter - fetch the data or read the data
    // setter - set the value or set the value according to the condition

    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }
    int getLvl()
    {
        return lvl;
    }

    void setLvl(int l)
    {
        lvl = l;
    }

    void printhealth()
    {
        cout << "health is: " << health << endl;
    }
    void print()
    {
        cout << "health is: " << this->health << endl;
        cout << "lvl is: " << this->lvl << endl;
    }

    void printx(int health, char lvl)
    {
        cout << "HEALTH is: " << health << endl;
        cout << "LVL is: " << lvl << endl;
    }
    //DESTRUCTOR
    
    ~Hero()
    {
        cout << "desctructor called" << endl;
    }
};
int main()
{
    ////default
    //     Hero k0;
    //     k0.printx(101, 'd');

    ////single
    //     Hero k1(10);
    //     k1.printhealth();

    ////double
    //     Hero k2(22, 'B');
    //     Hero k3(33, 'v');
    //     k2.print();
    //     k3.print();
    //     k2.printx(10, 'x');

    // COPY CONSTRUCTOR
    //     Hero k5(k2);
    //     k5.print();

    // copy assignment

    //     k2 = k3;
    //     k2.print();
    //     k3.print();

    // Destructor

    Hero D;               // static - automatic called destructor
    Hero *d = new Hero(); // dynamic - manually called destructor
    delete d;

    //   Hero *k = new Hero;

    /*
    // static allocation

    Hero a;
    // access public member
    a.lvl = 'C';
    cout << "lvl :" << a.lvl << endl;

    // access private member
    a.setHealth(45);
    cout << "health is:" << a.getHealth() << endl;

    // dynamic alllocation
    Hero *b = new Hero;

    b->setHealth(40);
    b->setLvl('C');

    //one method
    cout << "lvl :" << (*b).lvl << endl;
    cout << "health is:" << (*b).getHealth() << endl;


    //second method
    cout << "lvl :" << b->lvl << endl;
    cout << "health is:" << b->getHealth() << endl;

    // cout << "krushangh health is :" << krushang.getHealth() << endl;
    // krushang.setHealth(60);
    // //   krushang.health = 60;
    // //  krushang.lvl = 'A';

    // cout << "health is: " << krushang.getHealth() << endl;
    // // cout << "lvl is: " << krushang.lvl << endl;

    // // size of given object are 8 not a 5 cuz the system contain 4 byts of padding for the optimization of the code
    // cout << "size of: " << sizeof(krushang) << endl;
    */
    return 0;
}
