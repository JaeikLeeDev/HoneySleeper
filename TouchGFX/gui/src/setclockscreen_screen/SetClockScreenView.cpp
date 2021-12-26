#include <gui/setclockscreen_screen/SetClockScreenView.hpp>

SetClockScreenView::SetClockScreenView()
{
}

void SetClockScreenView::setupScreen()
{
    SetClockScreenViewBase::setupScreen();
	hour = presenter->getCurrentHour();
	minute = presenter->getCurrentMinute();
    Unicode::snprintf(textAreaHourBuffer, TEXTAREAHOUR_SIZE, "%02d", hour);
    Unicode::snprintf(textAreaMinuteBuffer, TEXTAREAMINUTE_SIZE, "%02d", minute);
    textAreaHour.invalidate();
    textAreaMinute.invalidate();
}

void SetClockScreenView::tearDownScreen()
{
    SetClockScreenViewBase::tearDownScreen();
}

void SetClockScreenView::buttonHourUpClicked()
{
    hour = (hour + 1) % 24; // Keep new value in range 0..23
    Unicode::snprintf(textAreaHourBuffer, TEXTAREAHOUR_SIZE, "%02d", hour);
    textAreaHour.invalidate();
}

void SetClockScreenView::buttonHourDownClicked()
{
    hour = (hour + 24 - 1) % 24; // Keep new value in range 0..23
    Unicode::snprintf(textAreaHourBuffer, TEXTAREAHOUR_SIZE, "%02d", hour);
    textAreaHour.invalidate();
}

void SetClockScreenView::buttonMinUpClicked()
{
    minute = (minute + 1) % 60; // Keep new value in range 0..59
    Unicode::snprintf(textAreaMinuteBuffer, TEXTAREAMINUTE_SIZE, "%02d", minute);
    textAreaMinute.invalidate();
}

void SetClockScreenView::buttonMinDownClicked()
{
    minute = (minute + 60 - 1) % 60; // Keep new value in range 0..59
    Unicode::snprintf(textAreaMinuteBuffer, TEXTAREAMINUTE_SIZE, "%02d", minute);
    textAreaMinute.invalidate();
}

void SetClockScreenView::buttonDoneClicked()
{
    presenter->setCurrentTime(hour, minute);
    application().gotoMainScreenScreenSlideTransitionSouth();
}
