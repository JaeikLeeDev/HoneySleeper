#include <gui/wakeupsettingscreen_screen/WakeupSettingScreenView.hpp>

WakeupSettingScreenView::WakeupSettingScreenView()
{

}

void WakeupSettingScreenView::setupScreen()
{
    WakeupSettingScreenViewBase::setupScreen();
    buttonHourUp.setWidthHeight(20, 12);
    buttonHourUp.invalidate();
}

void WakeupSettingScreenView::tearDownScreen()
{
    WakeupSettingScreenViewBase::tearDownScreen();
}
