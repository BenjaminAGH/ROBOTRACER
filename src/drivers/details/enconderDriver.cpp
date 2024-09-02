#include "drivers/enconderDriver.h"

//Metodo Constructor
encoderDriver::encoderDriver(int MotorENC_A, int MotorENC_B){
    this->MotorENC_A = MotorENC_A;
    this->MotorENC_B = MotorENC_B;
}

//Metodo para inicializar el encoder
void encoderDriver::start(){
}

//Metodo para la interrupcion del encoder A
void encoderDriver::A_ISR(){
}

//Metodo para la interrupcion del encoder B
void encoderDriver::B_ISR(){
}

//Metodo para obtener la velocidad del encoder
void encoderDriver::get_velocity(){
}
