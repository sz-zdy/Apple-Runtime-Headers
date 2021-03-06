//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSSceneMessage.h>

@class FBSSceneClientSettingsDiff, FBSSceneSettingsDiff, FBSSceneTransitionContext, NSSet;

@interface FBSSceneEvent : FBSSceneMessage
{
    long long _source;
    FBSSceneSettingsDiff *_settingsDiff;
    FBSSceneClientSettingsDiff *_clientSettingsDiff;
    FBSSceneTransitionContext *_transitionContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBSSceneTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain, nonatomic) FBSSceneClientSettingsDiff *clientSettingsDiff; // @synthesize clientSettingsDiff=_clientSettingsDiff;
@property(retain, nonatomic) FBSSceneSettingsDiff *settingsDiff; // @synthesize settingsDiff=_settingsDiff;
@property(nonatomic) long long source; // @synthesize source=_source;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
@property(readonly, nonatomic) NSSet *actions;
- (id)init;

@end

