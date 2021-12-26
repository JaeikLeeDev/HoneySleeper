#ifndef SLEEPSTARTSCREENPRESENTER_HPP
#define SLEEPSTARTSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class SleepStartScreenView;

class SleepStartScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    SleepStartScreenPresenter(SleepStartScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~SleepStartScreenPresenter() {};

    virtual void updateDigitalClock(int digitalHours, int digitalMinutes, int digitalSeconds);

    int getCurrentHour();
    int getCurrentMinute();
    int getCurrentSecond();

    int getWakeupHour();
    int getWakeupMinute();

    bool getWakeupLightUse();
    bool getWakeupAlarmUse();

    void switchLight(bool turnLightOn);

private:
    SleepStartScreenPresenter();

    SleepStartScreenView& view;
};

#endif // SLEEPSTARTSCREENPRESENTER_HPP
