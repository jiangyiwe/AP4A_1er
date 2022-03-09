/*
 * main.cpp
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
using namespace std;

int main(){

  srand((unsigned)time(0));//Afin de g¨¦n¨¦rer diff¨¦rentes valeurs al¨¦atoires
  Scheduler schu;
  schu.affiche();
  return 0;
}

