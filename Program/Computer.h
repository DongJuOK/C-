#pragma once
#include "KeyBoard.h"
#include "Mouse.h"

class Computer : public Mouse, KeyBoard
{
public:
	Computer();

	void Use();

	~Computer();
};

