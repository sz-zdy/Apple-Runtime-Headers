//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExposureNotificationDaemon/ENCoreTelephonyUtilityObserver-Protocol.h>

@class ENCloudServerChannel, ENDeviceIdentityUtility, ENRegion, ENServerConfiguration, ENXPCTimer, NSString;
@protocol ENConfigurationManagerDelegate, OS_dispatch_queue;

@interface ENConfigurationManager : NSObject <ENCoreTelephonyUtilityObserver>
{
    int _deviceActivationChangedNotifyToken;
    _Bool _mobileCountryCodeOverriden;
    _Bool _isDeviceActivated;
    NSObject<ENConfigurationManagerDelegate> *_delegate;
    ENServerConfiguration *_currentServerConfiguration;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_fileAccessQueue;
    ENXPCTimer *_serverConfigurationFetchTimer;
    ENXPCTimer *_appConfigurationFetchTimer;
    ENXPCTimer *_gracePeriodConfigurationFetchTimer;
    ENRegion *_recentRegion;
    ENCloudServerChannel *_cloudServerChannel;
    ENDeviceIdentityUtility *_deviceIdentityUtility;
}

+ (id)fileURLforDeveloperConfiguration;
+ (id)configurationCacheURL;
+ (id)regionCacheURL;
+ (id)cloudCacheURL;
+ (id)fileURLforRegionConfiguration:(id)arg1;
+ (id)iCloudServerEndpoint;
- (void).cxx_destruct;
@property(nonatomic) _Bool isDeviceActivated; // @synthesize isDeviceActivated=_isDeviceActivated;
@property(retain, nonatomic) ENDeviceIdentityUtility *deviceIdentityUtility; // @synthesize deviceIdentityUtility=_deviceIdentityUtility;
@property(retain, nonatomic) ENCloudServerChannel *cloudServerChannel; // @synthesize cloudServerChannel=_cloudServerChannel;
@property(retain, nonatomic) ENRegion *recentRegion; // @synthesize recentRegion=_recentRegion;
@property(retain, nonatomic) ENXPCTimer *gracePeriodConfigurationFetchTimer; // @synthesize gracePeriodConfigurationFetchTimer=_gracePeriodConfigurationFetchTimer;
@property(retain, nonatomic) ENXPCTimer *appConfigurationFetchTimer; // @synthesize appConfigurationFetchTimer=_appConfigurationFetchTimer;
@property(retain, nonatomic) ENXPCTimer *serverConfigurationFetchTimer; // @synthesize serverConfigurationFetchTimer=_serverConfigurationFetchTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileAccessQueue; // @synthesize fileAccessQueue=_fileAccessQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) _Bool mobileCountryCodeOverriden; // @synthesize mobileCountryCodeOverriden=_mobileCountryCodeOverriden;
@property(copy, nonatomic) ENServerConfiguration *currentServerConfiguration; // @synthesize currentServerConfiguration=_currentServerConfiguration;
@property(nonatomic) __weak NSObject<ENConfigurationManagerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)prefsChanged;
- (void)telephonyUtility:(id)arg1 mobileCountryCodeChanged:(id)arg2 andCountryCodeISO:(id)arg3;
- (void)clearTemporaryServerConfiguration;
- (id)readTemporaryServerConfiguration;
- (_Bool)cacheTemporaryServerConfiguration:(id)arg1;
- (void)_processConfiguration:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)stopGracePeriodTimer;
- (void)setupGracePeriodFetchTimerWithDelay:(double)arg1;
- (void)_printServerConfiguration:(id)arg1;
- (void)resetConfigurationCache;
- (void)mergePhaseOneAppConfiguration:(id)arg1 withConfigurationForRegion:(id)arg2;
- (void)persistRegionConfiguration:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)cachedConfigurationForRegion:(id)arg1;
- (id)cachedConfigurationForCountryCode:(id)arg1;
- (id)createOrFindRegionConfigurationForRegion:(id)arg1;
- (void)saveConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allCachedRegionConfigurationsWithCompletion:(CDUnknownBlockType)arg1;
- (id)cachedAppConfiguationForMobileCountryCode:(id)arg1;
- (id)cachedAppConfiguationForBundleID:(id)arg1 regionID:(id)arg2;
- (void)_processAppConfigurations:(id)arg1 forRequestedRegionID:(id)arg2 andRequestedBundleIDs:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setupAppConfigurationForBundleIDs:(id)arg1 regionID:(id)arg2 publicKeyVersion:(id)arg3 withFetchTimerWithDelay:(double)arg4;
- (void)_appConfigNetworkRequestForBundleIDs:(id)arg1 publicKeyVersion:(id)arg2 andRegionID:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (_Bool)_verifyAppleServerResponse:(id)arg1 signatureHeader:(id)arg2;
- (void)_fetchAppConfigurationForBundleID:(id)arg1 publicKeyVersion:(id)arg2 andRegionID:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_fetchAppConfigurationForBundleIDs:(id)arg1 regionID:(id)arg2 publicKeyVersion:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)setupAppConfigCallbackTimerForConfiguration:(id)arg1;
- (void)fetchAppConfigurationForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAppConfigurationForBundleID:(id)arg1 withRegionID:(id)arg2 andPublicKeyVersion:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_scheduleRegionConfigurationRefresh;
- (void)buildRegionConfigurationNetworkRequestForRegion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)serverConfigurationForRegion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)activate;
- (void)checkActivationState;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

