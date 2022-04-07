#include "Journaling_Part.h"
#include "Pyramid.h";
#include "PyramidBuilder.h";
#include "..\AppPartOps\PartOps.h"
#include "..\Journaling\Journaling.h"
#include "..\Journaling\JournalHelpers.h"


// Mode 1
Application::PyramidBuilder* Journaling_Part_CreatePyramidBuilder(Application::PartFile* part, Application::Pyramid* pyramid)
{
	//If Journaling write the thing things
	if (IsJournaling())
	{
		JournalStartCall("CreatePyramidBuilder", part);
		JournalInClassParam(pyramid, "AutomationAPI::Pyramid", "pyramid");
	}
	
	if (IsJournaling())
	{
		JournalReturnClass(nullptr, "AutomationAPI::Pyramidbuilder", "Pyramidbuilder");
		JournalEndCall();
	}

	return nullptr;
}

// Mode 2
Application::PyramidBuilder* Journaling_Part_CreatePyramidBuilderPartOnly(Application::Pyramid* pyramid)
{
	//If Journaling write the thing things
	if (IsJournaling())
	{
		JournalStartCall("CreatePyramidBuilder", pyramid);
	}

	if (IsJournaling())
	{
		JournalReturnClass(nullptr, "AutomationAPI::Pyramidbuilder", "Pyramidbuilder");
		JournalEndCall();
	}

	return nullptr;
}
