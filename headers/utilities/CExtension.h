#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 6 member(s).
class CExtension {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTarget@CExtension@@UEAAJPEAUHWND__@@PEBGPEAPEAUIDropTarget@@@Z
    virtual long GetTarget(HWND__*, unsigned short const *, IDropTarget * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWinRtExclusionToken@CExtension@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetWinRtExclusionToken(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTarget@CExtension@@UEAAJPEAUHWND__@@PEAUIDropTarget@@@Z
    virtual long RegisterTarget(HWND__*, IDropTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevokeTarget@CExtension@@UEAAJPEAUHWND__@@@Z
    virtual long RevokeTarget(HWND__*);
};
