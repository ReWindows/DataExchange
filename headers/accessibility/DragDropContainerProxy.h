#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 17 member(s).
class DragDropContainerProxy {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DragDropContainerProxy@@QEAA@XZ
    DragDropContainerProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@DragDropContainerProxy@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@DragDropContainerProxy@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@DragDropContainerProxy@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@DragDropContainerProxy@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProxyQueryContinueDrag@DragDropContainerProxy@@UEAAJPEAK@Z
    virtual long ProxyQueryContinueDrag(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDragDrop@DragDropContainerProxy@@UEAAJI@Z
    virtual long RegisterDragDrop(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevokeDragDrop@DragDropContainerProxy@@UEAAJI@Z
    virtual long RevokeDragDrop(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DragDropContainerProxy@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragSourceWindowId@DragDropContainerProxy@@UEAAJI@Z
    virtual long SetDragSourceWindowId(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointerId@DragDropContainerProxy@@UEAAJG@Z
    virtual long SetPointerId(unsigned short);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragDropContainerProxy@@UEAA@XZ
    virtual ~DragDropContainerProxy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConveyDragEffectToHost@DragDropContainerProxy@@AEAAXK@Z
    void ConveyDragEffectToHost(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDataReceived@DragDropContainerProxy@@AEAAJPEAUIDynamicVirtualChannelReceiver@DynamicVirtualChannel@Internal@Windows@@PEAUIDynamicVirtualChannelReceiverEventArgs@345@@Z
    long OnDataReceived(::Windows::Internal::DynamicVirtualChannel::IDynamicVirtualChannelReceiver *, ::Windows::Internal::DynamicVirtualChannel::IDynamicVirtualChannelReceiverEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkerThreadProc@DragDropContainerProxy@@CAKPEAX@Z
    static unsigned long WorkerThreadProc(void *);
};
