#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

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
