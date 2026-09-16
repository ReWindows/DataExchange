#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 8 member(s).
class ResourceHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@ResourceHelper@@QEAAJW4ScaleFactor@@PEAPEAUHRSRC__@@@Z
    long GetResource(int, HRSRC__* *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFor100Percent@ResourceHelper@@MEAAPEAUHRSRC__@@XZ
    virtual HRSRC__* GetFor100Percent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFor125Percent@ResourceHelper@@MEAAPEAUHRSRC__@@XZ
    virtual HRSRC__* GetFor125Percent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFor150Percent@ResourceHelper@@MEAAPEAUHRSRC__@@XZ
    virtual HRSRC__* GetFor150Percent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFor200Percent@ResourceHelper@@MEAAPEAUHRSRC__@@XZ
    virtual HRSRC__* GetFor200Percent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFor250Percent@ResourceHelper@@MEAAPEAUHRSRC__@@XZ
    virtual HRSRC__* GetFor250Percent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFor300Percent@ResourceHelper@@MEAAPEAUHRSRC__@@XZ
    virtual HRSRC__* GetFor300Percent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFor400Percent@ResourceHelper@@MEAAPEAUHRSRC__@@XZ
    virtual HRSRC__* GetFor400Percent();
};
