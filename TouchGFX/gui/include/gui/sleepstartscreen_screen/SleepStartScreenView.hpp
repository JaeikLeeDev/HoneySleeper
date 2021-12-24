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
protected:
};

#endif // SLEEPSTARTSCREENVIEW_HPP
