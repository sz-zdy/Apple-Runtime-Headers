//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class IKNImageViewHandler, IKNSelection;

__attribute__((visibility("hidden")))
@interface IKNKnobsLayer : CALayer
{
    IKNImageViewHandler *_handler;
    struct CGPath *_handlePath;
    BOOL _selectionsCanBeModified;
    IKNSelection *_mouseOverSelection;
    long long _mouseOverKnob;
    BOOL _hideNonSelectedKnobs;
    long long _autoItemGuideIndex;
    long long _mouseOverGuideIndex;
    BOOL _drawGuides;
    long long _guideCount;
    struct CGPoint _guidePoints[8];
}

+ (void)initialize;
@property(retain) IKNSelection *mouseOverSelection; // @synthesize mouseOverSelection=_mouseOverSelection;
@property(nonatomic) BOOL selectionsCanBeModified; // @synthesize selectionsCanBeModified=_selectionsCanBeModified;
@property(nonatomic) BOOL hideNonSelectedKnobs; // @synthesize hideNonSelectedKnobs=_hideNonSelectedKnobs;
@property(nonatomic) IKNImageViewHandler *handler; // @synthesize handler=_handler;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)resetMouseOverInfo;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawCircleInContext:(struct CGContext *)arg1 center:(struct CGPoint)arg2 radius:(double)arg3 relativeTo:(id)arg4;
- (void)drawHandleInContext:(struct CGContext *)arg1 atPoint:(struct CGPoint)arg2 filled:(BOOL)arg3;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (void)dragWithEvent:(id)arg1 layers:(id)arg2;
- (void)rotateWithEvent:(id)arg1 layers:(id)arg2;
- (void)resizeWithEvent:(id)arg1 item:(id)arg2 knob:(long long)arg3;
- (void)updateGuidesForAutodetectedItem:(id)arg1 drawSingleGuide:(BOOL)arg2;
- (BOOL)drawGuideForResizing:(struct CGPoint)arg1 autoItem:(id)arg2;
- (void)addGuideFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 index:(long long *)arg3;
- (void)adjustToViewFrameChange:(id)arg1;
- (void)setup;
- (void)dealloc;

@end

