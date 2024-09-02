#include "drivers/motorDriver.h"

//Metodo Constructor
motorDriver::motorDriver(int directionMotor1, int directionMotor2, int motoPWM){
    this->directionMotor1 = directionMotor1;
    this->directionMotor2 = directionMotor2;
    this->motoPWM = motoPWM;
}

//Metodo para inicializar el motor
void motorDriver::start(){
}

//Metodo para obtener el PWM
int motorDriver::getPWM(){
}

//Metodo para establecer el PWM
int motorDriver::setPWM(int pwm){
}