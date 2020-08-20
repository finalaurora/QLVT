#pragma once
#include <iostream>
#include <stdlib.h>

struct DATE {
	int day;
	int year;
	int month;
};

void 	date_getdate(DATE &date);
void 	date_printshort(DATE date);
void 	date_printlong(DATE date);
int 	no_of_date(DATE d);
