/*
 * pression.h
 *
 *  Created on: 2021Äê10ÔÂ6ÈÕ
 *      Author: Jiang
 */

#ifndef PRESSION_H_
#define PRESSION_H_

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <ctime>
#include<time.h>
#include"sensor.h"

class Pression : public Sensor
{

public:
	Pression();
	~Pression();

	int getData();
private:
	int m_pression;
protected:
	int aleaGenval(int range1, int range2);
};


#endif /* PRESSION_H_ */
