#pragma once
#include "AppFeaturesOpsExports.h"
#include "..\Core\GuidObject.h"

// TODO these probably shoudl be in their own file, 
// but deferring this to when get a generator to handle this for us
enum JournalPyramidBuilderTypes
{
	JournalTypesOriginAndEdgeLengths, /**Represents the pyramid created by providing Originand Edge Lengths. */
	JournalTypesTwoPointsAndHeight, /**Represents the pyramid created by providing Two Pointsand Height.*/
	JournalTypesDiagonalPoints /**Represents the pyramid created by providing Diagonal Points. */
};

namespace Application
{
	class Pyramid;

	class APPLIBRARY_API PyramidBuilder : public GuidObject
	{
	public:
		PyramidBuilder() = delete;
		PyramidBuilder(Application::Pyramid* pyramid, int guid);
		JournalPyramidBuilderTypes GetType();
		void SetType(JournalPyramidBuilderTypes type);

	private:
		Pyramid* m_pyramid;
		JournalPyramidBuilderTypes m_journalPyramidBuilderTypes;

	};
}
