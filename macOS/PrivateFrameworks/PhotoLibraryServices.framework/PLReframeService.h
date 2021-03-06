//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress, PLPhotoLibrary, PLPhotoLibraryBundle;
@protocol OS_dispatch_queue;

@interface PLReframeService : NSObject
{
    struct os_unfair_lock_s _lock;
    // Error parsing type: Aq, name: _cancellationGenerationCounter
    NSProgress *_currentProgress;
    PLPhotoLibraryBundle *_libraryBundle;
    PLPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_serializationQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serializationQueue; // @synthesize serializationQueue=_serializationQueue;
- (id)enqueueReframeRequestForAssetUUID:(id)arg1 imageConversionClient:(id)arg2 videoConversionClient:(id)arg3 isOnDemand:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)photoLibrary;
- (id)initWithLibraryBundle:(id)arg1;

@end

