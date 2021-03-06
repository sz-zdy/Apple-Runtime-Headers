//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, RTLocation;

@interface RTPlaceInferenceOptions : NSObject <NSSecureCoding>
{
    BOOL _useBackground;
    unsigned long long _fidelityPolicy;
    NSArray *_locations;
    NSArray *_accessPoints;
    RTLocation *_location;
    double _distance;
    NSDate *_startDate;
    NSDate *_endDate;
    long long _limit;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL useBackground; // @synthesize useBackground=_useBackground;
@property(readonly, nonatomic) long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) double distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) RTLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSArray *accessPoints; // @synthesize accessPoints=_accessPoints;
@property(readonly, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(readonly, nonatomic) unsigned long long fidelityPolicy; // @synthesize fidelityPolicy=_fidelityPolicy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithinDistance:(double)arg1 location:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)initWithFidelityPolicy:(unsigned long long)arg1 locations:(id)arg2 accessPoints:(id)arg3;
- (id)initWithFidelityPolicy:(unsigned long long)arg1 locations:(id)arg2 accessPoints:(id)arg3 distance:(double)arg4 location:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 limit:(long long)arg8 useBackground:(BOOL)arg9;
- (id)init;

@end

