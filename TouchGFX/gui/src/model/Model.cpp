#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "main.h"

Model::Model()
	: modelListener(0), lightIsOn(true),
	  digitalHours(8), digitalMinutes(0), digitalSeconds(0),
	  wakeupHour(8), wakeupMinute(0)
{

}

void Model::tick()
{
    tickCounter++;

    if (tickCounter % 60 == 0) {
        if (++digitalSeconds >= 60) {
            digitalSeconds = 0;
            if (++digitalMinutes >= 60) {
                digitalMinutes = 0;
                if (++digitalHours >= 24) {
                    digitalHours = 0;
                }
            }
        }
        updateDigitalClock(digitalHours, digitalMinutes, digitalSeconds);
    }
}

void Model::saveLightIsOn(bool lightIsOn)
{
	Model::lightIsOn = lightIsOn;
}

bool Model::getLightIsOn()
{
	return lightIsOn;
}

void Model::switchLight(bool turnLightOn)
{
	main_switch_light_on((uint8_t)turnLightOn);
}

int Model::getCurrentHour()
{
	return digitalHours;
}

int Model::getCurrentMinute()
{
	return digitalMinutes;
}

int Model::getCurrentSecond()
{
	return digitalSeconds;
}

void Model::setCurrentTime(int hour, int minute)
{
	digitalHours = hour;
	digitalMinutes = minute;
}

void Model::updateDigitalClock(int digitalHours, int digitalMinutes, int digitalSeconds)
{
	modelListener->updateDigitalClock(digitalHours, digitalMinutes, digitalSeconds);
}

void Model::saveWakeupSetting(int hour, int minute, bool lightUse, bool alarmUse)
{
	wakeupHour = hour;
	wakeupMinute = minute;
	wakeupLightUse = lightUse;
	wakeupAlarmUse = alarmUse;
}

int Model::getWakeupHour() { return wakeupHour; }

int Model::getWakeupMinute() { return wakeupMinute; }

bool Model::getWakeupLightUse() { return wakeupLightUse; }

bool Model::getWakeupAlarmUse() { return wakeupAlarmUse; }
