#include "VystupSubor.h"

VystupSubor::VystupSubor(const char * menoSuboru)
	:fd((menoSuboru && *menoSuboru) ? fopen(menoSuboru, "wt+") : nullptr)
{
}

VystupSubor::~VystupSubor()
{
	if (fd) {
		fclose(fd);
	}
}

char * VystupSubor::Vypis(char * cielbuf)
{
	if (cielbuf && fd) {
		fprintf(fd, "%s\n", cielbuf);
	}
	return cielbuf;
}
