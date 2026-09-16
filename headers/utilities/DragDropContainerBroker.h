#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 12 member(s).
class DragDropContainerBroker {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DragDropContainerBroker@@QEAA@XZ
    DragDropContainerBroker();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentDragSourceDataObject@DragDropContainerBroker@@UEAAJPEAPEAUIDataObject@@@Z
    virtual long GetCurrentDragSourceDataObject(IDataObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DragDropContainerBroker@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendDataAsync@DragDropContainerBroker@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAUIAsyncAction@45@@Z
    virtual long SendDataAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentDragSourceDataObject@DragDropContainerBroker@@UEAAJPEAUIDataObject@@@Z
    virtual long SetCurrentDragSourceDataObject(IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@DragDropContainerBroker@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DataReceived@DragDropContainerBroker@@UEAAJPEAU?$ITypedEventHandler@PEAVDynamicVirtualChannelReceiver@DynamicVirtualChannel@Internal@Windows@@PEAVDynamicVirtualChannelReceiverEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DataReceived(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DataReceived@DragDropContainerBroker@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DataReceived(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragDropContainerBroker@@UEAA@XZ
    virtual ~DragDropContainerBroker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDataReceived@DragDropContainerBroker@@AEAAJPEAUIDynamicVirtualChannelReceiver@DynamicVirtualChannel@Internal@Windows@@PEAUIDynamicVirtualChannelReceiverEventArgs@345@@Z
    long OnDataReceived(::Windows::Internal::DynamicVirtualChannel::IDynamicVirtualChannelReceiver *, ::Windows::Internal::DynamicVirtualChannel::IDynamicVirtualChannelReceiverEventArgs *);
};
