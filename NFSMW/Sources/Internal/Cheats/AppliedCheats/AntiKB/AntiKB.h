#pragma once

#include "../../../Includes.h"

#include "../CheatsBase.h"
#include "../../GameClasses/VehicleEntity.h"

class AntiKB : public CheatBase
{
public:
    AntiKB()
    {
        this->enabled = false;
    }

    void EnableOrDisable();

private:
    bool enabled;
};