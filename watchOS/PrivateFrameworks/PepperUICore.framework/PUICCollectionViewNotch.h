//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PUICCollectionViewNotch : NSObject
{
    _Bool _shouldIgnoreNotch;
    float _start;
    float _end;
    unsigned int _startEdgeType;
    unsigned int _endEdgeType;
    float _restingPosition;
}

@property(nonatomic) _Bool shouldIgnoreNotch; // @synthesize shouldIgnoreNotch=_shouldIgnoreNotch;
@property(nonatomic) float restingPosition; // @synthesize restingPosition=_restingPosition;
@property(nonatomic) unsigned int endEdgeType; // @synthesize endEdgeType=_endEdgeType;
@property(nonatomic) unsigned int startEdgeType; // @synthesize startEdgeType=_startEdgeType;
@property(nonatomic) float end; // @synthesize end=_end;
@property(nonatomic) float start; // @synthesize start=_start;
- (id)description;
- (id)rangeDescription;
- (_Bool)hasSoftEdge;
- (_Bool)overlapsWithNotch:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWitRestingPosition:(float)arg1 radius:(float)arg2 restingLocation:(int)arg3;
- (id)initWithCenter:(float)arg1 radius:(float)arg2 startEdgeType:(unsigned int)arg3 endEdgeType:(unsigned int)arg4;
- (id)initWithCenter:(float)arg1 radius:(float)arg2;

@end

