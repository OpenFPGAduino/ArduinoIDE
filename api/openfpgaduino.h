#ifndef OPENFGPADUINO_H_
#define OPENFGPADUINO_H_

#ifdef __cplusplus
extern "C" {
#endif

#define INPUT 0
#define OUTPUT 1

//Functionality: Open the recourse in FPGA, call in the begin of main
int fpga_open();

//Functionality: Close the recourse in FPGA
void fpga_close();

//Functionality: Get the 32bit memory value in FPGA
//Argument:
//address: memory offset for FPGA
int fpga_get32(int address);

//Functionality: Get the 16bit memory value in FPGA
//Argument:
//address: memory offset for FPGA
int fpga_get16(int address);

//Functionality: Get the 8bit memory value in FPGA
//Argument:
//address: memory offset for FPGA
int fpga_get8(int address);

//Functionality: Set the 32bit memory value in FPGA
//Argument:
//address: memory offset for FPGA
//data: data to set
void fpga_set32(int address, int data);

//Functionality: Set the 16bit memory value in FPGA
//Argument:
//address: memory offset for FPGA
//data: data to set
void fpga_set16(int address, int data);

//Functionality: Set the 8bit memory value in FPGA
//Argument:
//address: memory offset for FPGA
//data: data to set
void fpga_set8(int address, int data);

//Functionality: Open the shield IO
void shield_ctrl_init();

//Functionality: Control the led
//Argument:
//id: The id of led can be 0-3
//r: The red color of led
//g: The greem color of led
//b: The blue color of led
void led(int id, char r, char g, char b);
//Functionality: Get the temperatue
//Argument:
//id: The id of AM2302 can be 0-1
float am2301_temperature(int id);

//Functionality: Get the moisture
//Argument:
//id: The id of AM2302 can be 0-1
float am2301_moisture(int id);

//Functionality: Control the digital IO port direction
//Argument:
//id: use 0-25
//dir: Can be 0 as INPUT or 1 as OUTPUT
int dio_a_dir(int id, int dir);

//Functionality: Control the digital IO port direction
//Argument:
//id: use 0-25
//dir: Can be 0 as INPUT or 1 as OUTPUT
int dio_b_dir(int id, int dir);

//Functionality: Get the digital IO port input
//Argument:
//id: use 0-25
int dio_a_in(int id);

//Functionality: Get the digital IO port input
//Argument:
//id: use 0-25
int dio_b_in(int id);

//Functionality: Control the digital IO port output
//Argument:
//id: use 0-25
//value: Can be 1 or 0
void dio_a_out(int id, int value);

//Functionality: Control the digital IO port output
//Argument:
//id: use 0-25
//value: Can be 1 or 0
void dio_b_out(int id, int value);

//Functionality: Open the Analog IO A
void ain_a_init();

//Functionality: Open the Analog IO B
void ain_b_init();

//Functionality: Get the analog port value
//Argument:
//id: use 1-8
int ain_a(int id);

//Functionality: Get the analog port value
//Argument:
//id: use 1-8
int ain_b(int id);

//Functionality: init the pwm
//Argument:
//id: use 1-8
//gate: gate size of pwn
//duty_cycle: duty cycle of pwm
void pwm(int id, unsigned int pwm, unsigned gate, unsigned int duty_cycle);

//Functionality: Set the steering to given agnle
//Argument:
//id: use 1-8
//angle: 0-180 degree
void steering(int id, int angle);

//Functionality: init the step motor
//Argument:
//id: use 1-8
//frequence:frequence of pwn
//duty_cycle: duty cycle of pwm
//delay: delay of every step
void stepmotor_init(int id, unsigned int frequence, unsigned int duty_cycle, unsigned int delay);

//Functionality: Run the step motor in given step
//Argument:
//id: use 1-8
//forward_back: run dirction
//step: run step
void stepmotor(int id, int forward_back, int step);

//Functionality: init the brush motor
//Argument:
//id: use 1-8
//frequence: of pwn
//duty_cycle: duty cycle of pwm
void brushmotor_init(int id, unsigned int frequence, unsigned int duty_cycle);

//Functionality: Run the brush motor
//Argument:
//id: use 1-8
//on_off: turn on or off the motor
//forward_back: run dirction
//duty_cycle: speed of motor
void brushmotor_run(int id, unsigned int on_off, unsigned int forward_back, unsigned int duty_cycle);

//Functionality: init the fan motor
//Argument:
//id: use 1-8
//frequence: of pwn
//duty_cycle: duty cycle of pwm
void fanmotor_init(int id, unsigned int frequence, unsigned int duty_cycle);

//Functionality: Run the fan motor
//Argument:
//id: use 1-8
//on_off: turn on or off the motor
//duty_cycle: duty cycle of pwm
void fanmotor_run(int id, unsigned int on_off, unsigned int duty_cycle);

//Functionality: print the string to the console
//Argument:
//format:output format string
int print(const char* format, ...);

//Functionality: Sleep for seconds
//Argument:
//seconds The seconds for sleeping
unsigned int sleep(unsigned int seconds);

//Functionality: Sleep for micro seconds
//Argument:
//usecods: The micro seconds for sleeping
int usleep(unsigned int useconds);

#ifdef __cplusplus
}
#endif

#endif /* OPENFGPADUINO_H_ */
