//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BSZeroingWeakReference : NSObject
{
    id _object;
    Class _objectClass;
    unsigned long long _objectAddress;
}

+ (id)referenceWithObject:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long objectAddress; // @synthesize objectAddress=_objectAddress;
@property(nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
@property(readonly, nonatomic) __weak id object;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithObject:(id)arg1;

@end

