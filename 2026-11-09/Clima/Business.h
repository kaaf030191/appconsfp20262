class Business {
private:
	unsigned int daysQuantity;
	float morningTemperatureTemp;
	float afternoonTemperatureTemp;
	float totalTemperature = 0;
	float totalAverageTemperature;
	float maxTemperature = -100;
	int temperatureMaxDay;//1-30
	bool temperatureMaxSlot;//true => mañana, false => tarde
	int temperatureInestability = 0;
	std::string climateType;
	
public:
	bool isValidRange(int value, int min, int max);
	void registerDaysQuantity();
	void registerTemperature();
	void showData();
};
