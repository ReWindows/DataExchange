#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 37 member(s).
class DragDropStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@DragDropStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DragDropStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DragDropStatics@@QEAA@XZ
    DragDropStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCoreObject@DragDropStatics@@UEAAJPEAUIInspectable@@PEAPEAU2@@Z
    virtual long GetForCoreObject(IInspectable *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@DragDropStatics@@UEAAJPEAPEAUICoreDragDropManager@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long GetForCurrentView(::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForWindow@DragDropStatics@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetForWindow(HWND__*, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DragDropStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DragDropStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DragDropStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@DragDropStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@DragDropStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DragDropStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DragDropStatics@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCoreInput@DragDropStatics@@AEAAJPEAUIInspectable@@PEAPEAUICoreDragDropManager@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@@Z
    long GetForCoreInput(IInspectable *, ::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager * *);
};
