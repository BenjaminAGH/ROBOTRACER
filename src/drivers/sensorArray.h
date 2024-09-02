
class sensorArray {
    private:
        int sensorValue[8];

    public:
        sensorArray(int sensorValue[8]);
        void start();
        void calibrate();
        int* getRawMeasurement();
        int* getMeasurement();
        int getError();
};