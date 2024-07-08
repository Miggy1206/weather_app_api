#pragma once

#include "Constants.h"


class Weather
{
private:
	double latitude;
	double longitude;
	Value weather_data;

public:
	void set_coordinates(double lat, double lon);
	void set_weather_data(Value data);
	void display_weather_data();
	string weather_url_parser(string url_start, vector<string> chosen_parameters);
};

