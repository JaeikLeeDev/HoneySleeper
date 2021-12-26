#include <gui/sleepstartscreen_screen/SleepStartScreenView.hpp>

SleepStartScreenView::SleepStartScreenView()
{

}

void SleepStartScreenView::setupScreen()
{
    SleepStartScreenViewBase::setupScreen();
    digitalClock.setTime24Hour(presenter->getCurrentHour(),
    						   presenter->getCurrentMinute(),
							   presenter->getCurrentSecond());
	digitalClockWakeupTime.setTime24Hour(presenter->getWakeupHour(), presenter->getWakeupMinute(), 0);
}

void SleepStartScreenView::tearDownScreen()
{
    SleepStartScreenViewBase::tearDownScreen();
}

void SleepStartScreenView::updateDigitalClock(int digitalHours, int digitalMinutes, int digitalSeconds)
{
	SleepStartScreenView::digitalHours = digitalHours;
	SleepStartScreenView::digitalMinutes = digitalMinutes;
	SleepStartScreenView::digitalSeconds = digitalSeconds;
	digitalClock.setTime24Hour(digitalHours, digitalMinutes, digitalSeconds);
}

void SleepStartScreenView::handleTickEvent()
{

}
