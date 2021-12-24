#ifndef WAKEUPHOUR_HPP
#define WAKEUPHOUR_HPP

#include <gui_generated/containers/WakeupHourBase.hpp>

class WakeupHour : public WakeupHourBase
{
public:
    WakeupHour();
    virtual ~WakeupHour() {}

    virtual void initialize();
protected:
};

#endif // WAKEUPHOUR_HPP
