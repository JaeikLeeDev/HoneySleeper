#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    void saveLightIsOn(bool lightIsOn);
    bool getLightIsOn();
    void switchLight(bool turnLightOn);
protected:
    ModelListener* modelListener;
    bool lightIsOn;
};

#endif // MODEL_HPP
