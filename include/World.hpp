#ifndef _WORLD_H
#define _WORLD_H

#include <vector>

#include <Media.hpp>
#include <Cajita.hpp>
#include <State/WorldState.hpp>

class World {
public:
    enum class StateEnum { Presentation = 0, Move };
private:
    bool mContinue;
    Media mMedia;
    std::vector<Cajita> mCajitas;
    size_t mActiveCajita;
    std::vector<WorldState*> mStates;
    StateEnum mPresentState;
public:
    
    World();
    ~World();
    void Loop();
    void Update();
    void Quit() { mContinue = false; }
    WorldState* GetState() {
        return mStates.at(static_cast<size_t>(mPresentState));
    }
    void HandleInput() { GetState()->HandleInput(); }
    void PushCajita(Cajita c) { mCajitas.push_back(c); }
    void PopCajita() { mCajitas.pop_back(); }
    bool ExistsActiveCajita() { return mActiveCajita < mCajitas.size(); }

    Cajita& GetActiveCajita() { return mCajitas[mActiveCajita];}
    void ChangeState(StateEnum nextState) {
        if (nextState != mPresentState) {
            GetState()->OnExit();
            mPresentState = nextState;
            GetState()->OnEnter();
        }
    }
};


#endif
