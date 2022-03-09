/*
 * light.h
 *
 *  Created on: 2021Äê10ÔÂ6ÈÕ
 *      Author: Jiang
 */

#ifndef LIGHT_H_
#define LIGHT_H_

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <ctime>
#include<time.h>
#include"sensor.h"

class Light : public Sensor
{
public:
	Light();
	~Light();

	int getData();
private:
	int m_light;
protected:
	int aleaGenval(int range1, int range2);

};





#endif /* LIGHT_H_ */
