#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 8 member(s).
class CDropTargetProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTarget@CDropTargetProvider@@UEAAJPEAPEAUIDropOperationTargetPriv@@@Z
    virtual long GetTarget(IDropOperationTargetPriv * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CoreObject@CDropTargetProvider@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_CoreObject(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropTargetId@CDropTargetProvider@@UEAAJPEA_K@Z
    virtual long get_DropTargetId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HitTestId@CDropTargetProvider@@UEAAJPEA_K@Z
    virtual long get_HitTestId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Window@CDropTargetProvider@@UEAAJPEAPEAUHWND__@@@Z
    virtual long get_Window(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HitTestId@CDropTargetProvider@@UEAAJ_K@Z
    virtual long put_HitTestId(uint64_t);
};
