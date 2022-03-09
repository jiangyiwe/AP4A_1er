/*
 * temperature.cpp
 *
 *  Created on: 2021年10月6日
 *      Author: Jiang
 */




#include <iostream>
#include <fstream>
#include <unistd.h>
#include <ctime>
using namespace std;
#include"temperature.h"
#include"sensor.h"

Temperature::Temperature()
{

}
Temperature::~Temperature()
{

}
int Temperature::aleaGenval(int range1,int range2){
	 this->m_temperature  = (rand()%(int)(range2-range1) + (int)range1);//G¨¦n¨¦rer des nombres al¨¦atoires
	 return this->m_temperature;
}

int  Temperature::getData()
 {
  return (*this).aleaGenval(0,30);
 }
