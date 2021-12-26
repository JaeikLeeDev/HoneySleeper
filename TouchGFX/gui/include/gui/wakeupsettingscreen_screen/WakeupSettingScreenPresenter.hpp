#ifndef WAKEUPSETTINGSCREENPRESENTER_HPP
#define WAKEUPSETTINGSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class WakeupSettingScreenView;

class WakeupSettingScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    WakeupSettingScreenPresenter(WakeupSettingScreenView& v);

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

    virtual ~WakeupSettingScreenPresenter() {};

    virtual void updateDigitalClock(int digitalHours, int digitalMinutes, int digitalSeconds);

    int getCurrentHour();
    int getCurrentMinute();
    int getCurrentSecond();

    void saveWakeupSetting(int hour, int minute, bool lightUse, bool alarmUse);
    int getWakeupHour();
    int getWakeupMinute();
    bool getWakeupLightUse();
    bool getWakeupAlarmUse();

private:
    WakeupSettingScreenPresenter();

    WakeupSettingScreenView& view;
};

#endif // WAKEUPSETTINGSCREENPRESENTER_HPP
