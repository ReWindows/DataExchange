#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 10 member(s).
class DropTargetInternal {
public:
    class AsyncCompletionHandler;
    class DragInfo;
    class DragUIOverride;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@DropTargetInternal@@UEAAJPEAUIDragDropArgsPriv@@@Z
    virtual long Cancel(IDragDropArgsPriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@DropTargetInternal@@UEAAJPEAUIDragDropArgsPriv@@PEAPEAUIDragUIOverridePriv@@@Z
    virtual long DragEnter(IDragDropArgsPriv *, IDragUIOverridePriv * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@DropTargetInternal@@UEAAJPEAUIDragDropArgsPriv@@@Z
    virtual long DragLeave(IDragDropArgsPriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@DropTargetInternal@@UEAAJPEAUIDragDropArgsPriv@@PEAPEAUIDragUIOverridePriv@@@Z
    virtual long DragOver(IDragDropArgsPriv *, IDragUIOverridePriv * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@DropTargetInternal@@UEAAJPEAUIDragDropArgsPriv@@@Z
    virtual long Drop(IDragDropArgsPriv *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReentrancyModel@DropTargetInternal@@UEAAJPEAW4DROPTARGETREENTRANCYMODEL@@PEAI@Z
    virtual long GetReentrancyModel(int *, unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DropTargetInternal@@UEAA@XZ
    virtual ~DropTargetInternal();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseInternalObjects@DropTargetInternal@@AEAAXXZ
    void _ReleaseInternalObjects();
};
