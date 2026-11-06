class Business {
private:
	int daysQuantity;
	int morningTemperatureTemp;
	int afternoonTemperatureTemp;
	
	
public:
	bool isValidRange(int value, int min, int max);
	void registerDaysQuantity();
};
