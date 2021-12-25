#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "main.h"

Model::Model() : modelListener(0), lightIsOn(true)
{

}

void Model::tick()
{

}

void Model::saveLightIsOn(bool lightIsOn)
{
	Model::lightIsOn = lightIsOn;
}

bool Model::getLightIsOn()
{
	return lightIsOn;
}

void Model::switchLight(bool turnLightOn)
{
	main_switch_light_on((uint8_t)turnLightOn);
}
