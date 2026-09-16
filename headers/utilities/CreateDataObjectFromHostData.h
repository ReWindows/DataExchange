#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 7 member(s).
namespace DragDropContainerTelemetry {
class CreateDataObjectFromHostData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CreateDataObjectFromHostData@DragDropContainerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateDataObjectFromHostData@DragDropContainerTelemetry@@QEAA@XZ
    ~CreateDataObjectFromHostData();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CreateDataObjectFromHostData@DragDropContainerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CreateDataObjectFromHostData@DragDropContainerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DragDropContainerTelemetry
