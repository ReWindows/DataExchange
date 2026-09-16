#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 10 member(s).
class DropTargetMapService {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DropTargetMapService@@QEAA@XZ
    DropTargetMapService();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DropTargetMapService@@UEAA@XZ
    virtual ~DropTargetMapService();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDropTarget@DropTargetMapService@@EEAAJ_KPEAUIDropTargetProviderPriv@@@Z
    virtual long AddDropTarget(uint64_t, IDropTargetProviderPriv *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropTarget@DropTargetMapService@@EEAAJ_KPEAPEAUIDropTargetProviderPriv@@@Z
    virtual long GetDropTarget(uint64_t, IDropTargetProviderPriv * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropTargetForWindow@DropTargetMapService@@EEAAJPEAUHWND__@@PEAPEAUIDropTargetProviderPriv@@@Z
    virtual long GetDropTargetForWindow(HWND__*, IDropTargetProviderPriv * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropTargetForWindowAndCoreObject@DropTargetMapService@@EEAAJPEAUHWND__@@PEAUIInspectable@@PEAPEAUIDropTargetProviderPriv@@@Z
    virtual long GetDropTargetForWindowAndCoreObject(HWND__*, IInspectable *, IDropTargetProviderPriv * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDropTarget@DropTargetMapService@@EEAAJ_KPEAH@Z
    virtual long HasDropTarget(uint64_t, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDropTarget@DropTargetMapService@@EEAAJ_K@Z
    virtual long RemoveDropTarget(uint64_t);
};
