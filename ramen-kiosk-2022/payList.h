#pragma once

#include <string>
#include "Pay.h"

class PayList
{
private:
	Pay** list;
	unsigned int count;

public:
	PayList(void);
	~PayList(void);

	Pay* AddPay(void);
	void DeletePay(unsigned int index);

	Pay* GetPay(unsigned int index);

	const unsigned int& Count = count;
};
