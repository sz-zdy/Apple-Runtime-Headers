//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@interface NEIKEv2IntegrityProtocol : NSObject <NSCopying>
{
    unsigned int _type;
}

@property unsigned int type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithType:(unsigned int)arg1;
@property(readonly) unsigned int keyLength;
@property(readonly) unsigned int digestLength;

@end

