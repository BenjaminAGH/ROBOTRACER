#include "drivers/sensorArray.h"

//Metodo Constructor
sensorArray::sensorArray(int sensorValue[8]){
    for(int i = 0; i < 8; i++){
        this->sensorValue[i] = sensorValue[i];
    }
}

//Metodo para inicializar el sensor
void sensorArray::start(){
}

//Metodo para calibrar el sensor
void sensorArray::calibrate(){
}

//Metodo para obtener la medicion cruda
int* sensorArray::getRawMeasurement(){
    return sensorValue;
}

//Metodo para obtener la medicion
int* sensorArray::getMeasurement(){
    return sensorValue;
}

//Metodo para obtener el error
int sensorArray::getError(){
    return 0;
}
