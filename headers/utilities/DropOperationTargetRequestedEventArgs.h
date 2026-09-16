#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 17 member(s).
class DropOperationTargetRequestedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DropOperationTargetRequestedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DropOperationTargetRequestedEventArgs@@QEAA@XZ
    DropOperationTargetRequestedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DropOperationTargetRequestedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DropOperationTargetRequestedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DropOperationTargetRequestedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DropOperationTargetRequestedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DropOperationTargetRequestedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTarget@DropOperationTargetRequestedEventArgs@@UEAAJPEAUICoreDropOperationTarget@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long SetTarget(::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DropOperationTargetRequestedEventArgs@@UEAA@XZ
    virtual ~DropOperationTargetRequestedEventArgs();
};
