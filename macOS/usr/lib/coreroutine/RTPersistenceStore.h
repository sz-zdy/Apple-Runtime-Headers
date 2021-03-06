//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCloudKitMirroringDelegate, NSCloudKitMirroringDelegateOptions, NSMutableDictionary, NSPersistentStoreDescription, NSURL, RTPersistenceMigrator;

@interface RTPersistenceStore : NSObject
{
    NSPersistentStoreDescription *_storeDescription;
    BOOL _mirroringDelegateIntialized;
    RTPersistenceMigrator *_migrator;
    NSMutableDictionary *_userInfo;
    NSCloudKitMirroringDelegate *_mirroringDelegate;
    NSCloudKitMirroringDelegateOptions *_mirroringDelegateOptions;
    unsigned long long _state;
    long long _mirroringDelegateState;
}

+ (id)storeBaseName:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long mirroringDelegateState; // @synthesize mirroringDelegateState=_mirroringDelegateState;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSCloudKitMirroringDelegateOptions *mirroringDelegateOptions; // @synthesize mirroringDelegateOptions=_mirroringDelegateOptions;
@property(retain, nonatomic) NSCloudKitMirroringDelegate *mirroringDelegate; // @synthesize mirroringDelegate=_mirroringDelegate;
@property(readonly) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) NSPersistentStoreDescription *storeDescription; // @synthesize storeDescription=_storeDescription;
@property(retain, nonatomic) RTPersistenceMigrator *migrator; // @synthesize migrator=_migrator;
- (id)storeBaseName;
- (id)storeURLsMatchingStoreNameAtURL:(id)arg1;
- (id)storeURLsMatchingStoreName;
- (void)onMirroringDelegateInitialization:(id)arg1;
- (BOOL)updateMetadata:(id)arg1 coordinator:(id)arg2 error:(id *)arg3;
- (id)retrieveMetadataWithCoordinator:(id)arg1 error:(id *)arg2;
- (id)_validateKeys:(id)arg1;
- (BOOL)performVacuumWithCoordinator:(id)arg1 error:(id *)arg2;
- (id)cachedModelWithError:(id *)arg1;
- (BOOL)rekeyWithCoordinator:(id)arg1 keyData:(id)arg2 error:(id *)arg3;
- (BOOL)destroyWithCoordinator:(id)arg1 error:(id *)arg2;
- (BOOL)removeFromCoordinator:(id)arg1 error:(id *)arg2;
- (BOOL)removeStoreAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)addToCoordinator:(id)arg1 lightweightMigration:(BOOL)arg2 vacuum:(BOOL)arg3 allowMirroring:(BOOL)arg4 error:(id *)arg5;
- (BOOL)openWithCoordinator:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id)_normalizeError:(id)arg1 storeDescription:(id)arg2;
- (BOOL)error:(id *)arg1 inError:(id)arg2;
- (BOOL)error:(id *)arg1 code:(unsigned long long)arg2;
- (id)storeName;
@property(readonly) NSURL *URL;
- (void)dealloc;
- (id)initWithStoreDescription:(id)arg1;
- (id)init;

@end

