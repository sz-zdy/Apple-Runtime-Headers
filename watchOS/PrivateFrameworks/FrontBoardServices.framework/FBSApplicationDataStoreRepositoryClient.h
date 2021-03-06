//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSServiceFacilityClient.h>

#import <FrontBoardServices/FBSApplicationDataStoreRepositoryClient-Protocol.h>

@class NSCountedSet, NSHashTable, NSMutableDictionary, NSString;

@interface FBSApplicationDataStoreRepositoryClient : FBSServiceFacilityClient <FBSApplicationDataStoreRepositoryClient>
{
    struct os_unfair_lock_s _prefetchedDataLock;
    NSCountedSet *_prefetchedKeys;
    NSMutableDictionary *_prefetchedKeyValues;
    NSMutableDictionary *_pendingChangesToPrefetchedKeys;
    struct os_unfair_lock_s _observersLock;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
- (void)fireCompletion:(CDUnknownBlockType)arg1 result:(id)arg2 error:(id)arg3;
- (void)fireCompletion:(CDUnknownBlockType)arg1 error:(id)arg2;
- (id)clientCallbackQueue;
- (void)_sendMessageType:(int)arg1 withMessage:(CDUnknownBlockType)arg2 withReplyHandler:(CDUnknownBlockType)arg3 waitForReply:(_Bool)arg4;
- (id)_observers;
- (_Bool)prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id *)arg3;
- (void)_setPrefetchedObjectIfNecessary:(id)arg1 forKey:(id)arg2 application:(id)arg3;
- (void)_handleStoreInvalidated:(id)arg1;
- (id)_allPrefetchedChangesInFlightForApplication:(id)arg1;
- (_Bool)_isChangeInFlightForPrefetchedKey:(id)arg1 application:(id)arg2;
- (void)_setChangeInFlight:(_Bool)arg1 forPrefetchedKey:(id)arg2 application:(id)arg3;
- (void)_handleValueChanged:(id)arg1;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeAllObjectsForApplication:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)objectForKey:(id)arg1 forApplication:(id)arg2;
- (id)availableDataStores;
- (void)synchronizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_sendPrefetchedKeys:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removePrefetchedKeys:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addPrefetchedKeys:(id)arg1;
- (void)invalidate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

