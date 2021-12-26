#include <gui/sleepstartscreen_screen/SleepStartScreenView.hpp>

SleepStartScreenView::SleepStartScreenView() : screenIsBlack(false), tickCounter(0)
{

}

void SleepStartScreenView::setupScreen()
{
    SleepStartScreenViewBase::setupScreen();
    digitalClock.setTime24Hour(presenter->getCurrentHour(),
    						   presenter->getCurrentMinute(),
							   presenter->getCurrentSecond());
    wakeupHour = presenter->getWakeupHour();
    wakeupMinute = presenter->getWakeupMinute();
	digitalClockWakeupTime.setTime24Hour(wakeupHour, wakeupMinute, 0);
	presenter->switchLight(false);
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
	if (screenIsBlack == false) {
		tickCounter++;
	}

	if (wakeupHour == digitalHours && wakeupMinute == digitalMinutes) {
		presenter->switchLight(presenter->getWakeupLightUse());
		if (presenter->getWakeupAlarmUse()) {
			//TODO: play alarm
		}
		presenter->switchDisplayOn(true);
		application().gotoMainScreenScreenSlideTransitionNorth();
	}

	if (tickCounter > 60*5) {
		tickCounter = 0;
		blackOut.setVisible(screenIsBlack = true);
		blackOut.invalidate();
		presenter->switchDisplayOn(false);
	}
}

void SleepStartScreenView::blackOutClicked()
{
	blackOut.setVisible(screenIsBlack = false);
	blackOut.invalidate();
	presenter->switchDisplayOn(true);
}
