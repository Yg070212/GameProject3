#pragma once
#include "Terran.h"
#include <iostream>

using namespace std;

class SiegeTank : public Terran
{
public:
	SiegeTank();

	void Stats() override;
};

