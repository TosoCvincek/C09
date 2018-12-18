#pragma once
#include "VystupSubor.h"
class VystupXml : public VystupSubor
{
public:
	VystupXml(const char *menoSuboru);

	virtual char * Vypis(char * cielbuf) override;
};

