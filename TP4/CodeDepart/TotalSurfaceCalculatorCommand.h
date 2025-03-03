#pragma once
#include "AbstractCommand.h"
#include "AbstractNode.h"

class TotalSurfaceCalculatorCommand : public AbstractCommand
{
public:
	TotalSurfaceCalculatorCommand(AbstractNode* root);
	~TotalSurfaceCalculatorCommand();

	void execute();

private:
	TotalSurfaceCalculatorCommand();
	AbstractNode* m_root;
};
