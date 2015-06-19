#pragma once
#include "Action.h"

namespace Trigger
{
	class CActionPlaySound :
		public CAction
	{
	public:
		virtual void DoAction();
		static CAction* Clone()
		{
			return new CActionPlaySound;
		}
	};
}