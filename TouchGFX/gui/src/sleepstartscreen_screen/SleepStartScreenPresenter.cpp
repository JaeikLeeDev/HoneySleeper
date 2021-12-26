#include <gui/sleepstartscreen_screen/SleepStartScreenView.hpp>
#include <gui/sleepstartscreen_screen/SleepStartScreenPresenter.hpp>

SleepStartScreenPresenter::SleepStartScreenPresenter(SleepStartScreenView& v)
    : view(v)
{

}

void SleepStartScreenPresenter::activate()
{

}

void SleepStartScreenPresenter::deactivate()
{

}

void SleepStartScreenPresenter::updateDigitalClock(int digitalHours, int digitalMinutes, int digitalSeconds)
{
	view.updateDigitalClock(digitalHours, digitalMinutes, digitalSeconds);
}

void SleepStartScreenPresenter::switchLight(bool turnLightOn)
{
	model->switchLight(turnLightOn);
}

void SleepStartScreenPresenter::switchDisplayOn(bool turnDisplayOn)
{
	model->switchDisplayOn(turnDisplayOn);
}

int SleepStartScreenPresenter::getCurrentHour() 	{ return model->getCurrentHour(); }
int SleepStartScreenPresenter::getCurrentMinute() 	{ return model->getCurrentMinute(); }
int SleepStartScreenPresenter::getCurrentSecond() 	{ return model->getCurrentSecond(); }
int SleepStartScreenPresenter::getWakeupHour() 		{ return model->getWakeupHour(); }
int SleepStartScreenPresenter::getWakeupMinute() 	{ return model->getWakeupMinute(); }
bool SleepStartScreenPresenter::getWakeupLightUse() { return model->getWakeupLightUse(); }
bool SleepStartScreenPresenter::getWakeupAlarmUse() { return model->getWakeupAlarmUse(); }
