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

    bool getLightIsOn();
    void switchLight(bool turnLightOn);
    void switchDisplayOn(bool turnDisplayOn);
    int getCurrentHour();
    int getCurrentMinute();
    int getCurrentSecond();
    void setCurrentTime(int hour, int minute);
    void updateDigitalClock(int digitalHours, int digitalMinutes, int digitalSeconds);
    void saveWakeupSetting(int hour, int minute, bool lightUse, bool alarmUse);
    int getWakeupHour();
    int getWakeupMinute();
    bool getWakeupLightUse();
    bool getWakeupAlarmUse();
protected:
    int tickCounter;
    int digitalHours;
    int digitalMinutes;
    int digitalSeconds;
    int wakeupHour;
    int wakeupMinute;
    bool wakeupLightUse;
    bool wakeupAlarmUse;
    ModelListener* modelListener;
    bool lightIsOn;
};

#endif // MODEL_HPP
