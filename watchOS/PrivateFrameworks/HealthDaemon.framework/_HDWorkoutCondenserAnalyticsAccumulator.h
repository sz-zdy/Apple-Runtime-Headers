//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _HDWorkoutCondenserAnalyticsAccumulator : NSObject
{
    _Bool _hasProcessedWorkout;
    int _workoutsToCondense;
    int _workoutsToRecondense;
    int _condensedWorkouts;
    int _processedWorkouts;
    int _createdSeries;
    int _deletedSamples;
}

@property(nonatomic) _Bool hasProcessedWorkout; // @synthesize hasProcessedWorkout=_hasProcessedWorkout;
@property(nonatomic) int deletedSamples; // @synthesize deletedSamples=_deletedSamples;
@property(nonatomic) int createdSeries; // @synthesize createdSeries=_createdSeries;
@property(nonatomic) int processedWorkouts; // @synthesize processedWorkouts=_processedWorkouts;
@property(nonatomic) int condensedWorkouts; // @synthesize condensedWorkouts=_condensedWorkouts;
@property(nonatomic) int workoutsToRecondense; // @synthesize workoutsToRecondense=_workoutsToRecondense;
@property(nonatomic) int workoutsToCondense; // @synthesize workoutsToCondense=_workoutsToCondense;
- (id)description;
- (id)init;

@end

