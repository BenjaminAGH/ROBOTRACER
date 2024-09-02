
class encoderDriver{
    //Atributos    
    private:
        int MotorENC_A;
        int MotorENC_B;

    //Metodos
    public:
        encoderDriver(int MotorENC_A, int MotorENC_B);
        void start();
        void A_ISR();
        void B_ISR();
        void get_velocity();
};

