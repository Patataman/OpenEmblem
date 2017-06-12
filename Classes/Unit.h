#ifndef __UNIT_H__
#define __UNIT_H__

#include "cocos2d.h"
#include "Item.h"

USING_NS_CC;

class Unit : public cocos2d::Sprite
{
public:

	short int hp, atk, movement;
	//available (true) unavailable (false)
	bool state;
	Vec2 position;
	Item weapon;
	//short int atk;
	//short int movement;

    //~Unit();
    //static Unit* create(std::string filename);

    virtual void setAttr(short int hp, short int atk, short int movement, Vec2 pos, Item weapon);
    virtual void move(Vec2 dest);
    virtual void changeState(bool state);
    virtual bool attack(Unit* enemy);
    //virtual void 
    //bool idkwhatelse();
};

#endif // __UNIT_H__