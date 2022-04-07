#pragma once
#include "AppFeaturesOpsExports.h"

namespace Application
{
	class Pyramid;
	class PartFile;
	class PyramidBuilder;
}

// Mode 1: Create the block with a part and a pyramid
APPLIBRARY_API Application::PyramidBuilder* Journaling_Part_CreatePyramidBuilder(Application::PartFile* part, Application::Pyramid* pyramid);

// Mode 2: Create the block with only a pyramid
APPLIBRARY_API Application::PyramidBuilder* Journaling_Part_CreatePyramidBuilderPartOnly(Application::Pyramid* pyramid);