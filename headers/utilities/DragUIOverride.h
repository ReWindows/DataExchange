#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DataExchange.dll by Windissect. 20 member(s).
namespace DropTargetInternal {
class DragUIOverride {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@DragUIOverride@DropTargetInternal@@UEAAJXZ
    virtual long Clear();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DragUIOverride@DropTargetInternal@@QEAA@XZ
    DragUIOverride();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaption@DragUIOverride@DropTargetInternal@@UEAAJPEAPEAG@Z
    virtual long GetCaption(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaptionVisibility@DragUIOverride@DropTargetInternal@@UEAAJPEAH@Z
    virtual long GetCaptionVisibility(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentVisibility@DragUIOverride@DropTargetInternal@@UEAAJPEAH@Z
    virtual long GetContentVisibility(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlyphVisibility@DragUIOverride@DropTargetInternal@@UEAAJPEAH@Z
    virtual long GetGlyphVisibility(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@DragUIOverride@DropTargetInternal@@UEAAJPEAXPEAUtagSIZE@@PEAUtagPOINT@@PEAPEAUIInspectable@@@Z
    virtual long SetContent(void *, tagSIZE *, tagPOINT *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentFromSoftwareBitmap@DragUIOverride@DropTargetInternal@@UEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@@Z
    virtual long SetContentFromSoftwareBitmap(::Windows::Graphics::Imaging::ISoftwareBitmap *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentFromSoftwareBitmapWithAnchorPoint@DragUIOverride@DropTargetInternal@@UEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@UPoint@Foundation@6@@Z
    virtual long SetContentFromSoftwareBitmapWithAnchorPoint(::Windows::Graphics::Imaging::ISoftwareBitmap *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Caption@DragUIOverride@DropTargetInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Caption(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCaptionVisible@DragUIOverride@DropTargetInternal@@UEAAJPEAE@Z
    virtual long get_IsCaptionVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsContentVisible@DragUIOverride@DropTargetInternal@@UEAAJPEAE@Z
    virtual long get_IsContentVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsGlyphVisible@DragUIOverride@DropTargetInternal@@UEAAJPEAE@Z
    virtual long get_IsGlyphVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Caption@DragUIOverride@DropTargetInternal@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Caption(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsCaptionVisible@DragUIOverride@DropTargetInternal@@UEAAJE@Z
    virtual long put_IsCaptionVisible(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsContentVisible@DragUIOverride@DropTargetInternal@@UEAAJE@Z
    virtual long put_IsContentVisible(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsGlyphVisible@DragUIOverride@DropTargetInternal@@UEAAJE@Z
    virtual long put_IsGlyphVisible(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragUIOverride@DropTargetInternal@@UEAA@XZ
    virtual ~DragUIOverride();
};
} // namespace DropTargetInternal
