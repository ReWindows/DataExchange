#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 8 member(s).
namespace CDataPackageHelper {
class CBitmapHelper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapHelper@CDataPackageHelper@@QEAA@XZ
    CBitmapHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractVisualFromDataPackageView@CBitmapHelper@CDataPackageHelper@@UEAAJPEAUIDataPackageView@DataTransfer@ApplicationModel@Windows@@W4ScaleFactor@@@Z
    virtual long ExtractVisualFromDataPackageView(::Windows::ApplicationModel::DataTransfer::IDataPackageView *, int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataPackageHelper@CBitmapHelper@CDataPackageHelper@@EEAAPEAV2@XZ
    virtual CDataPackageHelper * GetDataPackageHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvoke@CBitmapHelper@CDataPackageHelper@@EEAAJPEAUIRandomAccessStreamReference@Streams@Storage@Windows@@@Z
    virtual long OnInvoke(::Windows::Storage::Streams::IRandomAccessStreamReference *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvoke@CBitmapHelper@CDataPackageHelper@@EEAAJPEAUIRandomAccessStreamWithContentType@Streams@Storage@Windows@@@Z
    virtual long OnInvoke(::Windows::Storage::Streams::IRandomAccessStreamWithContentType *);
};
} // namespace CDataPackageHelper
