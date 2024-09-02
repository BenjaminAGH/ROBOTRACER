
class motorDriver {
    public:
        int directionMotor1;
        int directionMotor2;
        int motoPWM;
        
    private:
        motorDriver(int directionMotor1, int directionMotor2, int motoPWM);
        void start();
        int getPWM();
        int setPWM(int pwm);
};