/*
 * server.cpp
 *
 *  Created on: 2021年10月6日
 *      Author: Jiang
 */




#include "server.h"
#include <iostream>
#include <fstream>
#include <unistd.h>
#include <ctime>
using namespace std;

Server::Server()
{

}
Server::~Server()
{

}

void Server::fileWrite(int T,int H,int L,int P){
	time_t tmm = time(0);
	char* dt= ctime(&tmm);
            usleep(rand()%3000+1000);//Génération aléatoire de temps de transmission différés
			ofstream infile("data.txt", ios::app);
			if (!infile.is_open())
			{
				cout << "We can't open this file˛" << endl;
				return;
				//Considérons le cas d'une erreur de lecture
			}
			else
			{
				infile << "Date et heure :" << dt << endl;

				infile << "Temperature :" << T << " /Humidity :" << H << "/Pression:  " << P << "/Light:   " ;
				if (L == 1)
					infile<< "Allume" << endl;
				else
					infile << "Eteinte" << endl;

			}
			infile.close();
			cout << "The file is written˛" << endl;
}
void Server::consolWrite(int T,int H,int L,int P){
	time_t tmm = time(0);
	char* dt= ctime(&tmm);
	cout << endl;
	cout << "---------------------------------------------"<< endl;//Pour un look plus confortable
	cout << "/////////////////////////////////////////////"<< endl;
	cout << "||Date et heure de capture des parametres : " << endl;
	cout << dt << endl;
	cout << "||Temperature :" << T << "°C " << endl;
	cout << "||Humidity    :" << H << "g/m^3 " << endl;
	cout << "||Pression    :" << P << "bar" << endl;
	usleep(rand()%2000+1000);
	switch(L)
	{
	case 0:
		cout << "||Lumiere     :Eteinte"  << endl;
	break;
	case 1:
		cout<< "||Lumiere      :Allumee" << endl;
	break;
	default:
		cout << "||Lumiere     :Allerte" << endl;
	}
    cout << "/////////////////////////////////////////////" << endl;
    cout << "---------------------------------------------" << endl;

}
