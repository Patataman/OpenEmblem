#ifndef __MAIN_SCENE_H__
#define __MAIN_SCENE_H__

#include "cocos2d.h"

class MainScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void quitGame(cocos2d::Ref* pSender);
    void changeToBattle(cocos2d::Ref* pSender);
    void changeToOptions(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(MainScene);
};

#endif // __MAIN_SCENE_H__
