#include "BinCislo.h"
#include "VystupKonzola.h"
#include "VystupSubor.h"
#include "VystupXml.h"
int main()
{
	BinCislo a("1011"), b("1011"), c;
	c = a + b;
	VystupKonzola konzola;
	VystupSubor subor("cislobin.txt");
	VystupXml xml("cislobin.xml");
	c.ToString(subor);
	c.ToString(konzola);
	c.ToString(xml);
	return 0;
}