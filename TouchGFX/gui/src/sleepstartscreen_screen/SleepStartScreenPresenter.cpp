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
