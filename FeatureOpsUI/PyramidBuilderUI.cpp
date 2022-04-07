#include "PyramidBuilderUI.h"

#include <iostream>Pyramid
#include "..\AppPartOps\PartOps.h"
#include "..\AppLibrary\Pyramid.h"
#include "..\AppLibrary\PyramidBuilder.h"
#include "..\AppLibrary\Journaling_Part.h"
#include "..\AppLibrary\Journaling_PyramidBuilder.h"

Application::PyramidBuilder* CreatePyramidBuilderUI(Application::PartFile* part, Application::Pyramid* pyramid)
{
	std::cout << "CreatePyramidBuilderUI was called " << std::endl;
	return Journaling_Part_CreatePyramidBuilder(part, pyramid);

}

void CreatePyramidBuilderUI(Application::PyramidBuilder* pyramidBuilder, JournalPyramidBuilderTypes type)
{
	std::cout << "CreatePyramidBuilderUI was called " << std::endl;
	Journaling_PyramidBuilder_SetType(pyramidBuilder, type);
}

