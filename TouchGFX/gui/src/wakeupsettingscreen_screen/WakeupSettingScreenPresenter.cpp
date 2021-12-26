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

void WakeupSettingScreenPresenter::saveWakeupSetting(int hour, int minute, bool lightUse, bool alarmUse)
{
	model->saveWakeupSetting(hour, minute, lightUse, alarmUse);
}

int WakeupSettingScreenPresenter::getWakeupHour()
{
	return model->getWakeupHour();
}

int WakeupSettingScreenPresenter::getWakeupMinute()
{
	return model->getWakeupMinute();
}

bool WakeupSettingScreenPresenter::getWakeupLightUse()
{
	return model->getWakeupLightUse();
}

bool WakeupSettingScreenPresenter::getWakeupAlarmUse()
{
	return model->getWakeupAlarmUse();
}
