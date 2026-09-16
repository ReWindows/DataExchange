#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 6 member(s).
namespace DropTargetInternal {
class AsyncCompletionHandler {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AsyncCompletionHandler@DropTargetInternal@@QEAA@XZ
    AsyncCompletionHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@AsyncCompletionHandler@DropTargetInternal@@UEAAJPEAU?$IAsyncOperation@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Foundation@Windows@@W4AsyncStatus@45ABI@@@Z
    virtual long Invoke(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AsyncCompletionHandler@DropTargetInternal@@QEAAJPEAUIDragDropArgsPriv@@PEAV2@@Z
    long RuntimeClassInitialize(IDragDropArgsPriv *, DropTargetInternal *);
};
} // namespace DropTargetInternal
