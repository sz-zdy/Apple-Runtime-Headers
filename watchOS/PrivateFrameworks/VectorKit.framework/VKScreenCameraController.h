//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKCameraController.h>

#import <VectorKit/VKAnnotationTrackingCameraController-Protocol.h>
#import <VectorKit/VKGesturingCameraController-Protocol.h>

@class NSString, VKAnnotationTrackingCameraController, VKCameraRegionRestriction, VKGestureCameraBehavior, VKTimedAnimation;
@protocol VKTrackableAnnotation;

__attribute__((visibility("hidden")))
@interface VKScreenCameraController : VKCameraController <VKAnnotationTrackingCameraController, VKGesturingCameraController>
{
    VKTimedAnimation *_zoomAnimation;
    VKTimedAnimation *_pitchAnimation;
    VKTimedAnimation *_rotationAnimation;
    VKTimedAnimation *_regionAnimation;
    VKAnnotationTrackingCameraController *_annotationTrackingCameraController;
    VKGestureCameraBehavior *_gestureCameraControllerBehavior;
    int _annotationTrackingZoomStyle;
    int _annotationTrackingHeadingAnimationDisplayRate;
    _Bool _isPitchIncreasing;
    VKCameraRegionRestriction *_regionRestriction;
    struct {
        double min;
        double max;
    } _centerCoordinateDistanceRange;
}

@property(retain, nonatomic) VKCameraRegionRestriction *regionRestriction; // @synthesize regionRestriction=_regionRestriction;
@property(nonatomic) CDStruct_c3b9c2ee centerCoordinateDistanceRange; // @synthesize centerCoordinateDistanceRange=_centerCoordinateDistanceRange;
@property(nonatomic) int annotationTrackingHeadingAnimationDisplayRate; // @synthesize annotationTrackingHeadingAnimationDisplayRate=_annotationTrackingHeadingAnimationDisplayRate;
@property(nonatomic) int annotationTrackingZoomStyle; // @synthesize annotationTrackingZoomStyle=_annotationTrackingZoomStyle;
- (void)setCamera:(id)arg1;
- (_Bool)canEnter3DMode;
- (void)exit3DMode;
- (void)enter3DMode;
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (int)tileSize;
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(int)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(int)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (_Bool)tapAtPoint:(struct CGPoint)arg1;
- (void)transferGestureState:(id)arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopPanningAtPoint:(struct CGPoint)arg1;
- (void)updatePanWithTranslation:(struct CGPoint)arg1;
- (void)startPanningAtPoint:(struct CGPoint)arg1 panAtStartPoint:(_Bool)arg2;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;
- (void)setCenterCoordinateDistanceRange:(CDStruct_c3b9c2ee)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;
- (void)clampZoomLevelIfNecessary;
- (_Bool)snapMapIfNecessary:(_Bool)arg1;
- (_Bool)isAnimating;
- (void)stopAnimations;
- (void)stopRegionAnimation;
- (void)stopSnappingAnimations;
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;
@property(readonly, nonatomic) _Bool isAnimatingToTrackAnnotation;
@property(readonly, nonatomic) _Bool isTrackingHeading;
@property(readonly, nonatomic) id <VKTrackableAnnotation> trackingAnnotation;
- (void)stopTrackingAnnotation;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3;
- (void)dealloc;
- (id)initWithMapDataAccess:(struct MapDataAccess *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4;

// Remaining properties
@property(readonly, nonatomic, getter=isAnimatingToTrackAnnotation) _Bool animatingToTrackAnnotation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTrackingHeading) _Bool trackingHeading;

@end

