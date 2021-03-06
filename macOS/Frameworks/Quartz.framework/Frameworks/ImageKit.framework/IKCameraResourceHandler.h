//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ImageKit/NSTableViewDataSource-Protocol.h>
#import <ImageKit/NSTableViewDelegate-Protocol.h>

@class IKCameraDeviceViewHandler, NSArrayController, NSMutableArray, NSString, NSWindow;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IKCameraResourceHandler : NSObject <NSTableViewDelegate, NSTableViewDataSource>
{
    IKCameraDeviceViewHandler *_deviceHandler;
    NSMutableArray *_queue;
    NSArrayController *_queueController;
    long long _outstandingThumbnailRequests;
    long long _outstandingMetadataRequests;
    BOOL _paused;
    NSWindow *_window;
    NSObject<OS_dispatch_queue> *_ikQueue;
}

+ (id)sharedResourceHandler;
@property(retain) NSObject<OS_dispatch_queue> *ikQueue; // @synthesize ikQueue=_ikQueue;
@property NSWindow *window; // @synthesize window=_window;
@property long long outstandingMetadataRequests; // @synthesize outstandingMetadataRequests=_outstandingMetadataRequests;
@property long long outstandingThumbnailRequests; // @synthesize outstandingThumbnailRequests=_outstandingThumbnailRequests;
@property NSArrayController *queueController; // @synthesize queueController=_queueController;
@property IKCameraDeviceViewHandler *deviceHandler; // @synthesize deviceHandler=_deviceHandler;
@property NSMutableArray *queue; // @synthesize queue=_queue;
- (void)reset;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)resumeRH;
- (void)pauseRH;
- (void)requestThumbnail:(id)arg1;
- (void)requestMetadata:(id)arg1;
- (void)didDownloadMetadata:(id)arg1;
- (void)didDownloadThumbnail:(id)arg1;
- (void)doDownloadNextResource;
- (void)recheckDownloadState;
- (void)downloadNextResource;
- (void)removeItem:(id)arg1;
- (void)resync;
- (BOOL)shouldProcessItem:(id)arg1;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

