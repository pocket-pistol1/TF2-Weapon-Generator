#include <vector>
#include <string> // Need to include string header for std::string

//for all melee weapon stats
//this means no projectiles or firing speed or anything like that

/*
---------------------------------------------------------------------
MeleeStat
for all melee weapon stats
this means no projectiles or firing speed or anything like that
---------------------------------------------------------------------
*/
namespace MeleeStat {
    std::vector<std::string> Numstats = {" Swing Speed"};
    std::vector<std::string> Coolstats = {" On hit: bleed for 8s"};
    std::vector<std::string> abilites = {"Gain a Baseball to hit your enemies with!"};
    // Call MeleeStat::do_num_stats(), MeleesStat::do_cool_stats, etc... at the start of your main function 
    // or whenever needed.
    void do_num_stats() {
    Numstats.push_back(" Damage");
    Numstats.push_back(" Range");
    Numstats.push_back(" Critical Hit Chance");
    }
    //these are the cooler stats a weapon can have
    void do_cool_stats() {
        Coolstats.push_back("on miss: hit yourself, idiot");
        Coolstats.push_back("Crit vs. Burning Players");
        Coolstats.push_back("Crit vs. Non-Burning Players");
        Coolstats.push_back("Crit vs. Wet Players");
        Coolstats.push_back("Crit vs. Dry Players");
        Coolstats.push_back("Crit vs. Bleeding Players");
        Coolstats.push_back("Crit vs. Non-bleeding Players");
        Coolstats.push_back("Crit vs. Overhealed Players");
        Coolstats.push_back("Crit vs. Players Covered In Milk");
        Coolstats.push_back("Crit vs. Players Covered In Jarate");
        Coolstats.push_back("Mini-Crit vs. Burning Players");
        Coolstats.push_back("Mini-Crit vs. Non-Burning Players");
        Coolstats.push_back("Mini-Crit vs. Wet Players");
        Coolstats.push_back("Mini-Crit vs. Dry Players");
        Coolstats.push_back("Mini-Crit vs. Bleeding Players");
        Coolstats.push_back("Mini-Crit vs. Non-bleeding Players");
        Coolstats.push_back("Mini-Crit vs. Overhealed Players");
        Coolstats.push_back("Mini-Crit vs. Players Covered In Milk");
        Coolstats.push_back("Mini-Crit vs. Players Covered In Jarate");
        Coolstats.push_back("On hit: Inflict afterburn");
        Coolstats.push_back("On hit: Inflict Wet status");
        Coolstats.push_back("On hit: Inflict Overheal");
        Coolstats.push_back("On hit: Inflict Marked-For-Death");
        Coolstats.push_back("On hit: Inflict Reversed Controls");
        Coolstats.push_back("On hit: Inflict Afterburn");
        Coolstats.push_back("On hit: Inflict Cough Virus");
        Coolstats.push_back("No Random Critical Hits");
    }
    //unique abilites that the weapon has
    void do_ability() {
        abilites.push_back("Collect heads from you enemies.");
        abilites.push_back("Gain health on hit.");
        abilites.push_back("Heal back your opponents max health on kill.");
    }
}
/*
---------------------------------------------------------------------
Gunstat
for all gun stats
this means no swing speeds or whatever
---------------------------------------------------------------------
*/
namespace GunStat {
    std::vector<std::string> stats = {" Attack Speed"};
    std::vector<std::string> abilites = {"Collect Heads from your enemies."};
    std::vector<std::string> Coolstats = {"Mini-Crits vs. Players Marked For Death"};

    void do_num_stats() {
    stats.push_back(" Damage");
    stats.push_back(" Range");
    stats.push_back(" Firing Speed");
    stats.push_back(" Projectile Speed");
    stats.push_back(" Projectile Amount");
    stats.push_back(" Projectile Damage");
    stats.push_back(" Reload Speed");
    stats.push_back(" Clip size");
    }

    void do_cool_stats() {
        Coolstats.push_back("Mini-Crits vs. Burning Players");
        Coolstats.push_back("Mini-Crits vs. Non-Burning Players");
        Coolstats.push_back("Mini-Crits vs. Wet Players");
        Coolstats.push_back("Mini-Crits vs. Dry Players");
        Coolstats.push_back("Mini-Crits vs. Bleeding Players");
        Coolstats.push_back("Mini-Crits vs. Non-bleeding Players");
        Coolstats.push_back("Mini-Crits vs. Overhealed Players");
        Coolstats.push_back("Mini-Crits vs. Players Covered In Milk");
        Coolstats.push_back("Mini-Crits vs. Players Covered In Jarate");
        Coolstats.push_back("On hit: Inflict afterburn");
        Coolstats.push_back("On hit: Inflict wet status");
        Coolstats.push_back("On hit: Inflict Overheal");
        Coolstats.push_back("On hit: Inflict Marked-For-Death");
        Coolstats.push_back("No Random Critical Hits");
    }
}
/*
---------------------------------------------------------------------
ProjStat
for all projectile weapons
---------------------------------------------------------------------
*/
namespace projStat {
    std::vector<std::string> stats = {" Attack Speed"};
    std::vector<std::string> abilites = {"Collect Heads from your enemies."};
    std::vector<std::string> Coolstats = {"Mini-Crits vs. Players Marked For Death"};

    void do_num_stats() {
    stats.push_back(" Damage");
    stats.push_back(" Range");
    stats.push_back(" Firing Speed");
    stats.push_back(" Projectile Speed");
    stats.push_back(" Projectile Amount");
    stats.push_back(" Projectile Damage");
    stats.push_back(" Reload Speed");
    stats.push_back(" Clip size");
    stats.push_back(" Explosion Size");
    stats.push_back(" Projectile Lifetime");
    }

    void do_cool_stats() {
        Coolstats.push_back("Mini-Crits vs. Burning Players");
        Coolstats.push_back("Mini-Crits vs. Non-Burning Players");
        Coolstats.push_back("Mini-Crits vs. Wet Players");
        Coolstats.push_back("Mini-Crits vs. Dry Players");
        Coolstats.push_back("Mini-Crits vs. Bleeding Players");
        Coolstats.push_back("Mini-Crits vs. Non-bleeding Players");
        Coolstats.push_back("Mini-Crits vs. Overhealed Players");
        Coolstats.push_back("Mini-Crits vs. Players Covered In Milk");
        Coolstats.push_back("Mini-Crits vs. Players Covered In Jarate");
        Coolstats.push_back("On hit: Inflict afterburn");
        Coolstats.push_back("On hit: Inflict wet status");
        Coolstats.push_back("On hit: Inflict Overheal");
        Coolstats.push_back("On hit: Inflict Marked-For-Death");
        Coolstats.push_back("No Random Critical Hits");
    }
}
