/*
 * server.h
 *
 *  Created on: 2021��10��6��
 *      Author: Jiang
 */

#ifndef SERVER_H_
#define SERVER_H_

#include <iostream>




class Server
{
public:
	Server();
	~Server();


	void fileWrite(int T,int H,int L,int P);
    void consolWrite(int T,int H,int L,int P);


};



#endif /* SERVER_H_ */
