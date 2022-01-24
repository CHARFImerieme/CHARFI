#include <iostream>
using std::cout;
using std::endl;
#include "Character.h"
#include "Mario.h"
#include "Yoshi.h"
#include "vector"

int main() {
  std::vector<Character*> gamer; 
 // On considère dans cette course 5 joueurs : 3 marios et 2 Yoshis

 for (int i=0 ; i<5 ; ++i ){ // la méthode iterators
  if(i<3){
    gamer.push_back(new Mario());
  }
  else{
    gamer.push_back(new Yoshi(i));
  }
 }

int a[]={0,1,2,3,4};
for (int j : a){ // la méthode ranged based loop 
  std::cout << "Le gamer numéro: " << j << " est un " << gamer[j]->WhatAmI()<< " et a une vitesse de " << gamer[j]->speed() << endl;
  gamer[j]->Accelerate();
  std::cout << "Après accelération, le gamer numéro " << j << " et de personnage " << gamer[j]->WhatAmI()<< " a maintenant une vitesse de "<<gamer[j]->speed() << endl;

}


// TEST DE NOS FONCTIONS: 
  std::cout <<  " ON TESTE ICI NOS FONCTIONS  " << std::endl;
  gamer[0]->Accelerate(); 
  gamer[4]->Accelerate();
  return 0; 
}
