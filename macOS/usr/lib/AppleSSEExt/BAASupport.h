//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BAASupport : NSObject
{
}

+ (void)setBlessedUser:(unsigned int)arg1 keybagUUID:(unsigned char [16])arg2;
+ (int)issueNewCertificate;
+ (int)getCertificates:(id *)arg1;
+ (int)getCertificateExpirationDate:(double *)arg1;
+ (int)prepare;
+ (void)setDelegate:(id)arg1;
+ (void)initialize;

@end

