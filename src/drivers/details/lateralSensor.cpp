#include "drivers/lateralSensor.h"

//Metodo Constructor
lateralSensor::lateralSensor(bool flagActivation){
    this->flagActivation = flagActivation;
}

//Metodo para inicializar el sensor lateral
void lateralSensor::start(){
}

//Metodo para la interrupcion del sensor lateral
void lateralSensor::lateral_ISR(){
}