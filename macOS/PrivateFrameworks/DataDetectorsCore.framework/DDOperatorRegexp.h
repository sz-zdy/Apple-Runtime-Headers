//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataDetectorsCore/DDBasicRegexp.h>

#import <DataDetectorsCore/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface DDOperatorRegexp : DDBasicRegexp <NSCopying>
{
    NSMutableArray *_subMatchers;
}

- (void)appendDescriptionToString:(id)arg1 depth:(int)arg2 operator:(id)arg3;
- (id)prettyPrintWithPriority:(int)arg1 operatorPriority:(int)arg2 operator:(id)arg3;
- (id)effectiveArgument;
- (int)splitRegexpWithDelegate:(id)arg1 owner:(id)arg2;
- (id)arguments;
- (void)dealloc;
- (id)initWithSubMatchersList:(id)arg1;
- (id)initWithSubMatchers:(id)arg1;
- (id)initWithVarArgs:(struct __va_list_tag [1])arg1;
- (id)initWithFirst:(id)arg1 varArgs:(struct __va_list_tag [1])arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)computeTypeFromParent:(id)arg1 withManager:(id)arg2 kind:(int)arg3;

@end

