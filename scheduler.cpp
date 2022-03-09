/*
 * scheduler.cpp
 *
 *  Created on: 2021Äê10ÔÂ6ÈÕ
 *      Author: Jiang
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <ctime>
#include<time.h>
#include"scheduler.h"
#include"temperature.h"
#include"light.h"
#include"pression.h"
#include"humidity.h"
#include"server.h"
#include"sensor.h"
using namespace std;
#ifdef _WIN32
#include <Windows.h>
#else
#include <unist.h>
#endif

Scheduler::Scheduler()
{
	m_service=1;
}
Scheduler::~Scheduler()
{

}

void Scheduler::affiche()//Acc¨¨s aux valeurs priv¨¦es via les fonctions publiques
{
  while(1)
  {
      #ifdef _WIN32

	  Sleep(rand()%3000+1000);
#else
	  usleep(rand()%3000+1000);
#endif

	  switch(m_service)
	  {
	  case 2:
		  ser.fileWrite(tem.getData(),hum.getData(),lig.getData(),pre.getData());
		  break;
	  case 1:
		  ser.fileWrite(tem.getData(),hum.getData(),lig.getData(),pre.getData());
		  ser.consolWrite(tem.getData(),hum.getData(),lig.getData(),pre.getData());
      break;
	  default:
		  cout << "Traitement inexistant";
      break;
	  }


  }

}



