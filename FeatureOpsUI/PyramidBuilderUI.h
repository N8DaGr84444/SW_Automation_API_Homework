#pragma once
#include "FeatureOpsUIExports.h"
#include "..\AppLibrary\PyramidBuilder.h"
namespace Application
{
	class PartFile;
	class Pyramid;
	class PyramidBuilder;
}



FEATUREOPSUI_API Application::PyramidBuilder* CreatePyramidBuilderUI(Application::PartFile* part, Application::Pyramid* pyramid);

FEATUREOPSUI_API void CreatePyramidBuilderUI(Application::PyramidBuilder* pyramidBuilder, JournalPyramidBuilderTypes type);
