#pragma once

#include "Keyboard.h"
#include "Motherboard.h"

class CPU {
public:
	CPU(Keyboard& obj);
private:
	Keyboard& m_keyboard;
	Motherboard m_motherboard;
};

