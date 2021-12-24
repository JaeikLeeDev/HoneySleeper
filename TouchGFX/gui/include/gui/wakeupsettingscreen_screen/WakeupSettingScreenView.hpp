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
protected:
};

#endif // WAKEUPSETTINGSCREENVIEW_HPP
