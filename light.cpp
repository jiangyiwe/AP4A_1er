/*
 * light.cpp
 *
 *  Created on: 2021Äê10ÔÂ6ÈÕ
 *      Author: Jiang
 */

#include <iostream>
#include <fstream>
#include <unistd.h>
#include <ctime>
using namespace std;
#include"light.h"
#include"sensor.h"

Light::Light()
{

}
//Constructeur de la classe Light
Light::~Light()
{

}
//Deconstructeur de la classe Light
//Acc¨¨s ¨¤ des valeurs priv¨¦es via des fonctions publiques h¨¦rit¨¦es
int Light::aleaGenval(int range1, int range2){
	int f  = (rand()%(range2-range1) + range1);
	 	this->m_light = f;
	 	return f;
}
int Light::getData()
{
	return (*this).aleaGenval(0,2);
}
