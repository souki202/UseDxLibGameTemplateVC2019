#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <vector>
#include "DxLib.h" //C直下にDxLib_なんちゃらを入れてね
#include "CommonSettings.h"
#include "InputDevice.h"
using namespace CommonSettings;

class Form
{
public:
	Form();
	~Form();

	bool update();
	bool draw();

private:
};
//---------------------------------------------------------------------------