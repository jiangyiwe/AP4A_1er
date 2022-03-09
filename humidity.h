/*
 * humidity.h
 *
 *  Created on: 2021Äê10ÔÂ6ÈÕ
 *      Author: Jiang
 */

#ifndef HUMIDITY_H_
#define HUMIDITY_H_
#include"sensor.h"


#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <ctime>
#include<time.h>

class Humidity : public Sensor
{

public:
	Humidity() ;
	~Humidity();
	int getData();
protected:
	int aleaGenval(int range1, int range2);

private:
	 int m_humidity;



};


#endif /* HUMIDITY_H_ */
