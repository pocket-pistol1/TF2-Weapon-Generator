#include <iostream>
#include <iomanip>
#include <string>
#include "generator.cpp"
#include <chrono>
#include <cstdlib>
namespace weaponType {
    bool melee;
    bool gun;
    bool proj;
}

void in_check(std::string in) {
    if(in == "2") {
        weaponType::melee = true;
        weaponType::gun = false;
        weaponType::proj = false;
    }
    else if(in == "3") {
        weaponType::melee = false;
        weaponType::gun = true;
        weaponType::proj = false;
    }
    else if(in == "4") {
        weaponType::melee = false;
        weaponType::gun = false;
        weaponType::proj = true;
    }
}
//holds all the loops for the generate function
namespace loops {
void numStatLoop() {
    for(int i = 0; i <= numStatRand; i++) { 
        int posVNeg = rand() * 2 + 1; //if 1, positive, if 2, negative 
        int prec = rand() * 70 + 1; //the precent of the stat
            if(posVNeg == 1) {
                std::cout << "+ " << prec << " " << gen.get_melee_numStat() << std::endl;
            }
       } 
}

void numStatLoop() {
    for(int i = 0; i <= numStatRand; i++) { 
        int posVNeg = rand() * 2 + 1; //if 1, positive, if 2, negative 
        int prec = rand() * 70 + 1; //the precent of the stat
            if(posVNeg == 1) {
                std::cout << "+ " << prec << " " << gen.get_melee_numStat() << std::endl;
            }
       } 
}

void numStatLoop() {
    for(int i = 0; i <= numStatRand; i++) { 
        int posVNeg = rand() * 2 + 1; //if 1, positive, if 2, negative 
        int prec = rand() * 70 + 1; //the precent of the stat
            if(posVNeg == 1) {
                std::cout << "+ " << prec << " " << gen.get_melee_numStat() << std::endl;
            }
       } 
}
}

void generate() {
    generator gen;

    std::cout << gen.get_name() << std::endl; //creates the name

    srand(time(0));
    int numStatRand = rand() * 7 + 1; //how many numStats
    int CoolStatRand = rand() * 3 + 1; //how many coolStats
    int AbilityRand = rand() * 2 + 1; //how many abilites
    if(melee) {
       mumStatLoop();
       } //end of melee if
    }
}

int main() {
    std::cout << "-----------------------------------------------------------------------------------------------------------------------" << std::endl;
    std::cout << "Team Fortress 2 Random Weapon Generator!" << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------------------------------------" << std::endl;
    std::cout << "1. Generate Weapon" << std::endl;
    std::cout << "Set weapon type to generate" << std::endl;
    std::cout << "2. Melee" << std::endl;
    std::cout << "3. Gun" << std::endl;
    std::cout << "4. Projectile" << std::endl;
    std::string in;
    std::cin >> in;
    if(in == "1") {
        generate();
    }
    in_check(in);

}