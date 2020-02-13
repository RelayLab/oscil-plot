#include "csv_data.hpp"

csv_data::csv_data(int samples){

	this-> y  = new std::vector<double>();
	this-> x  = new std::vector<double>();

	this-> y -> push_back(0);
	this-> y -> push_back(1);
	this-> y -> push_back(2);
	this-> y -> push_back(3);
	this-> y -> push_back(4);
	this-> y -> push_back(5);
	this-> y -> push_back(6);
	this-> y -> push_back(7);
	this-> y -> push_back(8);
	this-> y -> push_back(9);

	this-> x -> push_back(0);
	this-> x -> push_back(1);
	this-> x -> push_back(2);
	this-> x -> push_back(3);
	this-> x -> push_back(4);
	this-> x -> push_back(5);
	this-> x -> push_back(6);
	this-> x -> push_back(7);
	this-> x -> push_back(8);
	this-> x -> push_back(9);

}
