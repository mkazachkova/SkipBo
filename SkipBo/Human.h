#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"

class Human : public Player {
    friend class SkipBo;
    public :
    Human(std::string name);
    
    Human(std::string name, std::vector<int> pStock, std::vector<int> pHand, std::vector<int> d1,
          std::vector<int> d2, std::vector<int> d3, std::vector<int> d4);
    
    
    ~Human(); // Destructor
    
    void move(Deck * deck, std::vector<BuildPile*> buildPiles, std::vector<int> & finished, int choice, int numPlayers);
    
    
} ;




#endif
