#include <gui/wakeupsettingscreen_screen/WakeupSettingScreenView.hpp>
#include <gui/wakeupsettingscreen_screen/WakeupSettingScreenPresenter.hpp>

WakeupSettingScreenPresenter::WakeupSettingScreenPresenter(WakeupSettingScreenView& v)
    : view(v)
{

}

void WakeupSettingScreenPresenter::activate()
{

}

void WakeupSettingScreenPresenter::deactivate()
{

}

void WakeupSettingScreenPresenter::updateDigitalClock(int digitalHours, int digitalMinutes, int digitalSeconds)
{
	view.updateDigitalClock(digitalHours, digitalMinutes, digitalSeconds);
}

void WakeupSettingScreenPresenter::setWakeupTime(int hour, int minute)
{
	model->setWakeupTime(hour, minute);
}

int WakeupSettingScreenPresenter::getWakeupHour()
{
	return model->getWakeupHour();
}

int WakeupSettingScreenPresenter::getWakeupMinute()
{
	return model->getWakeupMinute();
}
