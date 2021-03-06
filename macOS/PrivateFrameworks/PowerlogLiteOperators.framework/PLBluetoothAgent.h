//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PowerlogCore/PLAgent.h>

@class IOBluetoothHostController, IOBluetoothUserNotification, NSArray, NSDate, NSSet, PLEntryNotificationOperatorComposition;

@interface PLBluetoothAgent : PLAgent
{
    unsigned char _logCount;
    unsigned char _scanState;
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    PLEntryNotificationOperatorComposition *_sbcChanged;
    PLEntryNotificationOperatorComposition *_wakeEntryNotifications;
    NSDate *_lastPowerEntryDate;
    IOBluetoothHostController *_ioBTController;
    NSArray *_cachedPairedDevices;
    NSSet *_cachedPairedDevicesAddresses;
    IOBluetoothUserNotification *_btConnectionNotification;
}

+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitionMaxDutyCycle;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (void)load;
- (void).cxx_destruct;
@property(retain) IOBluetoothUserNotification *btConnectionNotification; // @synthesize btConnectionNotification=_btConnectionNotification;
@property unsigned char scanState; // @synthesize scanState=_scanState;
@property(retain) NSSet *cachedPairedDevicesAddresses; // @synthesize cachedPairedDevicesAddresses=_cachedPairedDevicesAddresses;
@property(retain) NSArray *cachedPairedDevices; // @synthesize cachedPairedDevices=_cachedPairedDevices;
@property(retain) IOBluetoothHostController *ioBTController; // @synthesize ioBTController=_ioBTController;
@property unsigned char logCount; // @synthesize logCount=_logCount;
@property(retain) NSDate *lastPowerEntryDate; // @synthesize lastPowerEntryDate=_lastPowerEntryDate;
@property(readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications; // @synthesize wakeEntryNotifications=_wakeEntryNotifications;
@property(retain) PLEntryNotificationOperatorComposition *sbcChanged; // @synthesize sbcChanged=_sbcChanged;
@property(retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // @synthesize batteryLevelChanged=_batteryLevelChanged;
- (void)refreshBTPairedDevices;
- (void)refreshBTPairedDevicesWithNewDevices:(id)arg1;
- (id)getCurrentPairedBTDevices;
- (void)logConnectedDevicesOSX:(id)arg1;
- (void)logPairedDevicesOSX:(id)arg1;
- (void)logDeviceStateOSX:(id)arg1;
- (void)receivedBTStatusUpdateOSX:(id)arg1;
- (void)btDeviceConnectionNotification:(id)arg1 forDevice:(id)arg2;
- (void)modelBluetoothOffPower;
- (void)modelBluetoothPower:(id)arg1;
- (void)logEventBackwardWirelessProximity:(id)arg1;
- (void)logEventBackwardPowerProfileStats;
- (void)logEventIntervalConnectedDevices;
- (void)logEventIntervalWakeVSE:(id)arg1;
- (id)advertisingDataDescription:(const char *)arg1:(unsigned long long)arg2;
- (void)logEventIntervalHCIRawData:(id)arg1;
- (void)logEventIntervalLeConnectedDevices:(id)arg1 withRequest:(BOOL)arg2;
- (void)logEventForwardPairedDevices;
- (void)logEventForwardDeviceState;
- (void)logwithBTOnCheck;
- (void)log;
- (BOOL)isConnectable;
- (BOOL)isConnected;
- (BOOL)isDiscoverable;
- (BOOL)modulePowered;
- (void)dealloc;
- (void)initOperatorDependancies;
- (id)init;

@end

