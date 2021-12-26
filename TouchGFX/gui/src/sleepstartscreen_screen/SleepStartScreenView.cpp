#include <gui/sleepstartscreen_screen/SleepStartScreenView.hpp>

SleepStartScreenView::SleepStartScreenView()
{

}

void SleepStartScreenView::setupScreen()
{
    SleepStartScreenViewBase::setupScreen();
}

void SleepStartScreenView::tearDownScreen()
{
    SleepStartScreenViewBase::tearDownScreen();
}

void SleepStartScreenView::updateDigitalClock(int digitalHours, int digitalMinutes, int digitalSeconds)
{
	digitalClock.setTime24Hour(digitalHours, digitalMinutes, digitalSeconds);
}
