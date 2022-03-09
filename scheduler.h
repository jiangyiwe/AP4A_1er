/*
 * scheduler.h
 *
 *  Created on: 2021年10月6日
 *      Author: Jiang
 */

#ifndef SCHEDULER_H_
#define SCHEDULER_H_

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <ctime>
#include<time.h>
#include"server.h"
#include"sensor.h"

#include"humidity.h"
#include"light.h"
#include"pression.h"
#include"temperature.h"


class Scheduler
{

public:
	Scheduler();
    //Scheduler(float * cap) : capteur(cap){}

  ~Scheduler();
   void affiche();//Acc¨¨s aux valeurs priv¨¦es via les fonctions publiques
private:
    Temperature tem;
    Pression pre;
    Light lig ;
    Humidity hum;
    Server ser;
    int m_service;



};


#endif /* SCHEDULER_H_ */
