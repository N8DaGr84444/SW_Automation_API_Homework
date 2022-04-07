#include "PyramidBuilder.h"
#include <iostream>

Application::PyramidBuilder::PyramidBuilder(Application::Pyramid* pyramid, int guid) : GuidObject(guid), m_pyramid(pyramid)
{

	if (m_pyramid == nullptr)
	{
		std::cout << "Pyramid is creation mode" << std::endl;
	}
	else
	{
		std::cout << "Pyramid is edit/query mode" << std::endl;
	}
}

JournalPyramidBuilderTypes Application::PyramidBuilder::GetType()
{
	return m_journalPyramidBuilderTypes;
}
void Application::PyramidBuilder::SetType(JournalPyramidBuilderTypes type)
{
	m_journalPyramidBuilderTypes = type;
}
