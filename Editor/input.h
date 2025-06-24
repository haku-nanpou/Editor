//-----------
//
// input.h
//
//-----------
#ifndef INPUT_H
#define INPUT_H

#include "define.h"
#include "singleton.h"
#include <bitset>

enum Key
{
    // ����L�[
    Key_Escape      = 0x1B,
    Key_Space       = 0x20,
    Key_Enter       = 0x0D,
    Key_Shift       = 0x10,
    Key_Control     = 0x11,
    Key_Alt         = 0x12,
    Key_Tab         = 0x09,
    Key_Backspace   = 0x08,
    Key_Delete      = 0x2E,
    Key_Insert      = 0x2D,
    Key_Home        = 0x24,
    Key_End         = 0x23,
    Key_PageUp      = 0x21,
    Key_PageDown    = 0x22,

    // ���L�[
    Key_Left    = 0x25,
    Key_Up      = 0x26,
    Key_Right   = 0x27,
    Key_Down    = 0x28,

    // ����
    Key_0 = 0x30,
    Key_1 = 0x31,
    Key_2 = 0x32,
    Key_3 = 0x33,
    Key_4 = 0x34,
    Key_5 = 0x35,
    Key_6 = 0x36,
    Key_7 = 0x37,
    Key_8 = 0x38,
    Key_9 = 0x39,

    // �p��
    Key_A = 0x41,
    Key_B = 0x42,
    Key_C = 0x43,
    Key_D = 0x44,
    Key_E = 0x45,
    Key_F = 0x46,
    Key_G = 0x47,
    Key_H = 0x48,
    Key_I = 0x49,
    Key_J = 0x4A,
    Key_K = 0x4B,
    Key_L = 0x4C,
    Key_M = 0x4D,
    Key_N = 0x4E,
    Key_O = 0x4F,
    Key_P = 0x50,
    Key_Q = 0x51,
    Key_R = 0x52,
    Key_S = 0x53,
    Key_T = 0x54,
    Key_U = 0x55,
    Key_V = 0x56,
    Key_W = 0x57,
    Key_X = 0x58,
    Key_Y = 0x59,
    Key_Z = 0x5A,

    // �t�@���N�V�����L�[
    Key_F1  = 0x70,
    Key_F2  = 0x71,
    Key_F3  = 0x72,
    Key_F4  = 0x73,
    Key_F5  = 0x74,
    Key_F6  = 0x75,
    Key_F7  = 0x76,
    Key_F8  = 0x77,
    Key_F9  = 0x78,
    Key_F10 = 0x79,
    Key_F11 = 0x7A,
    Key_F12 = 0x7B,
};

class Input : public Singleton<Input>
{
public:
	static bool getKey(Key key) { return instance().mKey[static_cast<int>(key)]; }
    static bool getKeyDown(Key key) { return instance().mKeyDown[static_cast<int>(key)]; }
    static bool getKeyUp(Key key) { return instance().mKeyUp[static_cast<int>(key)]; }

	void update();
	void clear();

private:
	friend class Singleton<Input>;
	Input() = default;
	~Input() = default;

	static constexpr u32 MaxKeyCode = 256;
	via::bitset<MaxKeyCode> mKey;
    via::bitset<MaxKeyCode> mPrevKey;
    via::bitset<MaxKeyCode> mKeyDown;
    via::bitset<MaxKeyCode> mKeyUp;
};

#endif