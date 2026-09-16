#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 4 member(s).
namespace WinRTDragDropTelemetry {
class DropActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DropActivity@WinRTDragDropTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DropActivity@WinRTDragDropTelemetry@@QEAA@XZ
    ~DropActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DropActivity@WinRTDragDropTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DropActivity@WinRTDragDropTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WinRTDragDropTelemetry
