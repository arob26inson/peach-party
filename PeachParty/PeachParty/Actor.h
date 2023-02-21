#ifndef ACTOR_H_
#define ACTOR_H_

#include "GraphObject.h"
#include <string>

// Students:  Add code to this file, Actor.cpp, StudentWorld.h, and StudentWorld.cpp
class Actor: public GraphObject{
    public:
        Actor(int name, int x, int y); // do you multiply this by 16?
        virtual void doSomething() = 0;//TODO: should this be a pure virtual function?
        bool isInactive();
        void setInactive();
        
        
    private:
        bool inactive;
};

class Avatar: public Actor{
    const bool WAITING_TO_ROLL = 0;
    const bool WALKING = 1;
public:
    Avatar(int name, int x, int y, int playerNumber); //Name should be YOSHI or PEACH
    virtual void doSomething();
private:
    int m_ticks_to_move;
    bool m_state;
    int m_playerNumber;
    
};

#endif // ACTOR_H_
