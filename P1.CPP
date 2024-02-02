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


    //getter - fetch the data or read the data
    //setter - set the value or set the value according to the condition

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

    Hero krushang;

    cout << "krushangh health is :" << krushang.getHealth() << endl;
    krushang.setHealth(60);
    //   krushang.health = 60;
    //  krushang.lvl = 'A';

    cout << "health is: " << krushang.getHealth() << endl;
    // cout << "lvl is: " << krushang.lvl << endl;

    cout << "size of: " << sizeof(krushang) << endl;
    // cout << " h1: " << endl;

    return 0;
}
