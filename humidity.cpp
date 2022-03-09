/*
 * humidity.cpp
 *
 *  Created on: 2021年10月6日
 *      Author: Jiang
 */
#include <iostream>
#include <fstream>
#include <unistd.h>
#include <ctime>
using namespace std;
#include"humidity.h"
#include"sensor.h"

Humidity::Humidity()
{

}
//Constructeur de la class Humidity
Humidity::~Humidity()
{

}
//Deconstructeur de la class Humidity

int Humidity::aleaGenval(int range1, int range2)
{
 	int f  = (rand()%(range2-range1) + range1);
 	this->m_humidity = f;
 	return this->m_humidity;
}

int Humidity::getData()
 {
	return (*this).aleaGenval(100,200);
 }



