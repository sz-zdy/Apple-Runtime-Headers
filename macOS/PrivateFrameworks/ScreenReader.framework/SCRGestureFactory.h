//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCGestureFactory.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRGestureFactory : SCRCGestureFactory
{
    BOOL _isFullyEnabled;
    BOOL _isBuiltIn;
    unsigned long long _deviceIdentifier;
}

@property(nonatomic) BOOL isBuiltIn; // @synthesize isBuiltIn=_isBuiltIn;
@property(nonatomic) BOOL isFullyEnabled; // @synthesize isFullyEnabled=_isFullyEnabled;
@property(nonatomic) unsigned long long deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, copy, nonatomic) NSString *hitRegion;

@end

