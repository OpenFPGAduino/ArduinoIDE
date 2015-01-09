/*
 * lophilo.h
 *
 *  Created on: Jun 14, 2014
 *      Author: zhizhouli
 */

#ifndef LOPHILO_H_
#define LOPHILO_H_

//Functionality: Control the led
//Argument:
//id: The id of led can be 0-3
//r: The red color of led
//g: The greem color of led
//b: The blue color of led
void led(int id, char r, char g, char b);

//Functionality: Control the IO port
//Argument:
//id: use 0-26
//value: Can be 1 or 0
void io(int id, int value);

//Functionality: print the string to the console
//Argument:
//format:output format string
int printf(const char* format, ...);

//Functionality: Sleep for seconds
//Argument:
//seconds The seconds for sleeping
unsigned int sleep(unsigned int seconds);

//Functionality: Sleep for micro seconds
//Argument:
//usecods: The micro seconds for sleeping
int usleep(unsigned int useconds);

#endif /* LOPHILO_H_ */