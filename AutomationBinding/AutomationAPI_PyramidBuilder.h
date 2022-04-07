#pragma once
#include "AutomationBindingExports.h"
#include "AutomationAPI_IBuilder.h"

namespace AutomationAPI
{
	class CADObject;
	class PyramidBuilder;
	class PyramidBuilderImpl;
	/// <summary>
	/// PyramidBuilder comment
	/// </summary>
	class AUTOMATIONBINDING_API PyramidBuilder : public IBuilder
	{
	public:
		enum PyramidBuilderTypes
		{
			TypesOriginAndEdgeLengths, /**Represents the block created by providing Originand Edge Lengths. */
			TypesTwoPointsAndHeight, /**Represents the block created by providing Two Pointsand Height.*/
			TypesDiagonalPoints /**Represents the block created by providing Diagonal Points. */
		};

		void SetType(PyramidBuilderTypes type);
		PyramidBuilderTypes GetType();

		void SetHeight(int h);
		int GetHeight();
		void SetBaseLength(int b);
		int GetBaseLength();
		void SetOrigin(int x, int y, int z);
		void GetOrigin(int& x, int& y, int& z);


		CADObject* Commit() override;

		/*
		* Internal Usage only.
		*/
		static PyramidBuilder* CreatePyramidBuilder(int guid);
		virtual ~PyramidBuilder();
		PyramidBuilder() = delete;

	private:

		PyramidBuilder(int guid);
		PyramidBuilderImpl* m_pyramidBuilderImpl;

	};
}
