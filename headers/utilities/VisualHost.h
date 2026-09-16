#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 11 member(s).
class VisualHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDragContent@VisualHost@@QEAAJXZ
    long ClearDragContent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@VisualHost@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long GetDevice(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragContent@VisualHost@@QEAAJPEAUIDCompositionVisual2@@UtagSIZE@@UtagPOINT@@PEAUIBuffer@Streams@Storage@Windows@@@Z
    long SetDragContent(IDCompositionVisual2*, tagSIZE, tagPOINT, ::Windows::Storage::Streams::IBuffer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragContent@VisualHost@@QEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@UtagPOINT@@PEAUIBuffer@Streams@Storage@5@@Z
    long SetDragContent(::Windows::Graphics::Imaging::ISoftwareBitmap *, tagPOINT, ::Windows::Storage::Streams::IBuffer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualAndCommit@VisualHost@@QEAAJPEAXPEAUtagSIZE@@PEAUtagPOINT@@PEAPEAUIBuffer@Streams@Storage@Windows@@@Z
    long SetVisualAndCommit(void *, tagSIZE *, tagPOINT *, ::Windows::Storage::Streams::IBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualAndCommitAsync@VisualHost@@QEAAJPEAXPEAUIAsyncDragUIContentCompletionCallbackPriv@@@Z
    long SetVisualAndCommitAsync(void *, IAsyncDragUIContentCompletionCallbackPriv *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VisualHost@@QEAA@XZ
    VisualHost();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisualHost@@QEAA@XZ
    ~VisualHost();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureInitialized@VisualHost@@IEAAJXZ
    long _EnsureInitialized();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConnectWithBroker@VisualHost@@AEAAJPEAX@Z
    long _ConnectWithBroker(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureDragContentParent@VisualHost@@AEAAJXZ
    long _EnsureDragContentParent();
};
