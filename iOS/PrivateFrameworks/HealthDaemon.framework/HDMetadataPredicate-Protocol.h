//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDSQLitePredicate, NSSet, NSString;

@protocol HDMetadataPredicate <NSObject>
+ (HDSQLitePredicate *)predicateWithMetadataKey:(NSString *)arg1 exists:(_Bool)arg2;
+ (HDSQLitePredicate *)predicateWithMetadataKey:(NSString *)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3;
+ (HDSQLitePredicate *)predicateWithMetadataKey:(NSString *)arg1 allowedValues:(NSSet *)arg2;
@end

