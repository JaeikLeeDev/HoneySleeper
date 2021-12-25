#include <gui/mainscreen_screen/MainScreenView.hpp>

MainScreenView::MainScreenView() :
	lightIsOn(true),
	digitalClockClickedCallback(this, &MainScreenView::digitalClockClickHandler)
{

}

void MainScreenView::setupScreen()
{
    MainScreenViewBase::setupScreen();
    digitalClock.setClickAction(digitalClockClickedCallback);
}

void MainScreenView::tearDownScreen()
{
    MainScreenViewBase::tearDownScreen();
}

void MainScreenView::buttonLightOnClicked()
{
	lightIsOn = true;
	presenter->switchLight(lightIsOn);
	updateLightImg(lightIsOn);
}

void MainScreenView::buttonLightOffClicked()
{
	lightIsOn = false;
	presenter->switchLight(lightIsOn);
	updateLightImg(lightIsOn);
}

void MainScreenView::updateLightImg(bool turnLightOn)
{
	MainScreenViewBase::imgSwitchOn.setVisible(turnLightOn);
	MainScreenViewBase::imgSwitchOff.setVisible(!turnLightOn);
	MainScreenViewBase::imgSwitchOn.invalidate();
	MainScreenViewBase::imgSwitchOff.invalidate();
}

void MainScreenView::updateDigitalClock(int digitalHours, int digitalMinutes, int digitalSeconds)
{
	// Update the clock
	MainScreenView::digitalHours = digitalHours;
	MainScreenView::digitalMinutes = digitalMinutes;
	MainScreenView::digitalSeconds = digitalSeconds;
	digitalClock.setTime24Hour(digitalHours, digitalMinutes, digitalSeconds);
}

void MainScreenView::digitalClockClickHandler(const DigitalClock& dc, const ClickEvent& e)
{
	if (&dc == &digitalClock) {
		application().gotoSetClockScreenScreenSlideTransitionNorth();
	}
}
