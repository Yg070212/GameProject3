#include "Vultuer.h"

Vultuer::Vultuer()
{
	attack = 20;
	health = 80;
	defense = 0;
}

void Vultuer::Stats()
{
	cout << "Attack : " << attack << endl;
	cout << "Health : " << health << endl;
	cout << "Defenes : " << defense << endl;
}
