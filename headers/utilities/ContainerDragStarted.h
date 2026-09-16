#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 5 member(s).
namespace DragDropContainerTelemetry {
class ContainerDragStarted {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@ContainerDragStarted@DragDropContainerTelemetry@@QEAAXPEBD@Z
    void StartActivityWithCorrelationVector(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ContainerDragStarted@DragDropContainerTelemetry@@QEAAXIIPEBD@Z
    void Stop(unsigned int, unsigned int, char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContainerDragStarted@DragDropContainerTelemetry@@QEAA@XZ
    ~ContainerDragStarted();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ContainerDragStarted@DragDropContainerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ContainerDragStarted@DragDropContainerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DragDropContainerTelemetry
