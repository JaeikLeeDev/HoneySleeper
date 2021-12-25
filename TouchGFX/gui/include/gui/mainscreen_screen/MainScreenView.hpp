#ifndef MAINSCREENVIEW_HPP
#define MAINSCREENVIEW_HPP

#include <gui_generated/mainscreen_screen/MainScreenViewBase.hpp>
#include <gui/mainscreen_screen/MainScreenPresenter.hpp>

class MainScreenView : public MainScreenViewBase
{
public:
    MainScreenView();
    virtual ~MainScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void buttonLightOnClicked();
    virtual void buttonLightOffClicked();
    void updateLightImg(bool turnLightOn);
    void digitalClockClickHandler(const DigitalClock& dc, const ClickEvent& e);
    void updateDigitalClock(int digitalHours, int digitalMinutes, int digitalSeconds);
protected:
    int digitalHours;
    int digitalMinutes;
    int digitalSeconds;
    Callback<MainScreenView, const DigitalClock&, const ClickEvent&> digitalClockClickedCallback;
    bool lightIsOn;
};

#endif // MAINSCREENVIEW_HPP
