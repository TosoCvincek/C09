#include "BinCislo.h"
#include <cstring>
#include <cmath>
BinCislo::~BinCislo()
{
}

void BinCislo::ToString(IVystup & vystup)
{
	char pombuf[66];
	vystup.Vypis(Dek2Bin(pombuf, cislo));

}

long long BinCislo::Bin2Dek(const char * bincislo)
{
	long dcislo = 0;
	if (bincislo && *bincislo) {
		int dlzka = strlen(bincislo);
		char * pomBinCislo = new char[dlzka +1] ;
		if (pomBinCislo) {
			strcpy(pomBinCislo, bincislo);
			strrev(pomBinCislo);
			long long jednotka = 1;
			int i = 0;
			while (pomBinCislo[i]) {
				if (pomBinCislo[i] == '1') {
					dcislo += (jednotka << i);
				}
				i++;
			}
			if (bincislo[0] == '-') {
				dcislo = -dcislo;
			}
			delete[] pomBinCislo;
		}
		
	}
	return dcislo;
}

char * BinCislo::Dek2Bin(char * pombuf, long long pcislo)
{
	if (pombuf) {
		long long pomdekCislo = abs(cislo);
		int i = 0;
		do {
			pombuf[i++] = pomdekCislo % 2 + 0x30;
			pomdekCislo >>= 1;  //pomdekCislo /= 2;
 		} while (pomdekCislo > 0);
		if (pcislo < 0) {
			pombuf[i++] = '-';
		}
		pombuf[i] = '\0';
	}
	return strrev(pombuf);
}
