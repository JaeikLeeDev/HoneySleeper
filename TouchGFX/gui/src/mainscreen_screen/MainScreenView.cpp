#include <gui/mainscreen_screen/MainScreenView.hpp>

MainScreenView::MainScreenView() : lightIsOn(true)
{

}

void MainScreenView::setupScreen()
{
    MainScreenViewBase::setupScreen();
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
