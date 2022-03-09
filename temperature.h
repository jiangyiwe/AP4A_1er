/*
 * temperature.h
 *
 *  Created on: 2021年10月6日
 *      Author: Jiang
 */

#ifndef TEMPERATURE_H_
#define TEMPERATURE_H_


#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <ctime>
#include<time.h>
#include"sensor.h"

class Temperature : public Sensor
{
public:
	Temperature();

 ~Temperature();



 int getData();//Acc¨¨s aux valeurs priv¨¦es via les fonctions publiques
protected:
 int aleaGenval(int range1,int range2);
private:

 int m_temperature;
};

#endif /* TEMPERATURE_H_ */
