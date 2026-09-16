#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 50 member(s).
class DragOperation {
public:
    class DragUIContent;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DragOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DragOperation@@QEAA@XZ
    DragOperation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@DragOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetData(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragUIContent@DragOperation@@UEAAJPEAPEAUIAsyncDragUIContentPriv@@PEAHPEAUtagSIZE@@@Z
    virtual long GetDragUIContent(IAsyncDragUIContentPriv * *, int *, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DragOperation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitialTarget@DragOperation@@UEAAJPEAPEAUIDropTargetProviderPriv@@PEAUtagPOINT@@@Z
    virtual long GetInitialTarget(IDropTargetProviderPriv * *, tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerId@DragOperation@@UEAAJPEAI@Z
    virtual long GetPointerId(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DragOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DragOperation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@DragOperation@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@DragOperation@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DragOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DragOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DragOperation@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragUIContentFromSoftwareBitmap@DragOperation@@UEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@@Z
    virtual long SetDragUIContentFromSoftwareBitmap(::Windows::Graphics::Imaging::ISoftwareBitmap *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragUIContentFromSoftwareBitmapWithAnchorPoint@DragOperation@@UEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@UPoint@Foundation@5@@Z
    virtual long SetDragUIContentFromSoftwareBitmapWithAnchorPoint(::Windows::Graphics::Imaging::ISoftwareBitmap *, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointerId@DragOperation@@UEAAJI@Z
    virtual long SetPointerId(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAsync@DragOperation@@UEAAJPEAPEAU?$IAsyncOperation@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    virtual long StartAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAsync@DragOperation@@UEAAJPEAUIInspectable@@UPoint@Foundation@Windows@@PEAPEAU?$IAsyncOperation@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@45@@Z
    virtual long StartAsync(IInspectable *, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowedOperations@DragOperation@@UEAAJPEAW4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_AllowedOperations(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@DragOperation@@UEAAJPEAPEAUIDataPackage@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_Data(::Windows::ApplicationModel::DataTransfer::IDataPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DragUIContentMode@DragOperation@@UEAAJPEAW4CoreDragUIContentMode@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_DragUIContentMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AllowedOperations@DragOperation@@UEAAJW4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long put_AllowedOperations(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DragUIContentMode@DragOperation@@UEAAJW4CoreDragUIContentMode@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long put_DragUIContentMode(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragOperation@@UEAA@XZ
    virtual ~DragOperation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanSetUIContent@DragOperation@@AEAAJXZ
    long _CanSetUIContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetScaleFactor@DragOperation@@AEAAJXZ
    long _GetScaleFactor();
};
