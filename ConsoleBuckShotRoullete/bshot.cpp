#include <iostream>
#include <string>
#include <time.h>
using namespace std;
class GameMechanics{
public:
    void ShotSelf(){
        
    }
private:
};
class Player{
private:
    string name;
    int currentRound = 0;
    int health[3] = {3,4,5};
    void Info(){
        cout << "Current game - "<<currentRound+1;
        cout << "Your Health - " << health[currentRound];
        }

    Player(){
        name = SetName();
    }
    string SetName(){
        string _temp01;
        cin >> _temp01;
        return _temp01;
    }
};
class Enemy{

};
int main(){
    srand(time(NULL));
    return 0;
}