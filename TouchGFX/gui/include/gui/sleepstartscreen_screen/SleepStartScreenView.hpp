#ifndef SLEEPSTARTSCREENVIEW_HPP
#define SLEEPSTARTSCREENVIEW_HPP

#include <gui_generated/sleepstartscreen_screen/SleepStartScreenViewBase.hpp>
#include <gui/sleepstartscreen_screen/SleepStartScreenPresenter.hpp>

class SleepStartScreenView : public SleepStartScreenViewBase
{
public:
    SleepStartScreenView();
    virtual ~SleepStartScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void handleTickEvent();
    void updateDigitalClock(int digitalHours, int digitalMinutes, int digitalSeconds);

    virtual void blackOutClicked();

protected:
    int digitalHours;
    int digitalMinutes;
    int digitalSeconds;

    int wakeupHour;
    int wakeupMinute;

    int tickCounter;
    bool screenIsBlack;
};

#endif // SLEEPSTARTSCREENVIEW_HPP
