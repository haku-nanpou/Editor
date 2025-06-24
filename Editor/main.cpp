//-----------
//
// main.cpp
//
//-----------
#include "define.h"
#include "input.h"
#include <iostream>

int main()
{
    via::cout << "終了するにはEscキーを押してください..." << via::endl;

    while (true)
    {
        Input::instance().clear();
        Input::instance().update();

        if (Input::getKeyDown(Key_Escape))
            break;
    }
}