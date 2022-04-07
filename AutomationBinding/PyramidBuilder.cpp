#include "AutomationAPI_PyramidBuilder.h"
#include "AutomationAPI_CADObject.h"
#include "..\AppLibrary\Journaling_PyramidBuilder.h"
#include <exception>

namespace AutomationAPI
{
	class PyramidBuilderImpl
	{
	public:

		virtual ~PyramidBuilderImpl();
		PyramidBuilderImpl() = delete;

		PyramidBuilderImpl(int guid);
		int m_guid;

	};
}

AutomationAPI::PyramidBuilder::PyramidBuilder(int guid)
{
	m_pyramidBuilderImpl = new AutomationAPI::PyramidBuilderImpl(guid);
}

AutomationAPI::PyramidBuilder::~PyramidBuilder()
{
	delete m_pyramidBuilderImpl;
}

AutomationAPI::PyramidBuilderImpl::PyramidBuilderImpl(int guid)
{
	m_guid = guid;
}

AutomationAPI::PyramidBuilderImpl::~PyramidBuilderImpl()
{

}


AutomationAPI::PyramidBuilder* AutomationAPI::PyramidBuilder::CreatePyramidBuilder(int guid)
{
	// We should check the guid being passed in, as this is public
	// but that is for another day

	return new AutomationAPI::PyramidBuilder(guid);
}

AutomationAPI::CADObject* AutomationAPI::PyramidBuilder::Commit()
{
	return nullptr;
}

void AutomationAPI::PyramidBuilder::SetType(AutomationAPI::PyramidBuilder::PyramidBuilderTypes type)
{
	Application::PyramidBuilder* pyramidBuilder =
		dynamic_cast<Application::PyramidBuilder*>(
			GuidObjectManager::GetGuidObjectManager().GetObjectFromGUID(m_pyramidBuilderImpl->m_guid));
	if (pyramidBuilder == nullptr)
	{
		throw std::exception("not able to retrieve pyramidBuilder Object");
	}

	Journaling_PyramidBuilder_SetType(pyramidBuilder, (JournalPyramidBuilderTypes)type);

}

AutomationAPI::PyramidBuilder::PyramidBuilderTypes AutomationAPI::PyramidBuilder::GetType()
{
	Application::PyramidBuilder* pyramidBuilder =
		dynamic_cast<Application::PyramidBuilder*>(
			GuidObjectManager::GetGuidObjectManager().GetObjectFromGUID(m_pyramidBuilderImpl->m_guid));

	if (pyramidBuilder == nullptr)
	{
		throw std::exception("not able to retrieve pyramidBuilder Object");
	}


	int t = (int)Journaling_PyramidBuilder_GetType(pyramidBuilder);
	AutomationAPI::PyramidBuilder::PyramidBuilderTypes type = (AutomationAPI::PyramidBuilder::PyramidBuilderTypes)t;

	return type;
}

void AutomationAPI::PyramidBuilder::SetHeight(int h)
{
}

int AutomationAPI::PyramidBuilder::GetHeight()
{
	return 0;
}

void AutomationAPI::PyramidBuilder::SetBaseLength(int b)
{
}

int AutomationAPI::PyramidBuilder::GetBaseLength()
{
	return 0;
}

void AutomationAPI::PyramidBuilder::SetOrigin(int x, int y, int z)
{
}

void AutomationAPI::PyramidBuilder::GetOrigin(int& x, int& y, int& z)
{
}
