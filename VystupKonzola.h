#pragma once
#include "IVystup.h"
class VystupKonzola : public IVystup
{
public:
	virtual char *Vypis(char * cielbuf);
};

