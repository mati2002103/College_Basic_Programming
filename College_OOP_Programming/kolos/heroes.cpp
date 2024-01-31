#include <iostream>

class Hero{
    private:
    int strength, stamina, intelect, wisdom, dexterity;
    std::string name;
    public:
     Hero(std::string name, int strength, int stamina, int intellect, int wisdom, int dexterity)
        : name(name), strength(strength), stamina(stamina), intelect(intelect), wisdom(wisdom), dexterity(dexterity) {};
};
class Mage : public Hero {
public:
    Mage(std::string name, int intellect)
        : Hero(name, 0, 0, intellect, 0, 0), mana(intellect * 10) {};

 

private:
    int mana;
};
class Priest : public Hero {
public:
    Priest(std::string name, int wisdom)
        : Hero(name, 0, 0, 0, wisdom, 0), mana(wisdom * 10) {}



private:
    int mana;
};
class Warrior : public Hero {
public:
    Warrior(std::string name, int strength)
        : Hero(name, strength, 0, 0, 0, 0) {};
};

class Archer : public Hero {
public:
    Archer(std::string name, int dexterity)
        : Hero(name, 0, 0, 0, 0, dexterity) {};
};
class Magabitewny : public Mage {
public:
    Magabitewny(std::string name, int intellect, int magicPower)
        : Mage(name, intellect), magicPower(magicPower) {}
   

private:
    int magicPower;
};

class MagaOgnia : public Mage {
public:
    MagaOgnia(std::string name, int intellect, int firePower)
        : Mage(name, intellect), firePower(firePower) {}

    

private:
    int firePower;
};

class Paladin : public Hero {
public:
    Paladin(std::string name, int strength, int wisdom)
        : Hero(name, strength, 0, 0, wisdom, 0) {};
};

class Enemy : public Hero {
public:
    Enemy(std::string name, int strength, int stamina, int intellect, int wisdom, int dexterity)
        : Hero(name, strength, stamina, intellect, wisdom, dexterity) {};
};

int  main(){

}
