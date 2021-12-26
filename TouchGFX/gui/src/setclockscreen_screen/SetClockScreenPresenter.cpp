#include <gui/setclockscreen_screen/SetClockScreenView.hpp>
#include <gui/setclockscreen_screen/SetClockScreenPresenter.hpp>

SetClockScreenPresenter::SetClockScreenPresenter(SetClockScreenView& v)
    : view(v)
{

}

void SetClockScreenPresenter::activate()
{

}

void SetClockScreenPresenter::deactivate()
{

}

int SetClockScreenPresenter::getCurrentHour()
{
	return model->getCurrentHour();
}

int SetClockScreenPresenter::getCurrentMinute()
{
	return model->getCurrentMinute();
}

void SetClockScreenPresenter::setCurrentTime(int hour, int minute)
{
	model->setCurrentTime(hour, minute);
}
