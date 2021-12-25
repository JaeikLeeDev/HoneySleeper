#ifndef SETCLOCKSCREENPRESENTER_HPP
#define SETCLOCKSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class SetClockScreenView;

class SetClockScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    SetClockScreenPresenter(SetClockScreenView& v);

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

    virtual ~SetClockScreenPresenter() {};

    int getCurrentHour();
    int getCurrentMinute();
    void setCurrentTime(int hour, int minute);
private:
    SetClockScreenPresenter();

    SetClockScreenView& view;
};

#endif // SETCLOCKSCREENPRESENTER_HPP
