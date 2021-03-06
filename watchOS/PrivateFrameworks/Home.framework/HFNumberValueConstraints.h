//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class HFNumberRange, NSNumber, NSString;

@interface HFNumberValueConstraints : NSObject <NAIdentifiable>
{
    NSNumber *_minValue;
    NSNumber *_maxValue;
    NSNumber *_stepValue;
}

+ (id)na_identity;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(readonly, copy, nonatomic) NSNumber *maxValue; // @synthesize maxValue=_maxValue;
@property(readonly, copy, nonatomic) NSNumber *minValue; // @synthesize minValue=_minValue;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)_normalizeRangeValue:(id)arg1 withinRange:(id)arg2;
- (id)_normalizeStepValue:(id)arg1 withinRange:(id)arg2;
- (id)percentageConstraintsWithinRange:(id)arg1;
- (id)percentageConstraints;
- (id)normalizedRangeForRange:(id)arg1;
- (id)normalizedValueForValue:(id)arg1;
- (id)roundedValueForValue:(id)arg1;
- (id)boundedValueForValue:(id)arg1;
@property(readonly, copy, nonatomic) HFNumberRange *validRange;
- (id)initWithMinValue:(id)arg1 maxValue:(id)arg2 stepValue:(id)arg3;
- (id)initWithValidRange:(id)arg1 stepValue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

