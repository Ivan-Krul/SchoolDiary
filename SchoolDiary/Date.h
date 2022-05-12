#pragma once
#include <ctime>

class Date {
	int HashData;
public:
	void Now() {
		std::time_t t = std::time(0);
#pragma warning(suppress : 4996)
		std::tm* now = std::localtime(&t);

		SetDay(now->tm_mday);
		SetMonth(now->tm_mon);
		SetYear(now->tm_year);
	}

	void SetDay(int Day) { HashData = Day % 32; }
	void SetMonth(int Month) { HashData = Month*0x100; }
	void SetYear(int Year) { HashData = Year * 0x1000; }

	int GetDay() { return HashData % 32; }
	int GetMonth() { return (HashData/0x100) % 12; }
	int GetYear() { return HashData / 0x1000; }
	
};

