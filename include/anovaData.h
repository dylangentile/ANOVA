#pragma once
#include <vector>
class AnovaData {
public:
	AnovaData(unsigned x);
	~AnovaData();
	std::vector<std::vector<double>* > samples;



};