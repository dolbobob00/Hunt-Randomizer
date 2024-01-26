#include <string>
#include <iostream>
#include <time.h>
#include <vector>
using namespace std;
class WeaponsAndToolsAndCons{
public:
    vector <string> meleeTools = {
        "Throwing Axes","Throwing Knives","Dusters","Heavy Knife","Knife","Knuckle Knife"
        };
    vector <string> consumables = {"Big Dynamite Bundle",
        "Dynamite Bundle",
        "Sticky Bomb",
        "Dynamite Stick",
        "Waxed Dynamite Stick",
        "Frag Bomb",
        "Fire Beetle",
        "Stalker Beetle",
        "Stalker Choke Beetle",
        "Ammo Box",
        "Antidote Shot",
        "Chaos Bomb",
        "Concertina Bomb",
        "Fire Bomb",
        "Flash Bomb",
        "Hellfire Bomb",
        "Hive Bomb",
        "Liquid Fire Bomb",
        "Poison Bomb",
        "Stamina Shot",
        "Vitality Shot",
        "Weak Antidote Shot",
        "Weak Stamina Shot",
        "Weak Vitality Shot",
        "Regeneration Shot",
        "Regeneration Weak Shot",
        "Medical Pack",
        "Tool Box"
    };
    vector <string> randomTools = {
        "Spyglass","Electric Lamp","Alert trip Mine","Blank Fire Decoys","Derringer","Choke Bomb","Decoy Fuses","Fusees",
        "Poison Trip Mine","Decoys"
    };
    vector <string> randomTools2 = {"Concertina Trip Mine","Quad Derringer Pennyshot","Flare Pistol"};
    vector<string> big = {
        "Nitro Express Rifle",
        "Crossbow",
        "Romero 77",
        "Romero 77 Talon",
        "Romero 77 Alamo",
        "Specter 1882",
        "Winfield 1893 Slate",
        "Winfield 1893 Slate Riposte",
        "Crown & King Auto-5",
        "Caldwell Rival 78",
        "Specter 1882 Bayonet",
        "Winfield 1887 Terminus",
        "Bomb Lance",
        "Sparks LRR",
        "Sparks LRR Silencer",
        "Sparks LRR Sniper",
        "Martini-Henry IC1",
        "Martini-Henry IC1 Deadeye",
        "Martini-Henry IC1 Marksman",
        "Martini-Henry IC1 Riposte",
        "Martini-Henry IC1 Ironside",
        "Mosin-Nagant M1891",
        "Mosin-Nagant M1891 Avtomat",
        "Mosin-Nagant M1891 Bayonet",
        "Mosin-Nagant M1891 Sniper",
        "Lebel 1886",
        "Lebel 1886 Marksman",
        "Lebel 1886 Talon",
        "Springfield 1866",
        "Springfield 1866 Marksman",
        "Lebel 1886 Aperture",
        "Springfield 1866 Bayonet",
        "Vetterli 71 Karabiner",
        "Vetterli 71 Karabiner Bayonet",
        "Vetterli 71 Karabiner Deadeye",
        "Berthier Mle 1892",
        "Berthier Mle 1892 Riposte",
        "Berthier Mle 1892 Deadeye",
        "Vetterli 71 Karabiner Silencer",
        "Berthier Mle 1892 Marksman",
        "Springfield M1892 Krag",
        "Springfield M1892 Krag Bayonet",
        "Springfield M1892 Krag Sniper",
        "Vetterli 71 Karabiner Cyclone",
        "Winfield M1876 Centennial",
        "Winfield M1876 Centennial Sniper",
        "Winfield M1876 Centennial Trauma",
        "Drilling",
        "Drilling Handcannon",
        "Drilling Hatchet",
        "Winfield M1873",
        "Winfield M1873 Aperture",
        "Winfield M1873 Musket Bayonet",
        "Winfield M1873 Swift",
        "Winfield M1873 Talon",
        "Winfield M1873C",
        "Winfield M1873C Marksman",
        "Winfield M1873C Silencer",
        "LeMat Mark II Carbine",
        "LeMat Mark II Carbine Marksman",
        "Nagant M1895 Officer Carbine"
    };
    vector<string> medium = {
        "Hunting Bow",
        "Romero 77 Handcannon",
        "Romero 77 Hatchet",
        "Mosin-Nagant M1891 Obrez",
        "Mosin-Nagant M1891 Obrez Drum",
        "Mosin-Nagant M1891 Obrez Mace",
        "Springfield 1866 Compact",
        "Springfield 1866 Compact Deadeye",
        "Springfield 1866 Compact Striker",
        "Caldwell Conversion Uppercut Precision",
        "Caldwell Uppercut Precision Deadeye",
        "Winfield M1876 Centennial Shorty Silencer",
        "Winfield M1876 Centennial Shorty",
        "LeMat Mark II UpperMat",
        "Specter 1882 Compact",
        "Winfield M1873C Vandal",
        "Winfield M1873C Vandal Striker",
        "Winfield M1873C Vandal Deadeye",
        "Scottfield Model 3 Precision",
        "Caldwell Rival 78 Handcannon",
        "Winfield 1887 Terminus Handcannon",
        "Dolch 96 Precision",
        "Nagant M1895 Deadeye",
        "Nagant M1895 Precision",
        "Bornheim No. 3 Match",
        "Combat Axe",
        "Railroad Hammer"
    };
    vector<string> small = {
        "Hand Crossbow",
        "Sparks LRR Pistol",
        "Caldwell Conversion Uppercut",
        "Caldwell Pax Trueshot",
        "Caldwell Pax",
        "Caldwell Pax Claw",
        "Scottfield Model 3",
        "Scottfield Model 3 Brawler",
        "Scottfield Model 3 Spitfire",
        "Scottfield Model 3 Swift",
        "Caldwell Conversion Chain Pistol",
        "Caldwell Conversion Pistol",
        "Dolch 96",
        "LeMat Mark II Revolver",
        "Caldwell 92 New Army",
        "Caldwell 92 New Army Swift",
        "Dolch 96 Claw",
        "Dolch 96 Deadeye",
        "Nagant M1895",
        "Nagant M1895 Officer",
        "Nagant M1895 Officer Brawler",
        "Nagant M1895 Silencer",
        "Bornheim No. 3",
        "Bornheim No. 3 Extended",
        "Bornheim No. 3 Silencer",
        "Cavalry Saber",
        "Machete",
        "Baseball Bat",
        "Katana"
    };
};
class Hunter : WeaponsAndToolsAndCons{
public:
    Hunter(string Name,bool hasIntendant){
        hunter = SpecNames(Name);
        isHaveIntendant = hasIntendant;
    }
    Hunter(){
        cout << "You must input name and perk info!";
    }
    ~Hunter(){
        sex();
    }
    void sex(){
        cout << "sex";
    }
    int GetLoadout(){
        if(hunter > 0){
            cout << "/n" <<"Would You Get Your standart LoadOut? Y - yes, N - no.";
            char acc;
            cin >> acc;
            if(acc == 'y' || acc == 'Y'){
                if(hunter == 1){
                    BasedLoadoutsDolbobob();

                }
                else{
                    BasedLoadouts11();
                }
                return 0;
            }
        }
        cout << "Weapon 1 = " << RandomizeLoadout() << endl;
        cout << "Weapon 2 = " << RandomizeLoadout() << endl;
        consTools();
        return 1;
    }
private:
    bool isHaveIntendant = false;
    int hunter = 0;
    int boxes = 5;
    int max = 3;
    int maxWeaponCarryable = 2;
    void consTools(){
        cout <<endl<< "Tools 1 = " << meleeTools[rand() % meleeTools.size()] << endl;
        cout << "Tools 2 = " << "First aid Kit" << endl;
        cout << "Tools 3 = " << randomTools[rand() % randomTools2.size()]<< endl;
        cout << "Tools 4 = " << randomTools2[rand() % randomTools2.size()]<< endl;
        cout << "Consumable 1 = " << consumables[rand() % consumables.size()] << endl;
        cout << "Consumable 2 = " << consumables[rand() % consumables.size()] << endl;
        cout << "Consumable 3 = " << consumables[rand() % consumables.size()] << endl;
        cout << "Consumable 4 = " << consumables[rand() % consumables.size()];
    }
    void BasedLoadouts11(){
         int temp = rand() % 3;
         if(temp == 0){
            cout << "Cenntenial + pax";
         }
         else if(temp == 1){
            cout << "Crown&king + pax";
         }
         else if(temp == 2){
            cout << "Nitro + Uppercut";
         }
         else if(temp == 3){
            cout << "Bow + Bow";
         }
         consTools();
    }
    void BasedLoadoutsDolbobob(){
        int temp = rand() % 4 + 1;
        if(temp == 4){
            cout << "Bow + Katana";
        }
        else if(temp == 1){
            cout << "Centennial Winfield silencer + Sablya";
        }
        else if(temp == 2){
            cout << "Vetterly + sablya";
        }
        else if(temp == 3){
            cout << "Sparks (silencer or standart) + crossbow with chokes";
        }
        consTools();
    }
    string RandomizeLoadout(){
        int temp = rand() % max + 1;
        if(temp <= boxes){
            if(maxWeaponCarryable >= 0){
                boxes -= temp;
                return GetWeapon(temp);
            }
        }
        else{
            return RandomizeLoadout();
        }
        return "SexyLady";
    }
    string GetWeapon(int box){
        maxWeaponCarryable--;
        if(box == 3){
            isHaveIntendant ? max = 2 : max = 1;
            return big[rand() % big.size()];
        }
        else if(box == 2){
            isHaveIntendant ? max = 3 : max = 2;
            return medium[rand()% medium.size()];
        }
        return small[rand()% small.size()];
    }
    int SpecNames(string name){
        if(name == "dolbobob"){
            return 1;
        }
        else if(name == "11:11"){
            return 2;
        }
        return 0;
    }
};
void HuntRandomizerStart(){
    cout << "************HUNT SHOWDOWN LOADOUT RANDOMIZER!!!**********";
    string name;
    cout << endl << "WHAT'S YOUR NAME HUNTER?";
    cout << endl << "My name is ";
    cin >> name;
    bool intendant = false;
    char ans;
    cout << endl << "************HELLO GREATEST HUNTER " << name << " **********";
    cout << endl << "DO YOU HAVE INTENDANT? y - yes n - no" << endl;
    cin >> ans;
    if(ans == 'y' || ans == 'Y'){
        intendant = true;
    }
    Hunter hunt(name,intendant);
    hunt.GetLoadout();
    cout << endl << endl;
    cout << "WHAT A LOADOUT!";
    cout << endl << "*********BYE BYE**********";
    return;
}
int main(){
    srand(time(NULL));
    HuntRandomizerStart();
    string x;
    cin >> x;
}
