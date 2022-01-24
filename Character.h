#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>

class Character{
protected: 
	float speed_;
		float max_speed_;

public:
	Character();
	virtual ~Character();
	virtual void Accelerate();
  	virtual void Break ();
  	virtual std::string WhatAmI() const = 0;
  	inline float speed() const;
};

inline float Character::speed() const {
	return speed_;
};

#endif /* CHARACTER_H */