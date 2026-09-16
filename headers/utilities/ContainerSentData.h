#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 5 member(s).
namespace DragDropContainerTelemetry {
class ContainerSentData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@ContainerSentData@DragDropContainerTelemetry@@QEAAXPEBD@Z
    void StartActivityWithCorrelationVector(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ContainerSentData@DragDropContainerTelemetry@@QEAAXIPEBGPEBD@Z
    void Stop(unsigned int, unsigned short const *, char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContainerSentData@DragDropContainerTelemetry@@QEAA@XZ
    ~ContainerSentData();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ContainerSentData@DragDropContainerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ContainerSentData@DragDropContainerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DragDropContainerTelemetry
