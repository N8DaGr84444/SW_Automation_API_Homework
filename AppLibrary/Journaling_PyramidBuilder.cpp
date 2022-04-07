#include "Journaling_PyramidBuilder.h"
#include "..\Journaling\Journaling.h"
#include "..\Journaling\JournalHelpers.h"


void Journaling_PyramidBuilder_SetType(Application::PyramidBuilder* pyramidBuilder, JournalPyramidBuilderTypes type)
{
	//If Journaling write the thing things
	if (IsJournaling())
	{
		JournalStartCall("SetType", pyramidBuilder);
		JournalIntInParam(type, "type");
	}

	pyramidBuilder->SetType(type);

	if (IsJournaling())
	{
		JournalEndCall();
	}

}


JournalPyramidBuilderTypes Journaling_BlockBuilder_GetType(Application::PyramidBuilder* pyramidBuilder)
{
	//If Journaling write the thing things
	if (IsJournaling())
	{
		JournalStartCall("GetType", pyramidBuilder);
	}

	auto type = pyramidBuilder->GetType();

	if (IsJournaling())
	{
		JournalReturnInt(type, "type");
		JournalEndCall();
	}

	return type;
}
