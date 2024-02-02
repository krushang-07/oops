#include <iostream>
using namespace std;

class Hero
{

    // properties
    // int health;
    // empty ob size = 1

    // public , private , protected - [access modifier]

private:
    int health;

public:
    char lvl;

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
};
int main()
{
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

    return 0;
}
