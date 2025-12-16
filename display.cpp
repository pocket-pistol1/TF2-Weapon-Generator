#include <iostream>
#include <iomanip>
#include <string>
#include "generator.cpp"
#include <chrono>
#include <cstdlib>

generator gen;

void clearScreen() {
    // ANSI escape sequence to clear the entire screen and move the cursor to the top-left (1,1)
    std::cout << "\033[2J\033[1;1H";
    // Using printf is another common way to implement this
    // printf("\033[2J\033[1;1H");
}

namespace weaponType {
    bool melee;
    bool gun;
    bool proj;
}

//holds all the melee getter loops for generate
namespace Meleeloops {
void numStatLoop(int numStatRand) {
    for(int i = 0; i <= numStatRand; i++) { 
        int posVNeg = rand() % 2 + 1; //if 1, positive, if 2, negative 
        int prec = rand() % 70 + 1; //the precent of the stat
            if(posVNeg == 1) {
                std::cout << "+ " << prec << "% " << gen.get_melee_numStats() << std::endl;
            } else {
                std::cout << "- " << prec << "% " << gen.get_melee_numStats() << std::endl;
            }
       } 
}

void coolStatLoop(int coolStatRand) {
    for(int i = 0; i <= coolStatRand; i++) { 
        int posVNeg = rand() % 2 + 1; //if 1, positive, if 2, negative 
        int prec = rand() % 70 + 1; //the precent of the stat
            if(posVNeg == 1) {
                std::cout << "+ " << " " << gen.get_melee_coolStat() << std::endl;
            } else {
                std::cout << "- " << " " << gen.get_melee_coolStat() << std::endl;
            }
       } 
}

void AbilityLoop(int abilityRand) {
    for(int i = 0; i <= abilityRand; i++) { 
        int posVNeg = rand() % 2 + 1; //if 1, positive, if 2, negative 
        int prec = rand() % 70 + 1; //the precent of the stat
            if(posVNeg == 1) {
                std::cout << "+ " << " " << gen.get_melee_ability() << std::endl;
            } else {
                std::cout << "- " << " " << gen.get_melee_ability() << std::endl;
            }
       } 
}
}
//holds all the gun getter loops for generate
namespace gunLoops {
    void numStatLoop(int numStatRand) {
    for(int i = 0; i <= numStatRand; i++) { 
        int posVNeg = rand() % 2 + 1; //if 1, positive, if 2, negative 
        int prec = rand() % 70 + 1; //the precent of the stat
            if(posVNeg == 1) {
                std::cout << "+ " << prec << "% " << gen.get_gun_numStats() << std::endl;
            } else {
                std::cout << "- " << prec << "% " << gen.get_gun_numStats() << std::endl;
            }
       } 
}

void coolStatLoop(int numStatRand) {
    for(int i = 0; i <= numStatRand; i++) { 
        int posVNeg = rand() % 2 + 1; //if 1, positive, if 2, negative 
            if(posVNeg == 1) {
                std::cout << "+ " << " " << gen.get_gun_coolStat() << std::endl;
            } else {
                std::cout << "- " << " " << gen.get_gun_coolStat() << std::endl;
            }
       } 
}
}
//holds all the proj getter loops for generate
namespace projLoops {
void numStatLoop(int numStatRand) {
    for(int i = 0; i <= numStatRand; i++) { 
        int posVNeg = rand() % 2 + 1; //if 1, positive, if 2, negative 
        int prec = rand() % 70 + 1; //the precent of the stat
            if(posVNeg == 1) {
                std::cout << "+ " << prec << "% " << gen.get_proj_numStats() << std::endl;
            } else {
                std::cout << "- " << prec << "% " << gen.get_proj_numStats() << std::endl;
            }
       } 
}

void coolStatLoop(int numStatRand) {
    for(int i = 0; i <= numStatRand; i++) { 
        int posVNeg = rand() % 2 + 1; //if 1, positive, if 2, negative 
            if(posVNeg == 1) {
                std::cout << "+ " << " " << gen.get_proj_coolStats() << std::endl;
            } else {
                std::cout << "- " << " " << gen.get_proj_coolStats() << std::endl;
            }
       } 
}
}
void generate() {
    clearScreen();
    std::cout << gen.get_name_n() << " " << gen.get_name_v() << std::endl; //creates the name

    srand(time(0));
    int numStatRand = rand() % 7 + 1; //how many numStats
    int CoolStatRand = rand() % 3 + 1; //how many coolStats
    int AbilityRand = rand() % 2 + 1; //how many abilites
    if(weaponType::melee) {
       Meleeloops::numStatLoop(numStatRand);
       Meleeloops::coolStatLoop(CoolStatRand);
       Meleeloops::AbilityLoop(AbilityRand);
       } //end of melee if
    else if(weaponType::gun) {
        gunLoops::numStatLoop(numStatRand);
        gunLoops::coolStatLoop(CoolStatRand);
    } else {
        projLoops::coolStatLoop(CoolStatRand);
        gunLoops::numStatLoop(numStatRand);
    }
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
    generate();
}

int main() {
    std::cout << "-----------------------------------------------------------------------------------------------------------------------" << std::endl;
    std::cout << "Team Fortress 2 Random Weapon Generator!" << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------------------------------------" << std::endl;
    std::cout << "Set weapon type to generate" << std::endl;
    std::cout << "2. Melee" << std::endl;
    std::cout << "3. Gun" << std::endl;
    std::cout << "4. Projectile" << std::endl;
    std::string in;
    std::cin >> in;
    in_check(in);

}