#include <gui/wakeupsettingscreen_screen/WakeupSettingScreenView.hpp>

WakeupSettingScreenView::WakeupSettingScreenView()
{

}

void WakeupSettingScreenView::setupScreen()
{
    WakeupSettingScreenViewBase::setupScreen();
	hour = presenter->getWakeupHour();
	minute = presenter->getWakeupMinute();
    Unicode::snprintf(textAreaHourBuffer, TEXTAREAHOUR_SIZE, "%02d", hour);
    Unicode::snprintf(textAreaMinuteBuffer, TEXTAREAMINUTE_SIZE, "%02d", minute);
	toggleButtonLightUse.forceState(presenter->getWakeupLightUse());
	toggleButtonAlarmUse.forceState(presenter->getWakeupAlarmUse());
    textAreaHour.invalidate();
    textAreaMinute.invalidate();
	toggleButtonLightUse.invalidate();
	toggleButtonAlarmUse.invalidate();
}

void WakeupSettingScreenView::tearDownScreen()
{
    WakeupSettingScreenViewBase::tearDownScreen();
}

void WakeupSettingScreenView::updateDigitalClock(int digitalHours, int digitalMinutes, int digitalSeconds)
{
	digitalClock.setTime24Hour(digitalHours, digitalMinutes, digitalSeconds);
}

void WakeupSettingScreenView::buttonHourUpClicked()
{
    hour = (hour + 1) % 24; // Keep new value in range 0..23
    Unicode::snprintf(textAreaHourBuffer, TEXTAREAHOUR_SIZE, "%02d", hour);
    textAreaHour.invalidate();
}

void WakeupSettingScreenView::buttonHourDownClicked()
{
    hour = (hour + 24 - 1) % 24; // Keep new value in range 0..23
    Unicode::snprintf(textAreaHourBuffer, TEXTAREAHOUR_SIZE, "%02d", hour);
    textAreaHour.invalidate();
}

void WakeupSettingScreenView::buttonMinUpClicked()
{
    minute = (minute + 1) % 60; // Keep new value in range 0..59
    Unicode::snprintf(textAreaMinuteBuffer, TEXTAREAMINUTE_SIZE, "%02d", minute);
    textAreaMinute.invalidate();
}

void WakeupSettingScreenView::buttonMinDownClicked()
{
    minute = (minute + 60 - 1) % 60; // Keep new value in range 0..59
    Unicode::snprintf(textAreaMinuteBuffer, TEXTAREAMINUTE_SIZE, "%02d", minute);
    textAreaMinute.invalidate();
}

void WakeupSettingScreenView::buttonDoneClicked()
{
    presenter->saveWakeupSetting(hour, minute,
    		toggleButtonLightUse.getState(),
			toggleButtonAlarmUse.getState());
    application().gotoMainScreenScreenSlideTransitionWest();
}
