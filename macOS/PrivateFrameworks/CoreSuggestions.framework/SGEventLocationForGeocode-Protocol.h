//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestions/NSObject-Protocol.h>

@class NSData, NSString;

@protocol SGEventLocationForGeocode <NSObject>
- (id)geocodedLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 handle:(NSData *)arg4;
- (id)geocodedLocationWithLabel:(NSString *)arg1 address:(NSString *)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(double)arg5 handle:(NSData *)arg6;
- (NSData *)geocodeHandle;
- (double)geocodeAccuracy;
- (double)geocodeLongitude;
- (double)geocodeLatitude;
- (BOOL)geocodeIsEnd;
- (BOOL)geocodeIsStart;
- (NSString *)geocodeAirportCode;
- (NSString *)geocodeAddress;
- (NSString *)geocodeLabel;
@end

