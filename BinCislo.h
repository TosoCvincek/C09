#pragma once
#include "IVystup.h"
class BinCislo
{
private:
	long long cislo = 0;
	long long Bin2Dek(const char *bincislo);
	char *Dek2Bin(char*pombuf, long long pcislo);
public:
	BinCislo(long long dekcislo = 0) :	cislo(dekcislo) {}
	BinCislo(const char *bincislo) : cislo(Bin2Dek(bincislo)) {}
	~BinCislo();
	friend BinCislo operator + (BinCislo op1, BinCislo op2) { return op1.cislo + op2.cislo; };
	BinCislo operator - (BinCislo op2) { return cislo - op2.cislo; };
	BinCislo operator * (BinCislo op2) { return cislo * op2.cislo; };
	BinCislo operator / (BinCislo op2) { return cislo / op2.cislo; };
	bool operator < (BinCislo op2) { return (cislo < op2.cislo); };
	bool operator > (BinCislo op2) { return (cislo > op2.cislo); }; // a podobne mozno definovaù oper·tory <= >= == != .....
	void ToString(IVystup &vystup);
};

