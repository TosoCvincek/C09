#pragma once
#include "IVystup.h"
#include <cstdio>
class VystupSubor : public IVystup
{
private:
	FILE *fd;
public:
	VystupSubor(const char *menoSuboru);
	~VystupSubor();

	// Inherited via IVystup
	virtual char * Vypis(char * cielbuf) override;
};

