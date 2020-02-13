#pragma once
#include "../main.hpp"
#include <vector>

class csv_data
{
	public:
		csv_data(int samples);
		std::vector<double> * y;
		std::vector<double> * x;
		~csv_data();
};
