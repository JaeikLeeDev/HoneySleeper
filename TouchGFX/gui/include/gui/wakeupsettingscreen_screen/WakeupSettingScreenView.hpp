#ifndef WAKEUPSETTINGSCREENVIEW_HPP
#define WAKEUPSETTINGSCREENVIEW_HPP

#include <gui_generated/wakeupsettingscreen_screen/WakeupSettingScreenViewBase.hpp>
#include <gui/wakeupsettingscreen_screen/WakeupSettingScreenPresenter.hpp>

class WakeupSettingScreenView : public WakeupSettingScreenViewBase
{
public:
    WakeupSettingScreenView();
    virtual ~WakeupSettingScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void updateDigitalClock(int digitalHours, int digitalMinutes, int digitalSeconds);

    virtual void buttonHourUpClicked();
    virtual void buttonHourDownClicked();
    virtual void buttonMinUpClicked();
    virtual void buttonMinDownClicked();
    virtual void buttonDoneClicked();

protected:
    int hour;
    int minute;
};

#endif // WAKEUPSETTINGSCREENVIEW_HPP
