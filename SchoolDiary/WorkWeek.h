#pragma once
#include "WorkDay.h"

class WorkWeek {
	WorkDay* pmDays;
	int Days;

public:
	WorkWeek(int Days) {
		this->Days = Days;

		pmDays = new WorkDay[Days];
	}

};

