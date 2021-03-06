#ifndef _CAJITA_H
#define _CAJITA_H

#include <cstdint>

#include <Angle.hpp>



class Cajita {
    uint64_t mColor;
public:
    int mX, mY, mZ;
    int mPosX, mPosY;
    Angle mAngle;

    Cajita(int x = 1, int y = 1)
        : mX{x}, mY{y}, mZ{1}, mPosX{}, mPosY{}, mAngle{} {}
    void MoveY(int i) { mPosY += i; }
    void MoveX(int i) { mPosX += i; }
    void Rotate(int i) { mAngle += i; }
    
};



#endif
