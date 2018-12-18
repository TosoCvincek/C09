#include "VystupXml.h"
VystupXml::VystupXml(const char * menoSuboru) :VystupSubor(menoSuboru)
{
	VystupSubor::Vypis((char*)"sdsdsd");
}


char * VystupXml::Vypis(char * cielbuf)
{
	VystupSubor::Vypis((char*)"<text>");
	VystupSubor::Vypis(cielbuf);
	VystupSubor::Vypis((char*)"<\\text>");
	return nullptr;
}
