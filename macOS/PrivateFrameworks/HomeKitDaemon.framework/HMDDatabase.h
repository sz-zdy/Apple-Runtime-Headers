//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMBCloudDatabaseDelegate-Protocol.h>
#import <HomeKitDaemon/HMBLocalDatabaseDelegate-Protocol.h>
#import <HomeKitDaemon/HMDDatabase-Protocol.h>
#import <HomeKitDaemon/HMDDatabaseZoneDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMBCloudDatabase, HMBLocalDatabase, HMDLogEventDispatcher, HMFUnfairLock, NSHashTable, NSMapTable, NSString;

@interface HMDDatabase : HMFObject <HMBLocalDatabaseDelegate, HMBCloudDatabaseDelegate, HMDDatabaseZoneDelegate, HMFLogging, HMDDatabase>
{
    BOOL _hasStarted;
    HMBLocalDatabase *_localDatabase;
    HMBCloudDatabase *_cloudDatabase;
    NSHashTable *_delegates;
    NSMapTable *_zoneDelegatesByLocalZone;
    HMFUnfairLock *_lock;
    HMDLogEventDispatcher *_logEventDispatcher;
}

+ (id)logCategory;
+ (id)cameraClipsDatabase;
+ (id)defaultDatabase;
- (void).cxx_destruct;
@property BOOL hasStarted; // @synthesize hasStarted=_hasStarted;
@property(readonly) HMDLogEventDispatcher *logEventDispatcher; // @synthesize logEventDispatcher=_logEventDispatcher;
@property(readonly) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(readonly) HMBCloudDatabase *cloudDatabase; // @synthesize cloudDatabase=_cloudDatabase;
@property(readonly) HMBLocalDatabase *localDatabase; // @synthesize localDatabase=_localDatabase;
- (id)logIdentifier;
- (void)localZone:(id)arg1 didCompleteProcessingWithResult:(id)arg2;
- (void)cloudDatabase:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;
- (void)cloudDatabase:(id)arg1 didRemoveZoneWithID:(id)arg2;
- (id)cloudDatabase:(id)arg1 willRemoveZoneWithID:(id)arg2;
- (void)cloudDatabase:(id)arg1 didCreateZoneWithID:(id)arg2;
- (void)localDatabase:(id)arg1 willRemoveZoneWithID:(id)arg2;
- (void)localDatabase:(id)arg1 detectedLocalCorruptionWithInfo:(id)arg2;
- (BOOL)localDatabaseShouldLogPrivateInformation:(id)arg1;
- (id)mergedActionFutureForActionFutures:(id)arg1;
- (void)performZoneDelegateCallback:(CDUnknownBlockType)arg1 forLocalZone:(id)arg2;
- (void)removeZoneDelegate:(id)arg1 forLocalZone:(id)arg2;
- (void)addZoneDelegate:(id)arg1 forLocalZone:(id)arg2;
@property(readonly) NSMapTable *zoneDelegatesByLocalZone; // @synthesize zoneDelegatesByLocalZone=_zoneDelegatesByLocalZone;
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;
@property(readonly) NSHashTable *delegates; // @synthesize delegates=_delegates;
- (id)removeZonesWithID:(id)arg1 isOwned:(BOOL)arg2;
- (id)zonesWithID:(id)arg1 isOwned:(BOOL)arg2 configuration:(id)arg3 delegate:(id)arg4 error:(id *)arg5;
- (id)declineInvitation:(id)arg1;
- (id)acceptInvitation:(id)arg1;
- (id)removeLocalAndCloudDataForLocalZone:(id)arg1;
- (id)removeSharedZonesWithName:(id)arg1;
- (id)removeOwnedZonesWithName:(id)arg1;
- (id)sharedZonesWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id *)arg4;
- (id)existingSharedZoneIDWithName:(id)arg1;
- (id)ownedZonesWithName:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id *)arg4;
- (id)unregisterSharedSubscriptionForExternalRecordType:(id)arg1;
- (id)registerSharedSubscriptionForExternalRecordType:(id)arg1;
- (void)start;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)initWithLocalDatabase:(id)arg1 cloudDatabase:(id)arg2 logEventDispatcher:(id)arg3;
- (id)initWithCloudContainerIdentifier:(id)arg1 cloudContainerSourceApplicationBundleIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

