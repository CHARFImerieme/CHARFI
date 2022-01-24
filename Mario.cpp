#include "Mario.h"

//Consctructeur
Mario::Mario(){

};

//destructeur
Mario::~Mario(){
	std::cout << this->WhatAmI() << " " << this << " n'existe plus " << std::endl;
}

std::string Mario::WhatAmI() const{
  std::string name = "Mario";
  return name;
}
