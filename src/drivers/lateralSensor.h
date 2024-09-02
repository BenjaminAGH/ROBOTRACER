
class lateralSensor {
    //Atributos
    private:
        bool flagActivation;

    public:
        lateralSensor(bool flagActivation);
        void start();
        void lateral_ISR();
};