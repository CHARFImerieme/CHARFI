#include <string>
#include <iostream>
#include "Character.h"

class Mario: public Character{
  public:
    Mario();
    virtual ~Mario();
    virtual std::string WhatAmI() const;


};