//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface ENAdvertisement : NSObject
{
    BOOL _typicalRSSI;
    BOOL _maxRSSI;
    _Bool _saturated;
    unsigned char _counter;
    unsigned short _scanInterval;
    NSData *_rpi;
    NSData *_encryptedAEM;
    double _timestamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned char counter; // @synthesize counter=_counter;
@property(nonatomic) _Bool saturated; // @synthesize saturated=_saturated;
@property(nonatomic) BOOL maxRSSI; // @synthesize maxRSSI=_maxRSSI;
@property(nonatomic) BOOL typicalRSSI; // @synthesize typicalRSSI=_typicalRSSI;
@property(nonatomic) unsigned short scanInterval; // @synthesize scanInterval=_scanInterval;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSData *encryptedAEM; // @synthesize encryptedAEM=_encryptedAEM;
@property(retain, nonatomic) NSData *rpi; // @synthesize rpi=_rpi;
- (id)description;
- (void)combineWithAdvertisement:(id)arg1;
- (CDStruct_b4df49b9)structRepresentation;
- (id)initWithRPI:(id)arg1 encryptedAEM:(id)arg2 timestamp:(double)arg3 scanInterval:(unsigned short)arg4 typicalRSSI:(BOOL)arg5 maxRSSI:(BOOL)arg6 saturated:(_Bool)arg7 counter:(unsigned char)arg8;
- (id)initWithStructRepresentation:(CDStruct_b4df49b9)arg1;

@end

