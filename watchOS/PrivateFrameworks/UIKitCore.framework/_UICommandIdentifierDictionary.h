//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSMutableDictionary, _UISelectorDictionary;

__attribute__((visibility("hidden")))
@interface _UICommandIdentifierDictionary : NSObject <NSCopying>
{
    _UISelectorDictionary *_actionDictionary;
    NSMutableDictionary *_actionPropertyListDictionary;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)removeEntriesFromDictionary:(id)arg1;
- (id)intersectingIdentifiersFromDictionary:(id)arg1;
- (_Bool)intersectsEntriesFromDictionary:(id)arg1;
- (void)removeObjectForAction:(SEL)arg1 propertyList:(id)arg2;
- (void)setObject:(id)arg1 forAction:(SEL)arg2 propertyList:(id)arg3;
- (id)objectForAction:(SEL)arg1 propertyList:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

