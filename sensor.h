/*
 * sensor.h
 *
 *  Created on: 2021年10月6日
 *      Author: Jiang
 */

#ifndef SENSOR_H_
#define SENSOR_H_





#include <iostream>



class Sensor
{
public:
	//fonction de Constructeur
 Sensor();
virtual  ~Sensor(){};// fonction de Deconstructeur
 // Pour chaque class ,on peur redifinir les bornes



 //Pour chaque class ,on peut obtenir des donnes des different type en utilisant virtual
 int getData();


 friend class Scheduler;
protected:
 int aleaGenval(int range1, int range2);
};


#endif /* SENSOR_H_ */
