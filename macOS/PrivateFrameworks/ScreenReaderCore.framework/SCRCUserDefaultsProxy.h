//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCUserDefaultsBase.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRCUserDefaultsProxy : SCRCUserDefaultsBase
{
    NSString *_prefix;
    NSString *_name;
    NSString *_key;
    NSString *_domain;
    NSString *_pdomain;
    BOOL _dirty;
    BOOL _profilable;
    id _data;
    long long _prefixLength;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void).cxx_destruct;
- (id)_longKeyForShortKey:(id)arg1;
- (id)_shortKeyForLongKey:(id)arg1;
- (id)allKeys;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (id)exclusiveValueForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)removeAllValues;

@end

