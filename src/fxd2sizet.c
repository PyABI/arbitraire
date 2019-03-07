#include "internal.h"

/* Copyright 2017-2019 CM Graff */


size_t fxd2sizet(fxdpnt *a, int base)
{
	size_t ret = 0;
	size_t i = 0;
	for (; i < a->lp; ++i) {
		ret = (base * ret) + (a->number[i]);
	}
	return ret;
}

