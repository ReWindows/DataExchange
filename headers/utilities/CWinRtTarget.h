#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 11 member(s).
class CWinRtTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CWinRtTarget@@UEAAJPEAUIDragDropArgsPriv@@@Z
    virtual long Cancel(IDragDropArgsPriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CWinRtTarget@@UEAAJPEAUIDragDropArgsPriv@@PEAPEAUIDragUIOverridePriv@@@Z
    virtual long DragEnter(IDragDropArgsPriv *, IDragUIOverridePriv * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CWinRtTarget@@UEAAJPEAUIDragDropArgsPriv@@@Z
    virtual long DragLeave(IDragDropArgsPriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CWinRtTarget@@UEAAJPEAUIDragDropArgsPriv@@PEAPEAUIDragUIOverridePriv@@@Z
    virtual long DragOver(IDragDropArgsPriv *, IDragUIOverridePriv * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CWinRtTarget@@UEAAJPEAUIDragDropArgsPriv@@@Z
    virtual long Drop(IDragDropArgsPriv *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReentrancyModel@CWinRtTarget@@UEAAJPEAW4DROPTARGETREENTRANCYMODEL@@PEAI@Z
    virtual long GetReentrancyModel(int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CWinRtTarget@@QEAAJPEAUIDropTarget@@K@Z
    long RuntimeClassInitialize(IDropTarget *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWinRtTarget@@UEAA@XZ
    virtual ~CWinRtTarget();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExtractFromArgs@CWinRtTarget@@AEAAJPEAUIDragDropArgsPriv@@PEAU_POINTL@@PEAK2PEAPEAUIDataObject@@@Z
    long _ExtractFromArgs(IDragDropArgsPriv *, _POINTL *, unsigned long *, unsigned long *, IDataObject * *);
};
