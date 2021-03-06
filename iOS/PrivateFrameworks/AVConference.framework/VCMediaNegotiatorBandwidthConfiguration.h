//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorBandwidthConfiguration : NSObject
{
    int _mode;
    int _connectionType;
    unsigned int _maxBandwidth;
    _Bool _isDefaultMode;
}

@property(nonatomic) _Bool isDefaultMode; // @synthesize isDefaultMode=_isDefaultMode;
@property(nonatomic) unsigned int maxBandwidth; // @synthesize maxBandwidth=_maxBandwidth;
@property(nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMode:(int)arg1 connectionType:(int)arg2 maxBandwidth:(unsigned int)arg3;
- (id)initWithConnectionType:(int)arg1 maxBandwidth:(unsigned int)arg2;

@end

