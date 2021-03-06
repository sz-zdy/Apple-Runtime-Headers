//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

#import <AppKit/NSDraggingSource-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface NSDocumentDragButton : NSButton <NSDraggingSource>
{
    struct __ddbFlags {
        unsigned int waitForDrag:1;
        unsigned int currentlyDragging:1;
        unsigned int shouldDrag:1;
        unsigned int RESERVED:29;
    } _ddbFlags;
    NSURL *representedURL;
}

- (void)dealloc;
- (void)mouseDragged:(id)arg1;
- (id)_draggingItemFromPasteboardItem:(id)arg1;
- (struct CGPoint)_filenameWindowDragPoint;
- (id)_textViewForDragging;
- (void)_autosaveDocumentIfNeeded;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (id)originalWindow;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)_showDragError:(int)arg1 forFilename:(id)arg2;
- (void)_dragFile:(id)arg1 fromRect:(struct CGRect)arg2 slideBack:(BOOL)arg3 event:(id)arg4;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (id)representedFilename;
- (void)setRepresentedFilename:(id)arg1;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

