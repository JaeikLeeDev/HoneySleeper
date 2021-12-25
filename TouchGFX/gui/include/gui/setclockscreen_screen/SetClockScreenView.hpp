#ifndef SETCLOCKSCREENVIEW_HPP
#define SETCLOCKSCREENVIEW_HPP

#include <gui_generated/setclockscreen_screen/SetClockScreenViewBase.hpp>
#include <gui/setclockscreen_screen/SetClockScreenPresenter.hpp>

class SetClockScreenView : public SetClockScreenViewBase
{
public:
    SetClockScreenView();
    virtual ~SetClockScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void buttonHourUpClicked();
    virtual void buttonHouwDownClicked();
    virtual void buttonMinUpClicked();
    virtual void buttonMinDownClicked();
    virtual void buttonDoneClicked();
protected:
    int16_t hour;
    int16_t minute;
};

#endif // SETCLOCKSCREENVIEW_HPP
