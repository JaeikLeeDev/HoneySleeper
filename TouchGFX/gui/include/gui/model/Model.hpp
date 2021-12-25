#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    void saveLightIsOn(bool lightIsOn);
    bool getLightIsOn();
    void switchLight(bool turnLightOn);
    int getCurrentHour();
    int getCurrentMinute();
    int getCurrentSecond();
    void setCurrentTime(int hour, int minute);
    void updateDigitalClock(int digitalHours, int digitalMinutes, int digitalSeconds);
protected:
    int tickCounter;
    int digitalHours;
    int digitalMinutes;
    int digitalSeconds;
    ModelListener* modelListener;
    bool lightIsOn;
};

#endif // MODEL_HPP
