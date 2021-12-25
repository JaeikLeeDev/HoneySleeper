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
	MainScreenViewBase::imgSwitchOn.setVisible(true);
	MainScreenViewBase::imgSwitchOff.setVisible(false);
	MainScreenViewBase::imgSwitchOn.invalidate();
	MainScreenViewBase::imgSwitchOff.invalidate();
}

void MainScreenView::buttonLightOffClicked()
{
	lightIsOn = false;
	MainScreenViewBase::imgSwitchOn.setVisible(false);
	MainScreenViewBase::imgSwitchOff.setVisible(true);
	MainScreenViewBase::imgSwitchOn.invalidate();
	MainScreenViewBase::imgSwitchOff.invalidate();
}
