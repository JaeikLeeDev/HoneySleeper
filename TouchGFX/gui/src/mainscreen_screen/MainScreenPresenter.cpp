#include <gui/mainscreen_screen/MainScreenView.hpp>
#include <gui/mainscreen_screen/MainScreenPresenter.hpp>

MainScreenPresenter::MainScreenPresenter(MainScreenView& v)
    : view(v)
{

}

void MainScreenPresenter::activate()
{

}

void MainScreenPresenter::deactivate()
{

}

void MainScreenPresenter::switchLight(bool turnLightOn)
{
	model->switchLight(turnLightOn);
}

int MainScreenPresenter::getCurrentHour()
{
	return model->getCurrentHour();
}

int MainScreenPresenter::getCurrentMinute()
{
	return model->getCurrentMinute();
}

int MainScreenPresenter::getCurrentSecond()
{
	return model->getCurrentSecond();
}

void MainScreenPresenter::updateDigitalClock(int digitalHours, int digitalMinutes, int digitalSeconds)
{
	view.updateDigitalClock(digitalHours, digitalMinutes, digitalSeconds);
}
