#include "input.h"
#include <Windows.h>

void Input::update()
{
    mPrevKey = mKey;

    for (u32 i = 0; i < MaxKeyCode; ++i)
    {
        const bool isDown = GetAsyncKeyState(i) & 0x8000;
        mKey[i] = isDown;
        mKeyDown[i] = isDown && !mPrevKey[i];
        mKeyUp[i] = !isDown && mPrevKey[i];
    }
}

void Input::clear()
{
    mKeyDown.reset();
    mKeyUp.reset();
}