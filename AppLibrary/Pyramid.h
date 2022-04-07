#pragma once
#include "AppFeaturesOpsExports.h"
#include "Feature.h"

#include <iostream>
#include <fstream>
#include "..\Core\GuidObject.h"

void ProcessPyramid(std::ifstream& streamObject);

namespace Application
{
	class APPLIBRARY_API IPyramid : public GuidObject
	{
	public:
		virtual std::string GetVersion() = 0;
		IPyramid(int guid) : GuidObject(guid)
		{

		}
		IPyramid() = delete;
	};


	class APPLIBRARY_API Pyramid : public Application::Feature, public IPyramid
	{
	public:
		Pyramid() = delete;
		Pyramid(int guid) : IPyramid(guid)
		{

		}
		std::string GetVersion() override
		{
			return "1";
		}
	};
}