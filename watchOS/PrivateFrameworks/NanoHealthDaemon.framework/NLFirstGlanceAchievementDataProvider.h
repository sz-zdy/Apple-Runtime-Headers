//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoHealthDaemon/NLFirstGlanceDataProvider.h>

#import <NanoHealthDaemon/NLFirstGlanceAchievementDataProvider-Protocol.h>

@class NSString;

@interface NLFirstGlanceAchievementDataProvider : NLFirstGlanceDataProvider <NLFirstGlanceAchievementDataProvider>
{
}

- (void)_firstAchievementFromAchievements:(id)arg1 passingMilestoneTest:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)hasAchievementProgressToDisplay;
- (id)completedAchievementForYesterday;
- (id)yesterdayLocalizationKeyForAchievement:(id)arg1;
- (id)progressLocalizationKeyForAchievement:(id)arg1 progressMilestone:(id)arg2;
- (void)progressAchievementAndMilestoneWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

