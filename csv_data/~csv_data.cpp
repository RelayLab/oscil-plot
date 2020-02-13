#include "csv_data.hpp"

csv_data::~csv_data(){
	delete this -> y;
	delete this -> x;
}
