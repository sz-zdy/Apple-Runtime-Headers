//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOSolarEclipticCelestialBodyData : NSObject
{
    double _latitude;
    double _longitude;
}

@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
- (id)initWithJulianDay:(double)arg1 body:(long long)arg2 useHighPrecision:(BOOL)arg3;
- (id)initWithDate:(id)arg1 body:(long long)arg2 useHighPrecision:(BOOL)arg3;
- (id)initWithDate:(id)arg1 body:(long long)arg2;

@end

