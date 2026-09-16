#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 9 member(s).
class DragDropContainerTelemetry {
public:
    class ContainerDragStarted;
    class ContainerSentData;
    class CreateDataObjectFromHostData;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HostDoDrop_@DragDropContainerTelemetry@@QEAAXJJPEBD@Z
    void HostDoDrop_(long, long, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HostDragEnter_@DragDropContainerTelemetry@@QEAAXPEBD@Z
    void HostDragEnter_(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HostDragLeave_@DragDropContainerTelemetry@@QEAAXPEBD@Z
    void HostDragLeave_(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HostDragResult_@DragDropContainerTelemetry@@QEAAXIPEBD@Z
    void HostDragResult_(unsigned int, char const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@DragDropContainerTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
};
