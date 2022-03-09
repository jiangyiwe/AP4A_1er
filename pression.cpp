/*
 * pression.cpp
 *
 *  Created on: 2021Äê10ÔÂ6ÈÕ
 *      Author: Jiang
 */



#include <iostream>
#include <fstream>
#include <unistd.h>
#include <ctime>
using namespace std;
#include"pression.h"
#include"sensor.h"

Pression::Pression()
{

}
//Constructeur de la classe
Pression::~Pression()
{

}
//Deconstructeur de la classe
int Pression::aleaGenval(int range1, int range2)
{
	int f  = (rand()%(range2-range1) + range1);
	 	this->m_pression = f;
	 	return this->m_pression;
}
int Pression::getData()
 {
  return (*this).aleaGenval(0 , 500);
 }
