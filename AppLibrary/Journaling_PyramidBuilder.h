#pragma once

#include "AppFeaturesOpsExports.h"
#include "..\AppLibrary\PyramidBuilder.h"


APPLIBRARY_API void Journaling_PyramidBuilder_SetType(Application::PyramidBuilder* pyramidBuilder, JournalPyramidBuilderTypes type);

APPLIBRARY_API JournalPyramidBuilderTypes Journaling_PyramidBuilder_GetType(Application::PyramidBuilder* pyramidBuilder);