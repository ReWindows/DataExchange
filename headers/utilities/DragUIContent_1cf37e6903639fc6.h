#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 6 member(s).
class DragUIContent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@DragUIContent@@UEAAJPEAUIDCompositionVisual2@@UtagSIZE@@UtagPOINT@@PEAUIUnknown@@@Z
    virtual long Complete(IDCompositionVisual2*, tagSIZE, tagPOINT, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaleFactor@DragUIContent@@UEAAJPEAI@Z
    virtual long GetScaleFactor(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentAndCompletionDelegate@DragUIContent@@UEAAJPEAXPEAUIAsyncDragUIContentCompletionCallbackPriv@@@Z
    virtual long SetContentAndCompletionDelegate(void *, IAsyncDragUIContentCompletionCallbackPriv *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragUIContent@@UEAA@XZ
    virtual ~DragUIContent();
};
