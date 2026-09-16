#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 8 member(s).
class CDataPackageHelper {
public:
    class CBitmapHelper;
    class ThumbnailHelper;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentVisualAsync@CDataPackageHelper@@QEAAJPEAUIDCompositionDesktopDevicePartner@@PEAUIDataPackageView@DataTransfer@ApplicationModel@Windows@@W4ScaleFactor@@PEAUIDeferredVisualCallback@@@Z
    long GetContentVisualAsync(IDCompositionDesktopDevicePartner *, ::Windows::ApplicationModel::DataTransfer::IDataPackageView *, int, IDeferredVisualCallback *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDataPackageHelper@@QEAA@XZ
    ~CDataPackageHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BuildContentFromBitmap@CDataPackageHelper@@AEAAJPEAUIDataPackageView@DataTransfer@ApplicationModel@Windows@@W4ScaleFactor@@@Z
    long _BuildContentFromBitmap(::Windows::ApplicationModel::DataTransfer::IDataPackageView *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BuildContentFromResource@CDataPackageHelper@@AEAAJPEAUHRSRC__@@W4ScaleFactor@@@Z
    long _BuildContentFromResource(HRSRC__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BuildContentFromThumbnails@CDataPackageHelper@@AEAAJPEAUIDataPackageView@DataTransfer@ApplicationModel@Windows@@W4ScaleFactor@@@Z
    long _BuildContentFromThumbnails(::Windows::ApplicationModel::DataTransfer::IDataPackageView *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompleteCallback@CDataPackageHelper@@AEAAJUtagSIZE@@@Z
    long _CompleteCallback(tagSIZE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MakeSurfaceFromStream@CDataPackageHelper@@AEAAJPEAUIStream@@PEAUtagSIZE@@PEAPEAUIDCompositionSurface@@PEAPEAUIBuffer@Streams@Storage@Windows@@@Z
    long _MakeSurfaceFromStream(IStream *, tagSIZE *, IDCompositionSurface * *, ::Windows::Storage::Streams::IBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MakeSurfaceFromWICBitmap@CDataPackageHelper@@AEAAJPEAUIWICBitmapSource@@PEAUtagSIZE@@PEAPEAUIDCompositionSurface@@PEAPEAUIBuffer@Streams@Storage@Windows@@@Z
    long _MakeSurfaceFromWICBitmap(IWICBitmapSource *, tagSIZE *, IDCompositionSurface * *, ::Windows::Storage::Streams::IBuffer * *);
};
