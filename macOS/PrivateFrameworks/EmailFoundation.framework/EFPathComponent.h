//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/NSCopying-Protocol.h>

@class NSString;

@interface EFPathComponent : NSObject <NSCopying>
{
    NSString *_sanitizedString;
}

+ (id)pathComponentWithString:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *sanitizedString; // @synthesize sanitizedString=_sanitizedString;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithString:(id)arg1;

@end

