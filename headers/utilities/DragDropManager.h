#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 37 member(s).
class DragDropManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DragDropManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@DragDropManager@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForWindow@DragDropManager@@SAJPEAUHWND__@@PEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z
    static long GetForWindow(HWND__*, IInspectable *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DragDropManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DragDropManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTarget@DragDropManager@@UEAAJPEAPEAUIDropOperationTargetPriv@@@Z
    virtual long GetTarget(IDropOperationTargetPriv * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DragDropManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DragDropManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DragDropManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TargetRequested@DragDropManager@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreDragDropManager@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@PEAVCoreDropOperationTargetRequestedEventArgs@23456@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TargetRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AreConcurrentOperationsEnabled@DragDropManager@@UEAAJPEAE@Z
    virtual long get_AreConcurrentOperationsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CoreObject@DragDropManager@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_CoreObject(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropTargetId@DragDropManager@@UEAAJPEA_K@Z
    virtual long get_DropTargetId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HitTestId@DragDropManager@@UEAAJPEA_K@Z
    virtual long get_HitTestId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Window@DragDropManager@@UEAAJPEAPEAUHWND__@@@Z
    virtual long get_Window(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AreConcurrentOperationsEnabled@DragDropManager@@UEAAJE@Z
    virtual long put_AreConcurrentOperationsEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HitTestId@DragDropManager@@UEAAJ_K@Z
    virtual long put_HitTestId(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TargetRequested@DragDropManager@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TargetRequested(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachInputDropTarget@DragDropManager@@CAXPEAUHWND__@@PEAUIClosable@Foundation@Windows@@_K@Z
    static void AttachInputDropTarget(HWND__*, WindissectOpaque *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInternalManager@DragDropManager@@AEAAXXZ
    void EnsureInternalManager();
};
