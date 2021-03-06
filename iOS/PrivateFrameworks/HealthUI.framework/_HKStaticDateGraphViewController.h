//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKDateGraphViewController.h>

@class HKValueRange, NSMutableArray;

@interface _HKStaticDateGraphViewController : HKDateGraphViewController
{
    NSMutableArray *_allStackedSeries;
    HKValueRange *_fixedRange;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HKValueRange *fixedRange; // @synthesize fixedRange=_fixedRange;
@property(retain, nonatomic) NSMutableArray *allStackedSeries; // @synthesize allStackedSeries=_allStackedSeries;
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(_Bool)arg3;
- (long long)stackCountForGraphView:(id)arg1;
- (void)addStackedSeries:(id)arg1;
- (void)viewDidLoad;
- (id)initWithFixedRange:(id)arg1;

@end

