/*
 * Author:
 *         Zhizhou Li <lzz@meteroi.com>
 *
 Copyright 2015 Meteroi
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef OPENFPGADUNINO_H_
#define OPENFPGADUNINO_H_

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

#endif /* OPENFPGADUNINO_H_ */