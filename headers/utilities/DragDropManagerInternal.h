#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 13 member(s).
class DragDropManagerInternal {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTarget@DragDropManagerInternal@@UEAAJPEAPEAUIDropOperationTargetPriv@@@Z
    virtual long GetTarget(IDropOperationTargetPriv * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TargetRequested@DragDropManagerInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreDragDropManager@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@PEAVCoreDropOperationTargetRequestedEventArgs@23456@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TargetRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AreConcurrentOperationsEnabled@DragDropManagerInternal@@UEAAJPEAE@Z
    virtual long get_AreConcurrentOperationsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CoreObject@DragDropManagerInternal@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_CoreObject(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropTargetId@DragDropManagerInternal@@UEAAJPEA_K@Z
    virtual long get_DropTargetId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HitTestId@DragDropManagerInternal@@UEAAJPEA_K@Z
    virtual long get_HitTestId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Window@DragDropManagerInternal@@UEAAJPEAPEAUHWND__@@@Z
    virtual long get_Window(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AreConcurrentOperationsEnabled@DragDropManagerInternal@@UEAAJE@Z
    virtual long put_AreConcurrentOperationsEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HitTestId@DragDropManagerInternal@@UEAAJ_K@Z
    virtual long put_HitTestId(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TargetRequested@DragDropManagerInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TargetRequested(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragDropManagerInternal@@UEAA@XZ
    virtual ~DragDropManagerInternal();
};
