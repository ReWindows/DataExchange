#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 10 member(s).
namespace DropTargetInternal {
class DragInfo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DragInfo@DropTargetInternal@@QEAA@XZ
    DragInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionAndCoordinateSpace@DragInfo@DropTargetInternal@@UEAAJPEAUPoint@Foundation@Windows@@PEAW4DragInfoCoordinateSpace@Internal@DataTransfer@ApplicationModel@5@@Z
    virtual long GetPositionAndCoordinateSpace(WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowedOperations@DragInfo@DropTargetInternal@@UEAAJPEAW4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_AllowedOperations(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@DragInfo@DropTargetInternal@@UEAAJPEAPEAUIDataPackageView@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_Data(::Windows::ApplicationModel::DataTransfer::IDataPackageView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Modifiers@DragInfo@DropTargetInternal@@UEAAJPEAW4DragDropModifiers@DragDrop@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_Modifiers(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@DragInfo@DropTargetInternal@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragInfo@DropTargetInternal@@UEAA@XZ
    virtual ~DragInfo();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePosition@DragInfo@DropTargetInternal@@AEAAJXZ
    long EnsurePosition();
};
} // namespace DropTargetInternal
