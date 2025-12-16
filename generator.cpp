#include <string>
#include "stats.cpp"
#include "name.cpp"
#include <cstdlib>
#include <chrono>
/*
---------------------------------------------------------------------
Generator class.
---------------------------------------------------------------------
contains methods that generate random stats for the specified type of weapon and stat in the method name
for example, get_melee_numStats(), will return a random member of the string array Melee::Numstat.

The methods of generator include: get_melee_numStats, get_melee_coolStat, get_melee_ability, get_gun_numStats, get_gun_coolStat, get_proj_numStats, get_proj_coolStat, and get_name.
*/
class generator {
    public:
    //returns a random member of Melee::Numstat
    std::string get_melee_numStats() {
        MeleeStat::do_num_stats();
        srand(time(0));
        int random = rand() % MeleeStat::Numstats.size() + 1;
        return MeleeStat::Numstats[random];
    }
    //returns a random member of Melee::Coolstat
    std::string get_melee_coolStat() {
        MeleeStat::do_cool_stats();
        srand(time(0));
        int random = rand() % MeleeStat::Coolstats.size(); + 1;
        return MeleeStat::Coolstats[random];
    }
    //returns a random member of Melee::abilites
    std::string get_melee_ability() {
        MeleeStat::do_ability();
        srand(time(0));
        int random = rand() % MeleeStat::abilites.size(); + 1;
        return MeleeStat::abilites[random];
    }
/*
---------------------------------------------------------------------
GunStat
---------------------------------------------------------------------
*/
    //returns a random member of GunStat::numStat
    std::string get_gun_numStats() {
        GunStat::do_num_stats();
        srand(time(0));
        int random = rand() % GunStat::stats.size() + 1;
        return GunStat::stats[random];
    }
    //returns a random member of GunStat::coolStat
    std::string get_gun_coolStat() {
        GunStat::do_cool_stats();
        srand(time(0));
        int random = rand() % GunStat::Coolstats.size() + 1;
        return GunStat::Coolstats[random];
    }
/*
---------------------------------------------------------------------
ProjStat
---------------------------------------------------------------------
*/
    //returns a random member of projStat::numStat
    std::string get_proj_numStats() {
        projStat::do_num_stats();
        srand(time(0));
        int random = rand() % projStat::stats.size() + 1;
        return projStat::stats[random];
    }
    //returns a random member of prokStat::coolStat
    std::string get_proj_coolStats() {
        projStat::do_cool_stats();
        srand(time(0));
        int random = rand() % projStat::Coolstats.size() + 1;
        return projStat::Coolstats[random];
    }
/*
---------------------------------------------------------------------
Name
---------------------------------------------------------------------
*/
    std::string get_name_n() {
        name::do_nouns();
        srand(time(0));
        int random = rand() % name::nameNoun.size();
        return name::nameNoun[random];
    }
    std::string get_name_v() {
        name::do_vrbs();
        srand(time(0));
        int randomVrb = rand() % name::nameVrb.size();
        return name::nameVrb[randomVrb];
    }
};