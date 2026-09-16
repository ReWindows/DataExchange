#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 12 member(s).
namespace CDataPackageHelper {
class ThumbnailHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractVisualFromDataPackageView@ThumbnailHelper@CDataPackageHelper@@UEAAJPEAUIDataPackageView@DataTransfer@ApplicationModel@Windows@@W4ScaleFactor@@@Z
    virtual long ExtractVisualFromDataPackageView(::Windows::ApplicationModel::DataTransfer::IDataPackageView *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ThumbnailHelper@CDataPackageHelper@@QEAA@XZ
    ThumbnailHelper();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ThumbnailHelper@CDataPackageHelper@@UEAA@XZ
    virtual ~ThumbnailHelper();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataPackageHelper@ThumbnailHelper@CDataPackageHelper@@EEAAPEAV2@XZ
    virtual CDataPackageHelper * GetDataPackageHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvoke@ThumbnailHelper@CDataPackageHelper@@EEAAJPEAUIRandomAccessStreamWithContentType@Streams@Storage@Windows@@@Z
    virtual long OnInvoke(::Windows::Storage::Streams::IRandomAccessStreamWithContentType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvoke@ThumbnailHelper@CDataPackageHelper@@EEAAJPEAU?$IVectorView@PEAUIStorageItem@Storage@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long OnInvoke(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExtractNextThumbnail@ThumbnailHelper@CDataPackageHelper@@AEAAXXZ
    void _ExtractNextThumbnail();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExtractThumbnailAt@ThumbnailHelper@CDataPackageHelper@@AEAAJI@Z
    long _ExtractThumbnailAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnThumbnailExtracted@ThumbnailHelper@CDataPackageHelper@@AEAAJXZ
    long _OnThumbnailExtracted();
};
} // namespace CDataPackageHelper
